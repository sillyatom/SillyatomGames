using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class SinglePlayerMainGame : MultiplayerMainGame
{
    private int _currentPlayerIndex;

    override public void Init()
    {
        BridgeDebugger.Log("[ SinglePlayerMainGame ] - Init()");
        network.OnSinglePlayerMode();
        base.Init();
    }

    public override void InitGame()
    {
        _roundHandler = gameObject.GetComponent<RoundHandler>();
        _roundHandler.Init();
        _roundHandler.OnRoundCompleteCallback = OnRoundEnd;

        UpdatePlayers();

        dealer.Init();
        dealer.ShuffleCards();
        UpdatePlayerCards(GameConstants.MAX_PLAYERS);
        DistributeCards(GameConstants.MAX_PLAYERS);
    }

    override protected void UpdatePlayers()
    {
        _players = new List<Player>();

        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
        int count = GameConstants.MAX_PLAYERS;
        for (int index = 0; index < count; index++)
        {
            foreach (var gameObject in players)
            {
                Player player = gameObject.GetComponent<Player>();
                if (player.index == index)
                {
                    player.playerId = index.ToString();
                    player.playerName.text = "Player " + index.ToString();
                    player.Init();
                    _players.Add(player);
                    break;
                }
            }
        }

        for (int index = count; index < GameConstants.MAX_PLAYERS; index++)
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

    override protected void OnDistributeAllWinningCards(object args)
    {
        Hashtable hArgs = (Hashtable)args;
        Player player = GetPlayerById((string)hArgs["Player"]);
        dealer.ShiftCards();
        if (player.playerId == network.LocalId)
        {
            player.UpdateCardsPosition();
        }
        //clear all round data
        player.OnRoundEnd();
        _roundHandler.OnRoundEnd();
        _currentPlayerIndex++;
        _currentPlayerIndex = (_currentPlayerIndex == network.numPlayers) ? 0 : _currentPlayerIndex;
        DispatchNextRound();
    }

    override protected void OnDistributeAllCards()
    {
        GetLocalPlayer.UpdateCardsPosition();
        _currentPlayerIndex = 0;
        _roundHandler.StartMatch();
    }

    override protected void OnGameEvent(GameEvent evt)
    {
        switch (evt.type)
        {
            case GameEvent.START_ROUND:
                {
                    RoundVO vo = JsonConvert.DeserializeObject<RoundVO>(evt.response.data);
                    string playerId = vo.playerIdForRound;

                    Player player = GetPlayerById(playerId);
                    player.OnRoundStart();
                    string nextPlayerId = network.GetNextPlayer(playerId).PlayerId;
                    Player nextPlayer = GetPlayerById(nextPlayerId);
                    nextPlayer.SetTurnStatus(E_PLAYER_TURN.GET_READY);

                    //if non player round
                    if (playerId != Networking.localId)
                    {
                        StartCoroutine(AutoPlay());
                    }
                }
                break;
        }
    }

    IEnumerator AutoPlay()
    {
        yield return new WaitForSeconds(Utility.GetRandomNumber(GameConstants.ROUND_TIME * 0.5f, GameConstants.ROUND_TIME * 0.75f));
        _roundHandler.StopTimer();
    }

    override protected void DispatchNextRound()
    {
        //dispatch
        RoundVO vo = new RoundVO();
        vo.api = (int)(NetworkConstants.API.NEXT_ROUND);
        vo.sender = Networking.hostId;
        vo.api_id = ++APIHandler.GetInstance().runningId;
        //add +1 round number will be incremented only on round start
        vo.roundId = _roundHandler.GetRoundNumber + 1;
        vo.playerIdForRound = _currentPlayerIndex.ToString();

        string data = JsonConvert.SerializeObject(vo);

        NetworkResponse response = new NetworkResponse(NetworkConstants.API.NEXT_ROUND,
                                       -1, "", "", data);
        GameEvent gEvent = new GameEvent(GameEvent.START_ROUND, response);
        EventManager.instance.Raise(gEvent);
    }

    override protected void OnRoundEnd()
    {
        Player player = GetPlayerById(_roundHandler.GetActivePlayerId);
        if (_roundHandler.GetActivePlayerId != network.LocalId)
        {
            player.DidPullOver = (Utility.GetRandomNumber(0, 100) >= 90);
        }

        //TODO for testing
//		player.DidPullOver = false;

        Card selectedCard = player.SelectedCard;
        //if player has not selected a card
        if (selectedCard == null)
        {
            //do auto deal
            player.AutoDeal();
            DealCard(player, true);
        }
        else
        {
            CheckWinnings();
        }
    }
}
