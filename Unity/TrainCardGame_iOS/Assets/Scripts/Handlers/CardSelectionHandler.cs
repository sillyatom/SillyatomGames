using UnityEngine;
using System.Collections;

public class CardSelectionHandler : ExtMonoBehaviour
{
    public Card SelectedCard{ get; set; }

    public override void Init()
    {
        base.Init();
        SelectedCard = null;
        EventManager.instance.AddListener<InGameEvent>(OnInGameEvent);
    }

    public void SetSelectedCard(Card card)
    {
        //to avoid multiple clicks in same round
        if (SelectedCard != null)
        {
            return;
        }
        BridgeDebugger.Log("Selected Card : " + card.ValueType);
        SelectedCard = card;
    }

    public void OnInGameEvent(InGameEvent evt)
    {
        if (evt.type == InGameEvent.ON_CARD_SELECTED)
        {
            SetSelectedCard(evt.card);
        }
    }
}