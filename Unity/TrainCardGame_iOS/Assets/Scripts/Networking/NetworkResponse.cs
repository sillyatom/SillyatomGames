using UnityEngine;
using System.Collections;

public class NetworkResponse
{
    public string data{ get; set; }

    public string sender{ get; set; }

    public string playerId{ get; set; }

    public NetworkConstants.API api{ get; set; }

    public int apiId{ get; set; }

    public NetworkResponse(NetworkConstants.API api, int apiId, string sender, string playerId, string data)
    {
        this.api = api;
        this.data = data;
        this.apiId = apiId;
        this.sender = sender;
        this.playerId = playerId;
    }
}