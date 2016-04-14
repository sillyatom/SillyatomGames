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

    private NetworkResponse _lastResponse;

    protected List<Player> _players;
    protected RoundHandler _roundHandler;

    public Player GetLocalPlayer{ get { return _players[0]; } }

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

        //init Round Handler
        _roundHandler = GetComponent<RoundHandler>();
        _roundHandler.Init();
        _roundHandler.OnRoundCompleteCallback = OnRoundEnd;

        //add card selection handler to local player
        GetLocalPlayer.GetCardSelectionHandler();

        //if host
        if (Networking.isHost)
        {
            dealer.ShuffleCards();
            DispatchHostSelected();
        }
    }

    override protected void OnInGameEvent(InGameEvent evt)
    {
        base.OnInGameEvent(evt);
        switch (evt.type)
        {
            case InGameEvent.DISPATCH_CARDS_DATA:
                {
                    DispatchCardsData();
                    DistributeCards(network.numPlayers);
                }
                break;
            case InGameEvent.ON_SPIN_COMPLETE:
                {
                    Player player = GetPlayerById(evt.playerId);
                    DealCard(player);
                }
                break;
            case InGameEvent.START_GAME:
                {
                    StartGame();
                }
                break;
        }
    }

    private void DealCard(Player player)
    {
        Card card = player.SelectedCard;
        card.transform.SetParent(dealer.transform);
        card.transform.localEulerAngles = Vector3.zero;
        Hashtable args = new Hashtable();
        args.Add("Player", player);

        dealer.AddCard(card);
        dealer.ShiftCards();
        Utility.DelayedCallWithArgs(gameObject, gameObject, "OnDealAnimationComplete", args, dealer.GetDeckSize());
    }

    private void OnDealAnimationComplete(object args)
    {
        //send the data before dealing with cleaning up
        DispatchRoundResult();

        Hashtable hArgs = (Hashtable)args;
        Player player = (Player)hArgs["Player"];

        player.OnRoundEnd();
        _roundHandler.OnRoundEnd();
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

    private void DispatchRoundResult()
    {
//        RoundResultVO vo = new RoundResultVO();
//        vo.api = (int)(NetworkConstants.API.ROUND_RESULT);
//        vo.sender = Networking.hostId;
//        vo.api_id = ++APIHandler.GetInstance().runningId;
//        vo.cardValueType = GetLocalPlayer.SelectedCard.ValueType;
//        vo.roundId = _roundHandler.GetRoundNumber;
//
//        string data = JsonConvert.SerializeObject(vo);
//
//        API api = new API();
//        api.api = vo.api;
//        api.data = data;
//        api.id = vo.api_id;
//        api.playerIds = Utility.DeepCloneList<string>(network.PlayersIdsExcludingThis);
//        APIHandler.GetInstance().SendDataToAll(api);
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
        api.playerIds = Utility.DeepCloneList<string>(network.PlayersIdsExcludingThis);
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
        api.playerIds = Utility.DeepCloneList<string>(network.PlayersIdsExcludingThis);
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

        _lastResponse = evt.response;

        switch (evt.type)
        {
            case GameEvent.UPDATE_CARDS_DATA:
                {
                    InitCardsData(evt);
                    DistributeCards(network.numPlayers);
                }
                break;
            case GameEvent.ROUND_RESULT:
                {
                    OnRoundResult(evt);
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

                iTween.MoveTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", player.cardsHolder.position.x, "y", player.cardsHolder.position.y, "delay", delay,
                        "oncomplete", "OnDistributeAnimationComplete", "oncompleteparams", args, "oncompletetarget", this.gameObject));
                delay += (GameConstants.DEAL_ANIM_TIME * numPlayers);
            }

            playerDelay += GameConstants.DEAL_ANIM_TIME;
        }            
        {
            iTween.ScaleTo(this.gameObject, iTween.Hash("z", 1.0f, "time", GameConstants.DEAL_ANIM_TIME, "delay", delay,
                    "oncomplete", "OnDistributeAllCards", "oncompletetarget", this.gameObject));
        }
    }

    virtual protected void OnDistributeAllCards()
    {
        GetLocalPlayer.UpdateCardsPosition();

        if (IsSinglePlayerGame())
        {
            StartGame();
        }
        else
        {
            if (!Networking.isHost)
            {
                GameEvent evt = new GameEvent(GameEvent.ACKNOWLEDGE, _lastResponse);
                EventManager.instance.Raise(evt);
            }
        }
    }

    virtual protected void OnDistributeAnimationComplete(object args)
    {
        Hashtable hash = (Hashtable)(args);
        Player player = (Player)hash["player"];
        Card card = (Card)hash["card"];

        card.ShowFrontFace();

        //swap parent
        RectTransform rectTransform = card.gameObject.GetComponent<RectTransform>();
        rectTransform.SetParent(player.cardsHolder);
        rectTransform.localScale = Vector3.one;
        rectTransform.position = player.cardsHolder.position;
    }

    private void StartGame()
    {
        EventManager.instance.Raise(new InGameEvent(InGameEvent.Round_Active_Player, GetLocalPlayer.playerId));
        _roundHandler.StartMatch();
    }

    protected void OnRoundEnd()
    {
        //if current round is played by local player
        if (_roundHandler.IsActivePlayerLocal)
        {
            Card selectedCard = GetLocalPlayer.SelectedCard;
            //if player has not selected a card
            if (selectedCard == null)
            {
                //do auto deal
                GetLocalPlayer.AutoDeal();
            }
            DealCard(GetLocalPlayer);
        }
    }

    private void OnRoundResult(GameEvent evt)
    {
    }
}
