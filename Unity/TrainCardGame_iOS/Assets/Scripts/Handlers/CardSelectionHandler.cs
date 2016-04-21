using UnityEngine;
using System.Collections;

public class CardSelectionHandler : ExtMonoBehaviour
{
    private Card _selectedCard;

    public Card SelectedCard{ get { return _selectedCard; } }

    private string playerId { get; set; }

    public override void Init()
    {
        base.Init();
        _selectedCard = null;
        playerId = GetComponent<Player>().playerId;
    }

    public void SetSelectedCard(Card card)
    {
        //to avoid multiple clicks in same round
        if (SelectedCard != null && card != null)
        {
            return;
        }
        if (card != null)
        {
            BridgeDebugger.Log("--------------------------------------- Selected Card : " + card.ValueType);
        }
        _selectedCard = card;
    }
}