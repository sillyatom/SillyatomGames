using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Player : SceneMonoBehaviour
{
    [SerializeField]
    public int index;

    public string playerId;

    public Text playerName;
    public Image playerDP;

    public RectTransform reel;

    public Button spinBtn;
    public Button shoutBtn;

    private List<Card> _cards;

    public List<Card> Cards
    {
        get
        {
            return _cards;
        }
    }

    public List<string> GetCardsValueType
    {
        get
        {
            List<string> retList = new List<string>();
            foreach (var item in _cards)
            {
                retList.Add(item.ValueType);
            }
            return retList;
        }
    }

    override public void Init()
    {
        BridgeDebugger.Log("[ Player - Init ]");
        base.Init();

        _cards = new List<Card>();

        if (spinBtn != null)
        {
            spinBtn.onClick.AddListener(OnSpin);
        }    
        if (shoutBtn != null)
        {
            shoutBtn.onClick.AddListener(OnShout);
        }
    }

    public void AddCard(Card card)
    {
        _cards.Add(card);
    }

    public Card RemoveCardWithValue(string valueType)
    {
        Card retCard = null;

        foreach (var card in _cards)
        {
            if (card.ValueType == valueType)
            {
                retCard = card;
                _cards.Remove(card);
            }
        }

        return retCard;
    }

    private void OnSpin()
    {
        
    }

    private void OnShout()
    {
        
    }
}