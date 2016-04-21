using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public class APIHandler
{
    protected List<API> _apis = new List<API>();

    private static APIHandler instance = null;

    [DllImport("__Internal")]
    private static extern void sendDataToAll(string data);

    [DllImport("__Internal")]
    private static extern void sendDataToPlayer(string playerId, string data);

    private int _runningId = -1;
    public Action<int, NetworkResponse> OnAPISuccess;

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
        if (instance == null)
        {
            instance = new APIHandler();
        }
        return instance;
    }

    virtual public void SendDataToAll(API api)
    {
        if (Networking.IsSinglePlayerMode)
        {
            StartDelayAPISuccess(api.api);
        }
        else
        {
            sendDataToAll(api.data);
        }
        _apis.Add(api);
    }

    private void StartDelayAPISuccess(int api)
    {
        GameObject go = SingletonManager.reference.network.gameObject;
        Hashtable args = new Hashtable();
        args.Add("api", api);
        Utility.DelayedCallWithArgs(go, go, "OnAPISuccess", api, 0.1f, 0.5f);
    }

    virtual public void SendDataToPlayer(API api)
    {
        if (Networking.IsSinglePlayerMode)
        {
            StartDelayAPISuccess(api.api);
        }
        else
        {
            sendDataToPlayer(api.playerIds[0], api.data);
        }
        _apis.Add(api);
    }

    public void OnReceiveAcknowledgement(int apiId, string playerId, NetworkResponse response = null)
    {
        BridgeDebugger.Log("[ API Handler ] On Receive Acknowledgement for api " + response.api.ToString());

        if (playerId.Length == 0)
        {
            throw new UnityException("[ API Handler ]- OnReceiveAcknowledgement - Player Id Missing");
        }
        API api = GetAPIById(apiId);
        int iAPI = api.api;
        int count = api.RemoveId(playerId);
        if (count == 0)
        {
            OnAPISuccess(iAPI, response);
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
