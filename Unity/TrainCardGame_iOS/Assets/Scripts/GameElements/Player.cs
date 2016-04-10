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

    public string SelectedCardValueType
    {
        get
        {
            return _cards[spinHandler.SelectedIndex].ValueType;
        }
    }

    public Card SelectedCard
    {
        get
        {
            return _cards[spinHandler.SelectedIndex];
        }
    }

    public int SelectedCardIndex
    {
        get
        {
            return spinHandler.SelectedIndex;
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

    private void OnSpinComplete(int index, string cardValueType)
    {
        InGameEvent evt = new InGameEvent(InGameEvent.ON_SPIN_COMPLETE, playerId);
        EventManager.instance.Raise(evt);
    }

    override public void Init()
    {
        BridgeDebugger.Log("[ Player - Init ]");
        base.Init();

        _cards = new List<Card>();

        spinHandler = gameObject.AddComponent<SpinHandler>();
        spinHandler.Init();
        spinHandler.OnSpinCompleteCallback = OnSpinComplete;

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
        float duration = Utility.GetRandomNumber(2.0f, 4.0f);
        spinHandler.Spin(duration);
        spinBtn.enabled = false;
    }

    public void InitReel()
    {
        spinHandler.InitReel(_cards);
    }

    public void OnSelectedCardDealt()
    {
        _cards.RemoveAt(spinHandler.SelectedIndex);
        spinHandler.OnSelectedCardDealt();
        spinBtn.enabled = true;
    }

    private void OnShout()
    {
        
    }
}