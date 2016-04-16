using UnityEngine;
using System.Collections;

public class SinglePlayerAPIHandler : APIHandler
{
    override public void SendDataToAll(API api)
    {
        _apis.Add(api);
        OnAPISuccess(api.api);
    }

    override public void SendDataToPlayer(API api)
    {
        _apis.Add(api);
        OnAPISuccess(api.api);
    }
}