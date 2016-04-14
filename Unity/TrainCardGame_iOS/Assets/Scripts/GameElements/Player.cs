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
    public RectTransform cardsHolder;
    public Button shoutBtn;

    private List<Card> _cards;
    private float _delAngle;
    private float _angle;
    private Vector3 _rotateAround;
    private bool _canDrag;
    private Vector2 _lastMousePosition;

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
            return "";
        }
    }

    public Card SelectedCard
    {
        get
        {
            return null;
        }
    }

    public int SelectedCardIndex
    {
        get
        {
            return -1;
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
        _canDrag = false;

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
        return new Vector2(width, height);
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
                cardsHolder.transform.RotateAround(_rotateAround, Vector3.forward, distance);
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