using UnityEngine;
using System.Collections;

public class InGameEvent : GameEvent
{
    public const string GC_STATUS = "gc_status";
    public const string START_GAME = "start_game";
    public const string DISPATCH_NEXT_ROUND = "dispatchNextRound";
    public const string ON_SPIN_COMPLETE = "OnSpinComplete";
    public const string DISPATCH_CARDS_DATA = "dispatch_cards_data";
    public const string ON_CARD_SELECTED = "OnCardSelected";
    public const string UPDATE_ROUND_DATA = "UpdateRoundData";
    public const string ON_ROUND_START = "OnRoundStart";
    public const string REMOVE_PLAYER = "RemovePlayer";

    public string playerId{ get; set; }

    public Card card{ get; set; }

    public int status{ get; set; }

    public InGameEvent(string type)
        : base(type)
    {
        
    }

    public InGameEvent(string type, int status)
        : base(type)
    {
        this.status = status;
    }

    public InGameEvent(string type, string playerId)
        : base(type)
    {
        this.playerId = playerId;
    }

    public InGameEvent(string type, Card card)
        : base(type)
    {
        this.card = card;
    }
}