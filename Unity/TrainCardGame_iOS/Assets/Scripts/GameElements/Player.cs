using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public enum E_PLAYER_TURN
{
    WAITING = 0,
    GET_READY = 1,
    PLAYING = 2
}

public class Player : ExtMonoBehaviour
{
    [SerializeField]
    public int index;
    public string playerId;
    public GameObject countPip;
    public Text cardCount;
    public Text playerName;
    public Image playerDP;
    public Button pullOverBtn;
    public RectTransform cardsHolder;

    private float _delAngle;
    private float _angle;
    private bool _canDrag;
    private List<Card> _cards;
    private List<string> _cardsRewarded;
    private Vector3 _rotateAround;
    private Vector2 _lastMousePosition;

    private CardSelectionHandler _cardSelectionHandler = null;

    public CardSelectionHandler CardSelectionHandler{ get { return _cardSelectionHandler; } }

    public bool IsDistributionComplete{ get; set; }

    public Image dimRed;
    public Image dimYellow;
    public Image dimGreen;

    public Color redColor;
    public Color grayColor;

    public List<Card> Cards
    {
        get
        {
            return _cards;
        }
    }

    public List<string> CardsRewarded
    {
        get
        {
            return _cardsRewarded;
        }
        set
        {
            _cardsRewarded = value;
        }
    }

    public bool DidPullOver{ get; set; }

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

    public bool HasCards
    {
        get
        {
            return Cards.Count > 0 ? true : false;
        }
    }

    public int CardsCount
    {
        get
        {
            return Cards.Count;
        }
    }

    public void SetGrayEffectForAllCards(float val)
    {
        foreach (var card in _cards)
        {
            card.SetGrayEffect(val);
        }
        if (val == 1.0f)
        {
            countPip.GetComponent<Image>().color = grayColor;
        }
        else if (val == 0.0f)
        {
            countPip.GetComponent<Image>().color = redColor;
        }

    }


    public void SetTurnStatus(E_PLAYER_TURN status)
    {
        switch (status)
        {
            case E_PLAYER_TURN.WAITING:
                dimRed.enabled = false;
                dimYellow.enabled = true;
                dimGreen.enabled = true;
                SetGrayEffectForAllCards(1.0f);
                break;

            case E_PLAYER_TURN.PLAYING:
                dimRed.enabled = true;
                dimYellow.enabled = true;
                dimGreen.enabled = false;
                SetGrayEffectForAllCards(0.0f);
                break;

            case E_PLAYER_TURN.GET_READY:
                dimRed.enabled = true;
                dimYellow.enabled = false;
                dimGreen.enabled = true;
                SetGrayEffectForAllCards(1.0f);
                break;
        }

        SetGrayEffectAmount((status == E_PLAYER_TURN.PLAYING) ? 0f : 1f);
    }

    private void SetGrayEffectAmount(float amount)
    {
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

    public Card GetCardByValueType(string valueType)
    {
        foreach (var card in _cards)
        {
            if (card.ValueType == valueType)
            {
                return card;
            }
        }
        return null;
    }

    public bool IsLocalPlayer
    {
        get
        {
            return (playerId == SingletonManager.reference.network.LocalId);
        }
    }

    public void OnRoundStart()
    {
        DidPullOver = false;
        SetTurnStatus(E_PLAYER_TURN.PLAYING);
    }

    public void UpdateDP(string imagePath)
    {
        if (!string.IsNullOrEmpty(imagePath))
        {
            Rect rect = playerDP.GetComponent<RectTransform>().rect;
            Texture2D texture2D = new Texture2D((int)(rect.width), (int)(rect.height));
            byte[] imageBytes = System.IO.File.ReadAllBytes(imagePath);
            texture2D.LoadImage(imageBytes);
            playerDP.sprite = Sprite.Create(texture2D, new Rect(0, 0, texture2D.width, texture2D.height), new Vector2(0.5f, 0.5f));
        }
    }

    public override void Reset()
    {
        base.Reset();
        _canDrag = false;
        _cardsRewarded.Clear();
        IsDistributionComplete = false;
        for (int index = _cards.Count - 1; index >= 0; index--)
        {
            Destroy(_cards[index].gameObject);
        }
        _cards.Clear();
       
        Destroy(gameObject.GetComponent<CardSelectionHandler>());
        
        _cardSelectionHandler = gameObject.AddComponent<CardSelectionHandler>();
        _cardSelectionHandler.Init();

        UpdatePipCount();
        countPip.SetActive(false);
        SetTurnStatus(E_PLAYER_TURN.WAITING);
    }

    override public void Init()
    {
        base.Init();

        _canDrag = false;
        _cards = new List<Card>();
        _cardsRewarded = new List<string>();
        IsDistributionComplete = false;
        if (pullOverBtn != null)
        {
            pullOverBtn.onClick.AddListener(OnPullOver);
        }

        _cardSelectionHandler = gameObject.GetComponent<CardSelectionHandler>();
        _cardSelectionHandler.Init();

        UpdatePipCount();
        countPip.SetActive(false);
        SetTurnStatus(E_PLAYER_TURN.WAITING);
    }

    public void EnableCountPip(bool val)
    {
        if (IsDistributionComplete)
        {
            if (countPip.activeSelf != val)
            {
                countPip.SetActive(val);
            }
        }
    }

    public void AddCard(Card card)
    {
        _cards.Add(card);
        UpdatePipCount();
    }

    public void UpdatePipCount()
    {
        int count = _cards.Count;
        cardCount.text = count.ToString();
        if (count <= 0)
        {
            EnableCountPip(false);
        }
        else if (count > 0)
        {
            EnableCountPip(true);
        }
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
                UpdatePipCount();

                break;
            }
        }
        return retCard;
    }

    public void SetSelectedCard(Card card)
    {
        _cardSelectionHandler.SetSelectedCard(card);
    }

    public void AutoDeal()
    {
        Card card = _cards[0];
        SetSelectedCard(card);
    }

    public void OnRoundResult(string cardValueType, bool didPullOver)
    {
        Card card = GetCardByValueType(cardValueType);
        SetSelectedCard(card);
        DidPullOver = didPullOver;
    }

    public void OnRoundEnd()
    {
        SetSelectedCard(null);
        SetTurnStatus(E_PLAYER_TURN.WAITING);
    }

    private void OnPullOver()
    {
        DidPullOver = true;
    }

    private void UpdateAngle(float startAngle)
    {
        _delAngle = startAngle / _cards.Count; 
        _angle = startAngle / 2.0f - _delAngle;
    }

    public void UpdateCardsPosition()
    {
        if (!HasCards)
        {
            return;
        }
        foreach (Card card in _cards)
        {
            card.transform.rotation = Quaternion.identity;
            card.transform.localPosition = Vector3.zero;
        }

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

    void Update()
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
                distance *= 0.1f;
                int len = _cards.Count;
                for (int index = 0; index < len; index++)
                {
//                    if (
//                        _cards[0].transform.localEulerAngles.z + distance <= 40.0f
//                        || _cards[len - 1].transform.localEulerAngles.z + distance >= 320.0f)
//                    {
//                        return;
//                    }
                    Card card = _cards[index];
                    card.transform.RotateAround(_rotateAround,
                        new Vector3(0.0f, 0.0f, 1.0f), 
                        distance
                    );
                }
            }
        }
        #elif UNITY_IPHONE
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Began)
            {
                if (RectTransformUtility.RectangleContainsScreenPoint(cardsHolder, touch.position
                , Camera.main))
                {
                    _canDrag = true;
                    _lastMousePosition = touch.position;
                }
            }
            else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
            {
                _canDrag = false;
            }
            if (_canDrag)
            {
                float distance = Vector2.Distance(_lastMousePosition, touch.position);
                distance = (_lastMousePosition.x > touch.position.x) ? distance : distance * -1;
                _lastMousePosition = touch.position;

                if (distance != 0.0f)
                {
                    distance *= 0.1f;

                    int len = _cards.Count;
                    for (int index = 0; index < len; index++)
                    {
                        //if (
                          //  _cards[0].transform.localEulerAngles.z + distance <= 40.0f
                          //  || _cards[len - 1].transform.localEulerAngles.z + distance >= 320.0f)
                        //{
                            //  return;
                        //}
                        Card card = _cards[index];
                        card.transform.RotateAround(_rotateAround,
                            new Vector3(0.0f, 0.0f, 1.0f), 
                            distance
                        );
                    }
                }
            }
        }
        #endif
    }
}