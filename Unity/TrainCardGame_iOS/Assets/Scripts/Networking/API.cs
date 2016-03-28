using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class API
{
    public int id{ get; set; }

    public int api{ get; set; }

    public string data{ get; set; }

    public List<string> playerIds{ get; set; }

    public int RemoveId(string playerId)
    {
        foreach (var id in playerIds)
        {
            if (id == playerId)
            {
                playerIds.Remove(id);
                break;
            }
        }
        return playerIds.Count;
    }
}
