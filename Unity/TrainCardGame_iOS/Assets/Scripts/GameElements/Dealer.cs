using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Dealer : ExtMonoBehaviour
{
    private List<Card> _cards;
    private RectTransform rectTransform;
    private const float SPACE = 100;
    private int _minNumOfCardsReqToMatch = 14;

    public List<Card> Cards{ get; set; }

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

    public float ShiftCards()
    {
        for (int index = 0; index < GetDeckSize(); index++)
        {
            Vector3 pos = GetPositionForIndex(index);
            pos.y -= _cards[index].GetComponent<RectTransform>().rect.height * 0.5f;
            MoveCardToPosition(_cards[index], pos, 1.0f);
        }

        return 2.0f;
    }

    private Vector3 GetPositionForIndex(int index)
    {
        int count = GetDeckSize();
        int threshold = _minNumOfCardsReqToMatch / 2;
        if (index > threshold)
        {
            return new Vector3(transform.position.x + ((index - threshold + 1) * SPACE),
                transform.position.y + transform.position.z);
        }

        int flag = (count <= threshold) ? count : threshold;
        return new Vector3(transform.position.x - ((flag - index - 1) * SPACE),
            transform.position.y + transform.position.z);
    }

    private void MoveCardToPosition(Card card, Vector3 pos, float time, float delay = 0.0f)
    {
        card.ShowFrontFace();
        iTween.MoveTo(card.gameObject, iTween.Hash("x", pos.x, "y", pos.y, "time", time, "delay", delay));
        iTween.ScaleTo(card.gameObject, iTween.Hash("x", 1.0f, "y", 1.0f, "time", time, "delay", delay));
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

    public bool HasMatch()
    {
        string selectedCard = _cards[GetDeckSize() - 1].Value;
        if (GetDeckSize() > 1)
        {
            if (_cards[GetDeckSize() - 1].Value != selectedCard)
            {
                throw new UnityException("Oops !!! some bad logic");
            }

            int length = GetDeckSize();
            for (int index = length - 2; index >= 0; index--)
            {
                if (_cards[index].Value == selectedCard)
                {
                    return true;
                }
            }
        }
        return false;
    }

    public ResultVO GetResult()
    {
        string selectedCard = _cards[GetDeckSize() - 1].Value;

        //Check result only if the deck has more than one card
        ResultVO vo = new ResultVO();
        if (GetDeckSize() > 1)
        {
            if (_cards[GetDeckSize() - 1].Value != selectedCard)
            {
                throw new UnityException("Oops !!! some bad logic");
            }

            int length = GetDeckSize();
            for (int index = length - 2; index >= 0; index--)
            {
                if (_cards[index].Value == selectedCard)
                {
                    vo.count = length - index - 1;
                    vo.startIndex = index;
                    List<Card> matchedCards = new List<Card>();
                    for (int i = length - 1; i >= index; i--)
                    {
                        matchedCards.Add(_cards[i]);
                        _cards.RemoveAt(i);
                    }

                    vo.cards = matchedCards;
                    break;
                }
            }
        }
        return vo;
    }
}

public class ResultVO
{
    public int count{ get; set; }

    public int startIndex{ get; set; }

    public bool hasMatch{ get { return count > 0; } }

    public List<Card> cards{ get; set; }

    public Dictionary<string, List<string>> winningCards{ get; set; }

    public Card GetCardWithValueType(string cardValueType)
    {
        foreach (var card in cards)
        {
            if (card.ValueType == cardValueType)
            {
                return card;
            }
        }
        return null;
    }
}