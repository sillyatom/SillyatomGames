using UnityEngine;
using System.Collections;

public class GameEvent
{
    public const string GC_AUTH_SUCCESS = "gc_auth_success";
    public const string GC_AUTH_FAILED = "gc_auth_failed";
    public const string DETERMINING_HOST = "gc_determining_host";
    public const string MATCH_STARTED = "gc_match_started";
    public const string HOST_DATA = "host_data";
    public const string ACKNOWLEDGE = "acknowledge";

    public const string UPDATE_CARDS_DATA = "update_cards_data";
    public const string ROUND_RESULT = "round_result";
    public const string START_ROUND = "start_round";

    //To Update HUD
    public const string PLAYER_MODEL_UPDATED = "__playerModelUpdated__";

    public const string UPDATE_PLAYER_MODEL = "playerModelUpdate";
    public const string ADD_TOKENS = "detectTokens";

    public const string UPDATE_SWEEP_COUNT = "UpdateSweepCount";
    public const string SWEEP_COUNT_UPDATED = "SWEEP_COUNT_UPDATED";

    public string type{ get; set; }

    public System.Action<NetworkResponse, bool> callback{ get; set; }

    public NetworkResponse response{ get; set; }

    public string postResponse{ get; set; }

    public System.Object vo{ get; set; }

    public int val{ get; set; }

    public GameEvent(string type)
    {
        this.type = type;
    }

    public GameEvent(string type, int val)
    {
        this.type = type;
        this.val = val;
    }

    public GameEvent(string type, string postResponse)
    {
        this.type = type;
        this.postResponse = postResponse;
    }

    public GameEvent(string type, NetworkResponse response)
    {
        this.type = type;
        this.response = response;
    }

    public GameEvent(string type, LocalPlayerModelVO vo)
    {
        this.type = type;
        this.vo = vo;
    }
}