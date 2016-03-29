using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Newtonsoft;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class MultiplayerMainGame : SceneMonoBehaviour
{
    public Dealer dealer;
    public Networking network;

    private List<Player> _players;
    private NetworkResponse _lastResponse;

    override public void Init()
    {
        BridgeDebugger.Log("[ MultiplayerMainGame ] - Init()");
        base.Init();

        //Init Dealer
        dealer.Init();

        //update players
        UpdatePlayers();

        //if host
        if (Networking.isHost)
        {
            dealer.ShuffleCards();
            DispatchHostSelected();
        }
    }

    private Player GetPlayerById(string playerId)
    {
        foreach (var player in _players)
        {
            if (player.playerId == playerId)
            {
                return player;
            }
        }
        return null;
    }

    private void DispatchHostSelected()
    {
        HostSelectedVO vo = new HostSelectedVO();
        vo.api = (int)(NetworkConstants.API.HOST_DATA);
        vo.sender = Networking.hostId;
        vo.api_id = ++APIHandler.GetInstance().runningId;

        string data = JsonConvert.SerializeObject(vo);

        API api = new API();
        api.api = vo.api;
        api.data = data;
        api.id = vo.api_id;
        api.playerIds = Utility.DeepCopy<string>(network.PlayersIdsExcludingThis);
        APIHandler.GetInstance().SendDataToAll(api);
    }

    private void DispatchCardsData()
    {
        int numPlayers = network.numPlayers;
        Dictionary<string, List<string>> cardsData = new Dictionary<string, List<string>>();

        int deckSize = dealer.GetDeckSize();
        for (int index = 0; index < deckSize; index++)
        {
            _players[index % numPlayers].AddCard(dealer.PopBack());
        }
        foreach (var playerId in network.PlayersIds)
        {
            Player player = GetPlayerById(playerId);
            cardsData[playerId] = player.GetCardsValueType;
        }

        InitCardsDataVO vo = new InitCardsDataVO();
        vo.api = (int)NetworkConstants.API.CARDS_DATA;
        vo.api_id = ++APIHandler.GetInstance().runningId;
        vo.sender = Networking.localId;
        vo.cards_data = cardsData;
        string data = JsonConvert.SerializeObject(vo);

        API api = new API();
        api.api = vo.api;
        api.id = vo.api_id;
        api.data = data;
        api.playerIds = Utility.DeepCopy<string>(network.PlayersIdsExcludingThis);
        APIHandler.GetInstance().SendDataToAll(api);
    }

    private void UpdatePlayers()
    {
        _players = new List<Player>();

        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
        for (int index = 0; index < network.Players.Count; index++)
        {
            foreach (var gameObject in players)
            {
                Player player = gameObject.GetComponent<Player>();
                if (player.index == index)
                {
                    player.playerId = network.Players[index].PlayerId;
                    player.playerName.text = network.Players[index].Name;
                    player.Init();
                    _players.Add(player);
                    break;
                }
            }
        }

        for (int index = network.Players.Count; index < GameConstants.MAX_PLAYERS; index++)
        {
            foreach (var gameObject in players)
            {
                Player player = gameObject.GetComponent<Player>();
                if (player.index == index)
                {
                    player.gameObject.SetActive(false);       
                }
            }
        }
    }

    override protected void OnGameEvent(GameEvent evt)
    {
        base.OnGameEvent(evt);


        switch (evt.type)
        {
            case GameEvent.DISPATCH_CARDS_DATA:
                {
                    _lastResponse = evt.response;
                    DispatchCardsData();
                    DistributeCards();
                }
                break;
            case GameEvent.UPDATE_CARDS_DATA:
                {
                    _lastResponse = evt.response;
                    InitCardsData(evt);
                    DistributeCards();
                }
                break;
            default:
                break;
        }
    }

    private void InitCardsData(GameEvent evt)
    {
        InitCardsDataVO vo = JsonConvert.DeserializeObject<InitCardsDataVO>(evt.response.data);
        Dictionary<string, List<string>> cardsData = vo.cards_data;

        foreach (KeyValuePair<string, List<string>> iter in cardsData)
        {
            string playerId = iter.Key;
            List<string> cardsValueType = iter.Value;
            Player player = GetPlayerById(playerId);

            foreach (var valueType in cardsValueType)
            {
                player.AddCard(dealer.RemoveCardByValueType(valueType));    
            }
        }
    }

    private void DistributeCards()
    {
        foreach (var player in _players)
        {
            foreach (var card in player.Cards)
            {
                iTween.MoveTo(card.gameObject, iTween.Hash("x", 0, "y", 0, "delay", 3));
            }
        }        
        //TODO
        //on complete animation
        if (!Networking.isHost)
        {
            GameEvent evt = new GameEvent(GameEvent.ACKNOWLEDGE, _lastResponse);
            EventManager.instance.Raise(evt);
        }
    }
}
