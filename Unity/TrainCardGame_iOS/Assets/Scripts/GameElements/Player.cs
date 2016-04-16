using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Player : ExtMonoBehaviour
{
    [SerializeField]
    public int index;
    public string playerId;
    public Text playerName;
    public Image playerDP;
    public Button shoutBtn;
    public RectTransform cardsHolder;

    private CardSelectionHandler _cardSelectionHandler = null;
    private float _delAngle;
    private float _angle;
    private bool _canDrag;
    private List<Card> _cards;
    private Vector3 _rotateAround;
    private Vector2 _lastMousePosition;

    public CardSelectionHandler CardSelectionHandler{ get { return _cardSelectionHandler; } }

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
            return _cardSelectionHandler.SelectedCard.ValueType;
        }
    }

    public Card SelectedCard
    {
        get
        {
            return _cardSelectionHandler.SelectedCard;
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

        _canDrag = false;
        _cards = new List<Card>();

        if (shoutBtn != null)
        {
            shoutBtn.onClick.AddListener(OnShout);
        }

        _cardSelectionHandler = gameObject.GetComponent<CardSelectionHandler>();
        _cardSelectionHandler.Init();
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
                break;
            }
        }

        return retCard;
    }

    public void AutoDeal()
    {
        Card card = _cards[0];
        _cardSelectionHandler.SetSelectedCard(card);
    }

    public void OnRoundEnd()
    {
        RemoveCardWithValue(SelectedCardValueType);
        _cardSelectionHandler.SetSelectedCard(null);
    }

    private void OnShout()
    {
        
    }

    private void UpdateAngle(float startAngle)
    {
        _delAngle = startAngle / _cards.Count; 
        _angle = startAngle / 2.0f - _delAngle;
    }

    public void UpdateCardsPosition()
    {
        float maxRadius = (600.0f / 13.0f) * 26;
        float radius = (600.0f / 13.0f) * _cards.Count;

        UpdateAngle((radius > maxRadius) ? 180.0f : 135.0f);
        radius = (radius > maxRadius) ? maxRadius : radius;

        _rotateAround = new Vector3(cardsHolder.transform.position.x, 
            cardsHolder.transform.position.y - radius, cardsHolder.transform.position.z);
        foreach (Card card in _cards)
        {
            card.transform.RotateAround(_rotateAround,
                new Vector3(0.0f, 0.0f, 1.0f), _angle);
            _angle -= _delAngle;
        }
        Vector2 size = CalculateCardsHolderBounds();
        cardsHolder.sizeDelta = size;
    }

    private Vector2 CalculateCardsHolderBounds()
    {
        float width = _cards[_cards.Count - 1].transform.localPosition.x - _cards[0].transform.localPosition.x;
        float height = _cards[0].GetComponent<RectTransform>().rect.height;
        return new Vector2(width * 1.25f, height);
    }

    void FixedUpdate()
    {   
        #if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0))
        {
            if (!_canDrag && RectTransformUtility.RectangleContainsScreenPoint(cardsHolder, Input.mousePosition
                , Camera.main))
            {
                _canDrag = true;
                _lastMousePosition = Input.mousePosition;
            }
        }
        else if (Input.GetMouseButtonUp(0))
        {
            _canDrag = false;
        }

        if (_canDrag)
        {
            float distance = Vector2.Distance(_lastMousePosition, Input.mousePosition);
            distance = (_lastMousePosition.x > Input.mousePosition.x) ? distance : distance * -1;
            _lastMousePosition = Input.mousePosition;

            if (distance != 0.0f)
            {
                int len = _cards.Count;
                for (int index = 0; index < len; index++)
                {
                    if (
                        _cards[0].transform.localEulerAngles.z + distance < 40.0f
                        || _cards[len - 1].transform.localEulerAngles.z + distance > 320.0f)
                    {
                        distance = 0.0f;
                    }
                    Card card = _cards[index];
                    card.transform.RotateAround(_rotateAround,
                        new Vector3(0.0f, 0.0f, 1.0f), 
                        distance
                    );
                }
            }
        }
        #elif UNITY_IPHONE
        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            
        }
        #endif
    }
}