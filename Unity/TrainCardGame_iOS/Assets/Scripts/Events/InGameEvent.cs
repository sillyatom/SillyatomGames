using UnityEngine;
using System.Collections;

public class InGameEvent : GameEvent
{
    public const string ON_SPIN_COMPLETE = "OnSpinComplete";

    public string playerId{ get; set; }

    public InGameEvent(string type, string playerId)
        : base(type)
    {
        this.playerId = playerId;
    }
}