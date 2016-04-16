using UnityEngine;
using System.Collections;

public class InGameEvent : GameEvent
{
    public const string START_GAME = "start_game";
    public const string START_ROUND = "start_round";
    public const string DISPATCH_NEXT_ROUND = "dispatchNextRound";
    public const string ON_SPIN_COMPLETE = "OnSpinComplete";
    public const string DISPATCH_CARDS_DATA = "dispatch_cards_data";
    public const string Round_Active_Player = "Round_Active_player";
    public const string ON_CARD_SELECTED = "OnCardSelected";

    public string playerId{ get; set; }

    public Card card{ get; set; }

    public InGameEvent(string type)
        : base(type)
    {
        
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