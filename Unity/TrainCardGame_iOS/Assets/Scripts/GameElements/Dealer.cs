using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Dealer : SceneMonoBehaviour
{
    private List<Card> _cards;
    private RectTransform rectTransform;
    private const float SPACE = 50;
    private int _minNumOfCardsReqToMatch = 14;

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

    public void ShiftCards(GameObject onCompleteTarget, string onCompleteCallback, object args)
    {
        int count = GetDeckSize();
        int threshold = _minNumOfCardsReqToMatch / 2;
    }

    public void ShiftCards()
    {
        for (int index = 0; index < GetDeckSize(); index++)
        {
            Vector3 pos = GetPositionForIndex(index);
            MoveCardToPosition(_cards[index], pos, 1.0f);
        }
    }

    private Vector3 GetPositionForIndex(int index)
    {
        int count = GetDeckSize();
        int threshold = _minNumOfCardsReqToMatch / 2;
        if (index > threshold)
        {
            return new Vector3(transform.position.x + ((index - threshold +1) * SPACE),
                                transform.position.y + transform.position.z);
        }

        int flag = (count <= threshold) ? count : threshold;
        return new Vector3(transform.position.x - ((flag - index - 1) * SPACE),
                            transform.position.y + transform.position.z);
    }

    private void MoveCardToPosition(Card card, Vector3 pos, float time, float delay = 0.0f)
    {
        iTween.MoveTo(card.gameObject, iTween.Hash("x", pos.x, "y", pos.y, "time", time, "delay", delay));
    }

    public void AddCard(Card card)
    {
        _cards.Add(card);
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