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
        network.OnSinglePlayerMode();
        BridgeDebugger.Log("[ SinglePlayerMainGame ] - Init()");
        base.Init();
    }

    public override void InitGame()
    {
        _roundHandler = gameObject.GetComponent<RoundHandler>();
        if (!_roundHandler.isInitialized)
        {
            _roundHandler.Init();
        }
        else
        {
            _roundHandler.Reset();
        }
        _roundHandler.OnRoundCompleteCallback = OnRoundEnd;

        UpdatePlayers();

        dealer.Init();
        dealer.CreateCards(GameConstants.MAX_PLAYERS);
        dealer.ShuffleCards();
        UpdatePlayerCards(GameConstants.MAX_PLAYERS);
        DistributeCards(GameConstants.MAX_PLAYERS);
    }

    override protected void UpdatePlayers()
    {
        _players = new List<Player>();
        List<string> names = new List<string>(){ "_A", "_B", "_C", "_D" };
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
                    if (player.index == 0)
                    {
                        player.playerName.text = LocalPlayerModel.GetInstance().localPlayerName;                        
                    }
                    else
                    {
                        player.playerName.text = "Player" + names[index];
                    }
                    if (!player.isInitialized)
                    {
                        player.Init();
                    }
                    else
                    {
                        player.Reset();
                    }
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
        #if !UNITY_EDITOR
        _players[0].UpdateDP(GetDPPath(LocalPlayerModel.GetInstance().localPlayerId));
        #endif
    }

    override protected void OnDistributeAllWinningCards(object args)
    {
        Hashtable hArgs = (Hashtable)args;
        Player player = GetPlayerById((string)hArgs["Player"]);
        float delay = dealer.ShiftCards();
        StartCoroutine(OnShiftComplete(delay));
        if (player.playerId == network.LocalId)
        {
            player.UpdateCardsPosition();
        }
        //clear all round data
        player.OnRoundEnd();
        _roundHandler.OnRoundEnd();
        CheckGameEnd();
        if (!GameModel.Instance.isGameOver)
        {
            DispatchNextRound();
        }
    }

    private int GetPrevPlayerIndex()
    {
        int prevIndex = (_currentPlayerIndex == 0) ? network.numPlayers - 1 : _currentPlayerIndex - 1;
        return prevIndex;
    }

    override protected void OnDistributeAllCards()
    {
        _players[0].UpdateCardsPosition();
        foreach (var player in _players)
        {
            player.IsDistributionComplete = true;
            player.EnableCountPip(true);
        }
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
        vo.cardsCount = GetPlayerById(_currentPlayerIndex.ToString()).CardsCount;
        vo.roundId = _roundHandler.GetRoundNumber + 1;
        vo.player_id = _currentPlayerIndex.ToString();
        //get next player
        _currentPlayerIndex = int.Parse(network.GetNextPlayer(_currentPlayerIndex.ToString()).PlayerId);
        vo.playerIdForRound = _currentPlayerIndex.ToString();

        string data = JsonConvert.SerializeObject(vo);
        NetworkResponse response = new NetworkResponse(NetworkConstants.API.NEXT_ROUND,
                                       -1, "", "", data);
        //if no cards; remove player
        if (vo.cardsCount == 0)
        {
            network.RemovePlayer(vo.player_id);
            EventManager.instance.Raise(new InGameEvent(InGameEvent.REMOVE_PLAYER, vo.player_id));
        }
        //if no players left, show game end dialog
        if (network.Players.Count == 1)
        {
            EventManager.instance.Raise(new InGameEvent(InGameEvent.SHOW_GAME_END_DIALOG, network.Players[0].PlayerId));
        }
        //if not game over, start next round
        if (!GameModel.Instance.isGameOver)
        {
            GameEvent gEvent = new GameEvent(GameEvent.START_ROUND, response);
            EventManager.instance.Raise(gEvent);
        }
    }

    override protected void OnRoundEnd()
    {
        Player player = GetPlayerById(_roundHandler.GetActivePlayerId);
        if (_roundHandler.GetActivePlayerId != network.LocalId)
        {
            player.DidPullOver = true;//(Utility.GetRandomNumber(0, 100) <= 90);
        }

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

    protected override void UpdateSweepCount()
    {
        int count = GameModel.Instance.sweepCount + 1;
        EventManager.instance.Raise(new GameEvent(GameEvent.UPDATE_SWEEP_COUNT, count));
    }

    public override void OnMoveOutOfView()
    {
        CleanPlayers();
        dealer.Reset();
        network.Reset();
        transform.GetComponent<SharedMainGame>().trains.RemoveActiveTrain();
        Destroy(gameObject.GetComponentInChildren<Dealer>());
        Destroy(gameObject.GetComponent<SinglePlayerMainGame>());
        network = null;
    }
}
