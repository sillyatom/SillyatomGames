using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Dealer : SceneMonoBehaviour
{
    private List<Card> _cards;
    private RectTransform rectTransform;

    override public void Init()
    {
        base.Init();
        rectTransform = GetComponent<RectTransform>();

        CreateCards();
    }

    public int GetDeckSize()
    {
        return _cards.Count;    
    }

    public Card PopBack()
    {
        Card retCard = null;
        if (_cards.Count > 0)
        {
            retCard = _cards[_cards.Count - 1];
            _cards.RemoveAt(_cards.Count - 1);
        }
        return retCard;
    }

    public Card RemoveCardByValueType(string valueType)
    {
        Card retCard = null;
        int length = _cards.Count;
        for (int index = 0; index < length; index++)
        {
            Card card = _cards[index];
            if (card.ValueType == valueType)
            {
                retCard = card;
                _cards.RemoveAt(index);
                break;
            }
        }

        return retCard;
    }

    public void ShuffleCards()
    {
        _cards.Shuffle<Card>();
    }

    private void CreateCards()
    {
        _cards = new List<Card>();

        foreach (var type in CardConstants.CARD_TYPES)
        {
            foreach (var value in CardConstants.CARD_VALUES)
            {
                GameObject cardObj = Instantiate<GameObject>(Resources.Load<GameObject>("Prefabs/Card"));
                cardObj.transform.SetParent(rectTransform);
                cardObj.transform.localScale = Vector3.one;
                cardObj.transform.localPosition = Vector3.zero;
                Card card = cardObj.GetComponent<Card>();
                card.UpdateCard(value, type);
                _cards.Add(card);
            }
        }
    }
}