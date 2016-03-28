using UnityEngine;
using System.Collections;

public class AcknowledgeVO
{
    public int api_id{ get; set; }

    public int api{ get; set; }

    public string sender{ get; set; }

    public string player_id{ get; set; }

    public AcknowledgeVO(int api, int apiId, string sender)
    {
        this.api = api;
        this.api_id = apiId;
        this.sender = sender;
    }
}