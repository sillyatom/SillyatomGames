using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Newtonsoft;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;

public class MultiplayerMainGame : SceneMonoBehaviour
{
    public Dealer dealer;
    public Networking network;

    protected List<Player> _players;
    private NetworkResponse _lastResponse;

    override public void Init()
    {
        BridgeDebugger.Log("[ MultiplayerMainGame ] - Init()");
        base.Init();

        InitGame();
    }

    virtual protected void InitGame()
    {
        //Init Dealer
        dealer.Init();

        //update players
        UpdatePlayers();

        //if host
        if (Networking.isHost)
        {
            dealer.ShuffleCards();
            DispatchHostSelected();
        }

        //add event listeners
        AddListeners();
    }

    protected void AddListeners()
    {
        EventManager.instance.AddListener<InGameEvent>(OnInGameEvent);
    }

    protected void OnInGameEvent(InGameEvent evt)
    {
        switch (evt.type)
        {
            case InGameEvent.ON_SPIN_COMPLETE:
                {
                    Player player = GetPlayerById(evt.playerId);
                    DealCard(player);
                }
                break;
        }
    }

    private void DealCard(Player player)
    {
        Card card = player.SelectedCard;
        card.transform.SetParent(dealer.transform);
        Hashtable args = new Hashtable();
        args.Add("Player", player);
        iTween.MoveTo(card.gameObject, iTween.Hash("x", dealer.transform.position.x,
                "y", dealer.transform.position.y, "time", GameConstants.DEAL_ANIM_TIME,
                "oncomplete", "OnDealAnimationComplete", "oncompletetarget", gameObject,
                "oncompleteparams", args
            ));
    }

    private void OnDealAnimationComplete(object args)
    {
        Hashtable hArgs = (Hashtable)args;
        Player player = (Player)hArgs["Player"];
        player.OnSelectedCardDealt();
    }

    private Player GetPlayerById(string playerId)
    {
        foreach (var player in _players)
        {
            if (player.playerId == playerId)
            {
                return player;
            }
        }
        return null;
    }

    private void DispatchHostSelected()
    {
        HostSelectedVO vo = new HostSelectedVO();
        vo.api = (int)(NetworkConstants.API.HOST_DATA);
        vo.sender = Networking.hostId;
        vo.api_id = ++APIHandler.GetInstance().runningId;

        string data = JsonConvert.SerializeObject(vo);

        API api = new API();
        api.api = vo.api;
        api.data = data;
        api.id = vo.api_id;
        api.playerIds = Utility.DeepCopyList<string>(network.PlayersIdsExcludingThis);
        APIHandler.GetInstance().SendDataToAll(api);
    }

    virtual protected void UpdatePlayerCards(int numPlayers)
    {
        int deckSize = dealer.GetDeckSize();
        for (int index = 0; index < deckSize; index++)
        {
            _players[index % numPlayers].AddCard(dealer.PopBack());
        }
    }

    private void DispatchCardsData()
    {
        UpdatePlayerCards(network.numPlayers);

        Dictionary<string, List<string>> cardsData = new Dictionary<string, List<string>>();
        foreach (var playerId in network.PlayersIds)
        {
            Player player = GetPlayerById(playerId);
            cardsData[playerId] = player.GetCardsValueType;
        }

        InitCardsDataVO vo = new InitCardsDataVO();
        vo.api = (int)NetworkConstants.API.CARDS_DATA;
        vo.api_id = ++APIHandler.GetInstance().runningId;
        vo.sender = Networking.localId;
        vo.cards_data = cardsData;
        string data = JsonConvert.SerializeObject(vo);

        API api = new API();
        api.api = vo.api;
        api.id = vo.api_id;
        api.data = data;
        api.playerIds = Utility.DeepCopyList<string>(network.PlayersIdsExcludingThis);
        APIHandler.GetInstance().SendDataToAll(api);
    }

    protected bool IsSinglePlayerGame()
    {
        return (network == null);
    }

    virtual protected void UpdatePlayers()
    {
        _players = new List<Player>();

        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
        for (int index = 0; index < network.Players.Count; index++)
        {
            foreach (var gameObject in players)
            {
                Player player = gameObject.GetComponent<Player>();
                if (player.index == index)
                {
                    player.playerId = network.Players[index].PlayerId;
                    player.playerName.text = network.Players[index].Name;
                    player.Init();
                    _players.Add(player);
                    break;
                }
            }
        }

        for (int index = network.Players.Count; index < GameConstants.MAX_PLAYERS; index++)
        {
            foreach (var gameObject in players)
            {
                Player player = gameObject.GetComponent<Player>();
                if (player.index == index)
                {
                    player.gameObject.SetActive(false);       
                }
            }
        }
    }

    override protected void OnGameEvent(GameEvent evt)
    {
        base.OnGameEvent(evt);


        switch (evt.type)
        {
            case GameEvent.DISPATCH_CARDS_DATA:
                {
                    _lastResponse = evt.response;
                    DispatchCardsData();
                    DistributeCards(network.numPlayers);
                }
                break;
            case GameEvent.UPDATE_CARDS_DATA:
                {
                    _lastResponse = evt.response;
                    InitCardsData(evt);
                    DistributeCards(network.numPlayers);
                }
                break;
            default:
                break;
        }
    }

    private void InitCardsData(GameEvent evt)
    {
        InitCardsDataVO vo = JsonConvert.DeserializeObject<InitCardsDataVO>(evt.response.data);
        Dictionary<string, List<string>> cardsData = vo.cards_data;

        foreach (KeyValuePair<string, List<string>> iter in cardsData)
        {
            string playerId = iter.Key;
            List<string> cardsValueType = iter.Value;
            Player player = GetPlayerById(playerId);

            foreach (var valueType in cardsValueType)
            {
                player.AddCard(dealer.RemoveCardByValueType(valueType));    
            }
        }
    }

    protected void DistributeCards(int numPlayers)
    {
        float delay = 0.0f;
        float playerDelay = 0.0f;

        foreach (var player in _players)
        {
            delay = playerDelay;
            foreach (var card in player.Cards)
            {
                Hashtable args = new Hashtable();
                args.Add("player", player);
                args.Add("card", card);

                iTween.MoveTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", player.reel.position.x, "y", player.reel.position.y, "delay", delay,
                        "oncomplete", "OnDistributeAnimationComplete", "oncompleteparams", args, "oncompletetarget", this.gameObject));
                delay += (GameConstants.DEAL_ANIM_TIME * numPlayers);
                if (card != player.Back())
                {
                    RectTransform rectTransform = card.gameObject.GetComponent<RectTransform>();
                    iTween.MoveTo(card.gameObject, iTween.Hash("islocal", true, "time", GameConstants.DEAL_ANIM_TIME, "y", rectTransform.rect.y - (rectTransform.rect.height * 0.5f) - GameConstants.SYMBOL_SPACE
                        , "delay", delay));
                }
            }
            {
                Hashtable args = new Hashtable();
                args.Add("player", player);
                iTween.ScaleTo(player.gameObject, iTween.Hash("z", 1.0f, "time", GameConstants.DEAL_ANIM_TIME, "delay", delay,
                        "oncomplete", "OnDistributeAllCards", "oncompleteparams", args, "oncompletetarget", this.gameObject));
            }

            playerDelay += GameConstants.DEAL_ANIM_TIME;
        }            
    }

    virtual protected void OnDistributeAllCards(object args)
    {
        Hashtable hash = (Hashtable)(args);
        Player player = (Player)hash["player"];
        player.InitReel();
    }

    virtual protected void OnDistributeAnimationComplete(object args)
    {
        Hashtable hash = (Hashtable)(args);
        if (IsSinglePlayerGame())
        {
            //do nothing
        }
        else
        {
            if (!Networking.isHost)
            {
                GameEvent evt = new GameEvent(GameEvent.ACKNOWLEDGE, _lastResponse);
                EventManager.instance.Raise(evt);
            }
        }

        Player player = (Player)hash["player"];
        Card card = (Card)hash["card"];

        card.ShowFrontFace();

        //swap parent
        RectTransform rectTransform = card.gameObject.GetComponent<RectTransform>();
        rectTransform.SetParent(player.reel);
        rectTransform.localScale = Vector3.one;
        rectTransform.position = player.reel.position;
    }
}
