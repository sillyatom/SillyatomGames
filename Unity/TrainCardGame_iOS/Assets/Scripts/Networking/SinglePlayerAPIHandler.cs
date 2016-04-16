using UnityEngine;
using System.Collections;

public class SinglePlayerAPIHandler : APIHandler
{
    override public void SendDataToAll(API api)
    {
        _apis.Add(api);
        StartCoroutine(DelayAPISuccess(api.api));
    }

    IEnumerator DelayAPISuccess(int api)
    {
        yield return new WaitForSeconds(0.20f);
        OnAPISuccess(api);
    }

    override public void SendDataToPlayer(API api)
    {
        _apis.Add(api);
        StartCoroutine(DelayAPISuccess(api.api));
    }
}