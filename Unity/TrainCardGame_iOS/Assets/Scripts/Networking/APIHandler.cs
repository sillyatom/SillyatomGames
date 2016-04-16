using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public class APIHandler : MonoBehaviour
{
    protected List<API> _apis = new List<API>();

    [DllImport("__Internal")]
    private static extern void sendDataToAll(string data);

    [DllImport("__Internal")]
    private static extern void sendDataToPlayer(string playerId, string data);

    private int _runningId = -1;
    public Action<int> OnAPISuccess;

    public int runningId
    {
        get
        {
            return _runningId;
        }
        set
        {
            _runningId = value;
        }
    }

    public static APIHandler GetInstance()
    {
        return SingletonManager.reference.apiHandler;
    }

    virtual public void SendDataToAll(API api)
    {
        sendDataToAll(api.data);
        _apis.Add(api);
    }

    virtual public void SendDataToPlayer(API api)
    {
        sendDataToPlayer(api.playerIds[0], api.data);
        _apis.Add(api);
    }

    public void OnReceiveAcknowledgement(int apiId, string playerId)
    {
        BridgeDebugger.Log("[ API Handler ] On Receive Acknowledgement for apiId " + apiId);

        if (playerId.Length == 0)
        {
            throw new UnityException("[ API Handler ]- OnReceiveAcknowledgement - Player Id Missing");
        }
        API api = GetAPIById(apiId);
        int iAPI = api.api;
        int count = api.RemoveId(playerId);
        if (count == 0)
        {
            OnAPISuccess(iAPI);
        }
    }

    private void RemoveAPIById(int id)
    {
        foreach (var api in _apis)
        {
            if (api.id == id)
            {
                _apis.Remove(api);
                break;
            }
        }
    }

    private API GetAPIById(int id)
    {
        foreach (var api in _apis)
        {
            if (api.id == id)
            {
                return api;
            }
        }
        return null;
    }
}
