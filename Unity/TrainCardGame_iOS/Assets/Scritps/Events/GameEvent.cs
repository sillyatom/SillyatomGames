using UnityEngine;
using System.Collections;

public class GameEvent
{
    public static string GC_AUTH_SUCCESS = "gc_auth_success";
    public static string GC_AUTH_FAILED = "gc_auth_failed";
    public static string MATCH_STARTED = "gc_match_started";

    public string type{ get; set; }

    public string data{ get; set; }

    public GameEvent(string type)
    {
        this.type = type;
    }

    public GameEvent(string type, string data)
    {
        this.type = type;
        this.data = data;
    }
}