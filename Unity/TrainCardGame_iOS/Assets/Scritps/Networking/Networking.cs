using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using SimpleJSON;

public class Networking : SceneMonoBehaviour
{
    private List<NetworkResponse> _results = new List<NetworkResponse>();
    private float _timeElapsed = 0.0f;

    public static bool isHost = false;

    public void OnReceiveData(string data)
    {
        BridgeDebugger.Log(data);

        var json = JSONNode.Parse(data);
        int api = json[NetworkConstants.KEY_API].AsInt;
        NetworkConstants.API eAPI = (NetworkConstants.API)(api);
        _results.Add(new NetworkResponse(eAPI, data));
    }

    private void ExecuteEvent(NetworkResponse response)
    {
        NetworkConstants.API eAPI = response.api;
        switch (eAPI)
        {
            case NetworkConstants.API.GAME_CENTER_AUTH_SUCCESS:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.GC_AUTH_SUCCESS);
                    EventManager.instance.Raise(gEvent);
                }
                break;
            case NetworkConstants.API.GAME_CENTER_AUTH_FAILED:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.GC_AUTH_FAILED);
                    EventManager.instance.Raise(gEvent);
                }
                break;
            case NetworkConstants.API.MATCH_STARTED:
                {
                    GameEvent gEvent = new GameEvent(GameEvent.MATCH_STARTED, response.data);
                    var json = JSONNode.Parse(response.data);
                    isHost = json[NetworkConstants.KEY_IS_HOST].AsBool;
                    EventManager.instance.Raise(gEvent);
                }
                break;
        }
    }

    void Update()
    {
        _timeElapsed += Time.deltaTime;

        if (_timeElapsed >= 0.5f)
        {
            _timeElapsed = 0.0f;
        }

        if (_results.Count > 0)
        {
            ExecuteEvent(_results[0]);
            _results.RemoveAt(0);
        }
    }
}
