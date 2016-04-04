using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SinglePlayerMainGame : MultiplayerMainGame
{
    override public void Init()
    {
        base.Init();
        BridgeDebugger.Log("[ SinglePlayerMainGame ] - Init()");
    }

    protected override void InitGame()
    {
        dealer.Init();
        UpdatePlayers();
        dealer.ShuffleCards();
        UpdatePlayerCards(GameConstants.MAX_PLAYERS);
        DistributeCards(GameConstants.MAX_PLAYERS);
        AddListeners();
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

    protected override void OnDistributeAnimationComplete(object args)
    {
        base.OnDistributeAnimationComplete(args);
    }
}
