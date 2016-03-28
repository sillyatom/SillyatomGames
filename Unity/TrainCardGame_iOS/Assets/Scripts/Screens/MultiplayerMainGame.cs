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
        //TODO
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
}
