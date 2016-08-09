using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Newtonsoft;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class Networking : ExtMonoBehaviour
{
    [DllImport("__Internal")]
    private static extern void authenticateLocalPlayer();

    [DllImport("__Internal")]
    private static extern void sendDataToAll(string data);

    [DllImport("__Internal")]
    private static extern void sendDataToPlayer(string playerId, string data);

    [DllImport("__Internal")]
    private static extern int getAuthStatus();

    [DllImport("__Internal")]
    private static extern int getGCStatus();

    [DllImport("__Internal")]
    private static extern void dispatchAuthResponse();

    private List<NetworkResponse> _results = new List<NetworkResponse>();

    protected List<NetworkPlayer> _players = new List<NetworkPlayer>();
    protected List<NetworkPlayer> _playersExcludingThis = new List<NetworkPlayer>();
    protected List<string> _playersIdsExcludingThis = new List<string>();
    protected List<string> _playersIds = new List<string>();

    private float _timeElapsed = 0.0f;

    public static bool IsHost = false;
    public static bool IsSinglePlayerMode = false;
    public static string hostId = "";
    public static string localId = "";

    private bool _pauseUpdate = false;

    public string HostId
    {
        get
        {
            return hostId;
        }
    }

    public string LocalId
    {
        get
        {
            return localId;
        }
    }

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

    public NetworkPlayer GetPlayerById(string id)
    {
        foreach (var player in Players)
        {
            if (player.PlayerId == id)
            {
                return player;
            }
        }
        return null;
    }

    public override void Init()
    {
        base.Init();
        APIHandler.GetInstance().OnAPISuccess = OnAPISuccess;  

        IsHost = false;
        hostId = "";
        localId = "";
        IsSinglePlayerMode = false;
    }

    public void OnSinglePlayerMode()
    {
        IsHost = true;
        hostId = "0";
        localId = "0";
        IsSinglePlayerMode = true;
        UpdateSinglePlayerData();
    }

    public NetworkPlayer GetNextPlayer(string playerId)
    {
        for (int index = 0; index < Players.Count; index++)
        {
            NetworkPlayer player = Players[index];

            if (player.PlayerId == playerId)
            {
                index++;
                index = (index == Players.Count) ? 0 : index;
                return Players[index];
            }
        }

        return null;
    }

    private void UpdateSinglePlayerData()
    {
        //create players
        for (int index = 0; index < GameConstants.MAX_PLAYERS; index++)
        {
            NetworkPlayer player = new NetworkPlayer();
            player.PlayerId = index.ToString();
            player.Name = "Player " + player.PlayerId;
            _players.Add(player);
        }

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
            APIHandler.GetInstance().OnReceiveAcknowledgement(response.apiId, response.playerId, response);
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
            case NetworkConstants.API.DETERMINING_HOST:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.DETERMINING_HOST);
                    EventManager.instance.Raise(gEvent);
                    Acknowledge();
                }
                break;
            case NetworkConstants.API.MATCH_STARTED:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.MATCH_STARTED, response);
                    JObject json = JObject.Parse(response.data);

                    IsHost = ((int)json[NetworkConstants.KEY_IS_HOST]) == 1 ? true : false;

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

                    if (IsHost)
                    {
                        hostId = string.Copy(_players[0].PlayerId);
                    }
                    localId = string.Copy(_players[0].PlayerId);

                    BridgeDebugger.Log("[ Match Started ] - isHost " + IsHost + " hostId " + hostId);
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
            case NetworkConstants.API.NEXT_ROUND:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.START_ROUND, response);
                    EventManager.instance.Raise(gEvent);
                    Acknowledge(response, isIdHost(response.sender));
                }
                break;
        }
    }

    private void Acknowledge(NetworkResponse response = null, bool isSenderHost = false)
    {
        if (response != null && response.sender != localId)
        {
            AcknowledgeVO vo = new AcknowledgeVO((int)response.api, response.apiId, response.sender);
            vo.player_id = _players[0].PlayerId;
            BridgeDebugger.Log("[ Acknowleging API_ID ] - " + response.apiId);
            string data = JsonConvert.SerializeObject(vo);

            BridgeDebugger.Log("[ Acknowleging to sender ] - " + response.sender);
            sendDataToPlayer(response.sender, data);
        }

        _results.RemoveAt(0);
        Utility.DelayedCall(gameObject, gameObject, "OnAcknowledge", 1.0f, 0.0f);
    }

    private void OnAcknowledge()
    {
        _pauseUpdate = false;
    }

    public void OnAPISuccess(int api, NetworkResponse response = null)
    {
        NetworkConstants.API eAPI = (NetworkConstants.API)api;
        BridgeDebugger.Log("[ ON API SUCCESS ] " + eAPI.ToString());

        switch (eAPI)
        {
            case NetworkConstants.API.HOST_DATA:
                {
                    EventManager.instance.Raise(new InGameEvent(InGameEvent.DISPATCH_CARDS_DATA));
                }
                break;
            case NetworkConstants.API.CARDS_DATA:
                if (IsHost)
                {
                    EventManager.instance.Raise(new InGameEvent(InGameEvent.START_GAME));
                }
                break;
            case NetworkConstants.API.ROUND_RESULT:
                {
                    EventManager.instance.Raise(new InGameEvent(InGameEvent.DISPATCH_NEXT_ROUND));
                }
                break;
            case NetworkConstants.API.NEXT_ROUND:
                {
                    //when acknowledgement succeed
                    //set the next player and start round
                    EventManager.instance.Raise(new InGameEvent(InGameEvent.UPDATE_ROUND_DATA, _playersIdsExcludingThis[0]));
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

    public void SignInGC()
    {
        authenticateLocalPlayer();
    }

    public int SigningStatus()
    {
        return getAuthStatus();
    }

    public int GameCenterStatus()
    {
        return getGCStatus();
    }

    public void DispatchAuthResponse()
    {
        dispatchAuthResponse();
    }
}
