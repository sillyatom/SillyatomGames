using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SinglePlayerMainGame : MultiplayerMainGame
{
    override public void Init()
    {
        BridgeDebugger.Log("[ SinglePlayerMainGame ] - Init()");
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
                    player.playerName.text = "Name:" + index.ToString();
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

    override protected void OnDistributeAllCards()
    {
        GetLocalPlayer.UpdateCardsPosition();
        StartGame();
    }

    override protected void StartRound()
    {
        base.StartRound();

        //if non player round
        if (_currentPlayerIndex != 0)
        {
            StartCoroutine(AutoPlay());
        }
    }

    override protected void OnRoundEnd()
    {
        base.OnRoundEnd();
    }

    IEnumerator AutoPlay()
    {
        yield return new WaitForSeconds(Utility.GetRandomNumber(1.5f, 3.0f));
        _roundHandler.StopTimer();
    }
}
