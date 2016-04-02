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

    public SpinHandler spinHandler{ get; set; }

    override public void Init()
    {
        BridgeDebugger.Log("[ Player - Init ]");
        base.Init();

        _cards = new List<Card>();

        spinHandler = gameObject.AddComponent<SpinHandler>();

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

    public Card Back()
    {
        return _cards[_cards.Count - 1];
    }

    public Card Front()
    {
        return _cards[0];
    }

    private void OnSpin()
    {
        float duration = Utility.GetRandomNumber(3.0f, 6.0f);
        spinHandler.Spin(duration);
    }

    public void InitReel()
    {
        spinHandler.InitReel(_cards);
    }

    private void OnShout()
    {
        
    }
}