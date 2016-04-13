using UnityEngine;
using System.Collections;

public class InGameEvent : GameEvent
{
    public const string ON_SPIN_COMPLETE = "OnSpinComplete";
    public const string DISPATCH_CARDS_DATA = "dispatch_cards_data";
    public const string START_GAME = "start_game";
    public const string Round_Active_Player = "Round_Active_player";

    public string playerId{ get; set; }

    public InGameEvent(string type, string playerId)
        : base(type)
    {
        this.playerId = playerId;
    }
}