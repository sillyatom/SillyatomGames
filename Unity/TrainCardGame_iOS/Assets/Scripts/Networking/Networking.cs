using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Newtonsoft;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class Networking : SceneMonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void sendDataToAll(string data);

    [DllImport("__Internal")]
    private static extern void sendDataToPlayer(string playerId, string data);

    private List<NetworkResponse> _results = new List<NetworkResponse>();

    private List<NetworkPlayer> _players = new List<NetworkPlayer>();
    private List<NetworkPlayer> _playersExcludingThis = new List<NetworkPlayer>();
    private List<string> _playersIdsExcludingThis = new List<string>();
    private List<string> _playersIds = new List<string>();

    private float _timeElapsed = 0.0f;

    public static bool isHost = false;
    public static string hostId = "0";
    public static string localId = "0";

    private bool _pauseUpdate = false;

    public int numPlayers
    {
        get
        {
            return _players.Count;
        }
    }

    public List<NetworkPlayer> Players
    {
        get
        {
            return _players;
        }
    }

    public List<string> PlayersIds
    {
        get
        {
            return _playersIds;
        }
    }

    public List<NetworkPlayer> PlayersExcludingThis
    {
        get
        {
            return _playersExcludingThis;
        }
    }

    public List<string> PlayersIdsExcludingThis
    {
        get
        {
            return _playersIdsExcludingThis;
        }
    }

    void Awake()
    {
        APIHandler.GetInstance().OnAPISuccess = OnAPISuccess;    
    }

    private bool isIdHost(string id)
    {
        return (hostId == id);
    }

    override protected void OnGameEvent(GameEvent evt)
    {
        switch (evt.type)
        {
            case GameEvent.ACKNOWLEDGE:
                Acknowledge(evt.response, isIdHost(evt.response.sender));
                break;
        }
    }

    public void OnReceiveData(string data)
    {
        BridgeDebugger.Log("[ Networking - OnReceiveData ] " + data);

        JObject json = JObject.Parse(data);
        int api = (int)json[NetworkConstants.KEY_API];

        int apiId = -1;
        if (json.Property(NetworkConstants.KEY_API_ID) != null)
        {
            apiId = (int)json[NetworkConstants.KEY_API_ID];
        }

        string sender = "";
        if (json.Property(NetworkConstants.KEY_SENDER) != null)
        {
            sender = (string)json[NetworkConstants.KEY_SENDER];
        }

        string playerId = "";
        if (json.Property(NetworkConstants.KEY_PLAYER_ID) != null)
        {
            playerId = (string)json[NetworkConstants.KEY_PLAYER_ID];
        }

        NetworkConstants.API eAPI = (NetworkConstants.API)(api);
        _results.Add(new NetworkResponse(eAPI, apiId, sender, playerId, data));
    }

    private void ExecuteEvent(NetworkResponse response)
    {
        if (response.sender.Length > 0 && response.sender == _players[0].PlayerId)
        {
            APIHandler.GetInstance().OnReceiveAcknowledgement(response.apiId, response.playerId);
            Acknowledge();
        }
        else
        {
            //for processing ackowledge should happen after animation
            ProcessData(response);
        }
    }

    private void ProcessData(NetworkResponse response)
    {
        NetworkConstants.API eAPI = response.api;
        BridgeDebugger.Log("[Networking - ProcessData ] " + eAPI.ToString());
        if (response.apiId > -1)
        {
            APIHandler.GetInstance().runningId = response.apiId;
        }
        switch (eAPI)
        {
            case NetworkConstants.API.GAME_CENTER_AUTH_SUCCESS:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.GC_AUTH_SUCCESS);
                    EventManager.instance.Raise(gEvent);
                    Acknowledge();
                }
                break;
            case NetworkConstants.API.GAME_CENTER_AUTH_FAILED:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.GC_AUTH_FAILED);
                    EventManager.instance.Raise(gEvent);
                    Acknowledge();
                }
                break;
            case NetworkConstants.API.MATCH_STARTED:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.MATCH_STARTED, response);
                    JObject json = JObject.Parse(response.data);

                    isHost = ((int)json[NetworkConstants.KEY_IS_HOST]) == 1 ? true : false;

                    _players = JsonConvert.DeserializeAnonymousType<List<NetworkPlayer>>(json[NetworkConstants.KEY_PLAYERS].ToString(), _players);
                    UpdatePlayersData();

                    BridgeDebugger.Log("-------------PLAYERS-----------");
                    foreach (var player in _players)
                    {
                        BridgeDebugger.Log(player.ToString());
                    }
                    BridgeDebugger.Log("-------------PLAYERS Ex-----------");
                    foreach (var player in _playersExcludingThis)
                    {
                        BridgeDebugger.Log(player.ToString());
                    }

                    if (isHost)
                    {
                        hostId = string.Copy(_players[0].PlayerId);
                    }
                    localId = string.Copy(_players[0].PlayerId);

                    BridgeDebugger.Log("[ Match Started ] - isHost " + isHost + " hostId " + hostId);
                    EventManager.instance.Raise(gEvent);
                    Acknowledge();
                }
                break;
            case NetworkConstants.API.HOST_DATA:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.HOST_DATA, response);

                    //update host id
                    JObject json = JObject.Parse(response.data);
                    hostId = (string)json[NetworkConstants.KEY_SENDER];

                    //acknowledge
                    Acknowledge(response, true);
                
                    EventManager.instance.Raise(gEvent);
                }
                break;
            case NetworkConstants.API.CARDS_DATA:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.UPDATE_CARDS_DATA, response);
                    EventManager.instance.Raise(gEvent);
                }
                break;
            case NetworkConstants.API.ROUND_RESULT:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.ROUND_RESULT, response);
                    EventManager.instance.Raise(gEvent);
                }
                break;
        }
    }

    private void Acknowledge(NetworkResponse response = null, bool isSenderHost = false)
    {
        if (response != null && isSenderHost)
        {
            AcknowledgeVO vo = new AcknowledgeVO((int)response.api, response.apiId, response.sender);
            vo.player_id = _players[0].PlayerId;
            BridgeDebugger.Log("[ Acknowleging API_ID ] - " + response.apiId);
            string data = JsonConvert.SerializeObject(vo);

            if (isSenderHost)
            {
                sendDataToPlayer(hostId, data);
            }
            else
            {
                //TODO
            }
        }
        _results.RemoveAt(0);
        _pauseUpdate = false;
    }

    public void OnAPISuccess(int api)
    {
        NetworkConstants.API eAPI = (NetworkConstants.API)api;
        BridgeDebugger.Log("[ ON API SUCCESS ] " + eAPI.ToString());

        switch (eAPI)
        {
            case NetworkConstants.API.HOST_DATA:
                EventManager.instance.Raise(new GameEvent(InGameEvent.DISPATCH_CARDS_DATA));
                break;
            case NetworkConstants.API.CARDS_DATA:
                if (isHost)
                {
                    EventManager.instance.Raise(new GameEvent(InGameEvent.START_GAME));
                }
                break;
        }
    }

    void Update()
    {
        if (!_pauseUpdate)
        {
            _timeElapsed += Time.deltaTime;

            if (_timeElapsed >= 0.5f)
            {
                _timeElapsed = 0.0f;

                if (_results.Count > 0)
                {
                    _pauseUpdate = true;
                    ExecuteEvent(_results[0]);
                }
            }
        }
    }

    private void UpdatePlayersData()
    {
        //copy to players excluding this
        for (int index = 1; index < _players.Count; index++)
        {
            NetworkPlayer player = _players[index];
            _playersExcludingThis.Add(player.DeepClone());
        }

        //copy to playersIds
        foreach (var player in _players)
        {
            _playersIds.Add(player.PlayerId.DeepClone());
        }

        //copy to playersIdsExcludingThis
        foreach (var player in _playersExcludingThis)
        {
            _playersIdsExcludingThis.Add(player.PlayerId.DeepClone());
        }
    }
}
