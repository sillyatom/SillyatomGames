using UnityEngine;
using System.Collections;

public class SinglePlayerNetworking : Networking
{
    public override void Init()
    {
        base.Init();
        isHost = true;
        hostId = "0";
        localId = "0";

        UpdatePlayersData();
    }

    private void UpdatePlayersData()
    {
        //create players
        for (int index = 0; index < GameConstants.MAX_PLAYERS; index++)
        {
            NetworkPlayer player = new NetworkPlayer();
            player.PlayerId = index.ToString();
            player.Name = "player" + player.PlayerId;
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
}