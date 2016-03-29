using UnityEngine;
using System.Collections;

public class GameEvent
{
    public const string GC_AUTH_SUCCESS = "gc_auth_success";
    public const string GC_AUTH_FAILED = "gc_auth_failed";
    public const string MATCH_STARTED = "gc_match_started";
    public const string HOST_DATA = "host_data";
    public const string ACKNOWLEDGE = "acknowledge";

    public const string DISPATCH_CARDS_DATA = "dispatch_cards_data";
    public const string UPDATE_CARDS_DATA = "update_cards_data";

    public string type{ get; set; }

    public System.Action<NetworkResponse, bool> callback{ get; set; }

    public NetworkResponse response{ get; set; }

    public GameEvent(string type)
    {
        this.type = type;
    }

    public GameEvent(string type, NetworkResponse response)
    {
        this.type = type;
        this.response = response;
    }
}