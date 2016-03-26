using UnityEngine;
using System.Collections;

public class NetworkResponse
{
    public string data{ get; set; }

    public NetworkConstants.API api{ get; set; }

    public NetworkResponse(NetworkConstants.API api, string data)
    {
        this.api = api;
        this.data = data;
    }
}