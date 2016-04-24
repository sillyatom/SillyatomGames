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

    public Player GetLocalPlayer{ get { return _players[0]; } }

    protected List<Player> _players;
    protected RoundHandler _roundHandler;

    private NetworkResponse _lastResponse;

    override public void Init()
    {
        base.Init();
        network = SingletonManager.reference.network;
        InitGame();
    }

    virtual public void InitGame()
    {
        //Init Dealer
        dealer.Init();

        //update players
        UpdatePlayers();

        //init Round Handler
        _roundHandler = GetComponent<RoundHandler>();
        _roundHandler.Init();
        _roundHandler.OnRoundCompleteCallback = OnRoundEnd;

        //if host
        if (Networking.IsHost)
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
            case InGameEvent.DISPATCH_NEXT_ROUND:
                {
                    DispatchNextRound();
                }
                break;
            case InGameEvent.ON_CARD_SELECTED:
                {
                    Player player = GetLocalPlayer;
                    if (player.playerId == SingletonManager.reference.network.LocalId && SingletonManager.reference.roundHandler.IsActivePlayerLocal)
                    {
                        player.SetSelectedCard(evt.card);
                        DealCard(player);
                    }
                }
                break;
            case InGameEvent.ON_ROUND_START:
                {
                    Player player = GetPlayerById(evt.playerId);
                    player.OnRoundStart();
                }
                break;
        }
    }

    protected void DealCard(Player player, bool isAutoDeal = false)
    {
        Card card = player.SelectedCard;
        player.RemoveCardWithValue(card.ValueType);
        card.transform.SetParent(dealer.transform);
        card.transform.localEulerAngles = Vector3.zero;
        Hashtable args = new Hashtable();
        args.Add("Player", player);

        dealer.AddCard(card);

        float delay = dealer.ShiftCards();

        if (isAutoDeal)
        {
            Utility.DelayedCallWithArgs(gameObject, gameObject, "OnAutoDealAnimationComplete", args, 0.2f, delay);
        }
        else
        {
            Utility.DelayedCallWithArgs(gameObject, gameObject, "OnDealComplete", args, 0.2f, delay);
        }
    }

    private void OnDealComplete(object pArgs)
    {
        Hashtable args = (Hashtable)(pArgs);
        Player player = (Player)(args["Player"]);
        if (player.IsLocalPlayer)
        {
            player.UpdateCardsPosition();
        }
    }

    private void OnAutoDealAnimationComplete(object pArgs)
    {
        CheckWinnings();
    }

    protected void CheckWinnings()
    {
        Player player = GetPlayerById(_roundHandler.GetActivePlayerId);
        bool isLocal = (player.playerId == Networking.localId);
        ResultVO vo = null;

        //CheckResult
        if (dealer.HasMatch() && player.DidPullOver)
        {
            vo = dealer.GetResult();

            //animation
            float delay = 0.0f;
            foreach (var card in vo.cards)
            {
                Hashtable cArgs = new Hashtable();
                cArgs.Add("Player", player.playerId);
                cArgs.Add("Card", card);

                if (!isLocal)
                {
                    iTween.ScaleTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", 0.5f, "y", 0.5f, "delay", delay));
                }
                iTween.MoveTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", player.cardsHolder.position.x, "y", player.cardsHolder.position.y, "delay", delay
                    , "oncomplete", "OnDistributeWinningCard", "oncompleteparams", cArgs, "oncompletetarget", this.gameObject));
                delay += GameConstants.DEAL_ANIM_TIME * 0.5f;
            }
            Hashtable args = new Hashtable();
            args.Add("Player", player.playerId);
            args.Add("VO", vo);
            Utility.DelayedCallWithArgs(gameObject, gameObject, "OnDistributeAllWinningCards", args, GameConstants.DEAL_ANIM_TIME, delay + GameConstants.DEAL_ANIM_TIME);
        }
        else if (dealer.HasMatch() && !player.DidPullOver)
        {
            vo = dealer.GetResult();
            vo.winningCards = new Dictionary<string, List<string>>();

            //update vo.winningCards
            List<string> rewardingPlayers = new List<string>();
            int indexOf = network.PlayersIds.IndexOf(_roundHandler.GetActivePlayerId);
            for (int i = indexOf + 1; i < network.PlayersIds.Count; i++)
            {
                rewardingPlayers.Add(network.PlayersIds[i]);
            }
            for (int i = 0; i < indexOf; i++)
            {
                rewardingPlayers.Add(network.PlayersIds[i]);
            }

            foreach (var playerId in rewardingPlayers)
            {
                vo.winningCards[playerId] = new List<string>();
            }

            int len = rewardingPlayers.Count;
            int runningIndex = 0;
            foreach (var card in vo.cards)
            {
                if (runningIndex >= len)
                {
                    runningIndex = 0;
                }
                vo.winningCards[rewardingPlayers[runningIndex]].Add(card.ValueType);
                runningIndex++;
            }
            foreach (KeyValuePair<string, List<string>> iter in vo.winningCards)
            {
                GetPlayerById(iter.Key).CardsRewarded = iter.Value;
            }

            Hashtable args = new Hashtable();
            args.Add("Player", player.playerId);
            args.Add("VO", vo);

            DistributeFailedCards(rewardingPlayers.Count, args);
        }
        else
        {
            Hashtable args = new Hashtable();
            args.Add("Player", player.playerId);
            OnDistributeAllWinningCards(args);   
        }
    }

    private void OnDistributeWinningCard(object args)
    {
        Hashtable hArgs = (Hashtable)args;
        Player player = GetPlayerById((string)hArgs["Player"]);
        Card card = (Card)hArgs["Card"];

        card.transform.SetParent(player.cardsHolder.transform);
        player.AddCard(card);
        card.ShowBackFace();
        card.transform.localScale = Vector3.one;
        if (player.IsLocalPlayer)
        {
            player.UpdateCardsPosition();
        }
    }

    virtual protected void OnDistributeAllWinningCards(object args)
    {
        Hashtable hArgs = (Hashtable)args;
        Player player = GetPlayerById((string)hArgs["Player"]);
        dealer.ShiftCards();
        if (_roundHandler.IsActivePlayerLocal)
        {
            //send the data before dealing with cleaning up
            ResultVO vo = (ResultVO)hArgs["VO"];
            DispatchRoundResult(vo);
        }
        else
        {

            GameEvent gEvt = new GameEvent(GameEvent.ACKNOWLEDGE, _lastResponse);
            EventManager.instance.Raise(gEvt);
        }

        //clear all round data
        player.OnRoundEnd();

        _roundHandler.OnRoundEnd();

    }

    protected Player GetPlayerById(string playerId)
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

    private void DispatchRoundResult(ResultVO result)
    {
        RoundResultVO vo = new RoundResultVO();
        vo.api = (int)(NetworkConstants.API.ROUND_RESULT);
        vo.sender = Networking.localId;
        vo.player_id = Networking.localId;
        vo.api_id = ++APIHandler.GetInstance().runningId;
        vo.cardValueType = GetPlayerById(_roundHandler.GetActivePlayerId).SelectedCard.ValueType;
        vo.roundId = _roundHandler.GetRoundNumber;
        vo.didPullOver = GetLocalPlayer.DidPullOver;
        vo.winningCards = result.winningCards;

        string data = JsonConvert.SerializeObject(vo);

        API api = new API();
        api.api = vo.api;
        api.data = data;
        api.id = vo.api_id;

        api.playerIds = Utility.DeepCloneList<string>(network.PlayersIdsExcludingThis);
        APIHandler.GetInstance().SendDataToAll(api);
    }

    private void DispatchHostSelected()
    {
        HostSelectedVO vo = new HostSelectedVO();
        vo.api = (int)(NetworkConstants.API.HOST_DATA);
        vo.sender = Networking.hostId;
        vo.api_id = ++APIHandler.GetInstance().runningId;

        string data = JsonConvert.SerializeObject(vo);
        BridgeDebugger.Log("[ Dispatching Host Selected ]" + data);
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
            case GameEvent.UPDATE_CARDS_DATA:
                {
                    _lastResponse = evt.response;

                    InitCardsData(evt);
                    DistributeCards(network.numPlayers);
                }
                break;
            case GameEvent.ROUND_RESULT:
                {
                    _lastResponse = evt.response;

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

    private void DistributeFailedCards(int numPlayers, object oArgs)
    {
        Hashtable ohargs = (Hashtable)(oArgs);
        ResultVO vo = (ResultVO)(ohargs["VO"]);
        float delay = 0.0f;
        float playerDelay = 0.0f;

        foreach (var player in _players)
        {
            if (!vo.winningCards.ContainsKey(player.playerId))
            {
                continue;
            }
            delay = playerDelay;
            bool isLocal = (player.playerId == Networking.localId);
            foreach (var cardVT in vo.winningCards[player.playerId])
            {
                Card card = vo.GetCardWithValueType(cardVT);
                Hashtable args = new Hashtable();
                args.Add("player", player);
                args.Add("card", card);

                iTween.MoveTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", player.cardsHolder.position.x, "y", player.cardsHolder.position.y, "delay", delay,
                        "oncomplete", "OnDistributeAnimationComplete", "oncompleteparams", args, "oncompletetarget", this.gameObject));
                if (!isLocal)
                {
                    iTween.ScaleTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", 0.5f, "y", 0.5f, "delay", delay, "oncomplete", "ResetScale",
                            "oncompleteparams", args, "oncompletetarget", this.gameObject));
                }
                delay += (GameConstants.DEAL_ANIM_TIME * numPlayers);
            }

            playerDelay += GameConstants.DEAL_ANIM_TIME;
        }            
        {
            iTween.ScaleTo(this.gameObject, iTween.Hash("z", 1.0f, "time", GameConstants.DEAL_ANIM_TIME, "delay", delay,
                    "oncomplete", "OnDistributeAllFailedCards", "oncompletetarget", this.gameObject, "oncompleteparams", oArgs));
        }
    }

    virtual protected void OnDistributeAllFailedCards(object oArgs)
    {
        Hashtable args = (Hashtable)(oArgs);
        GetLocalPlayer.UpdateCardsPosition();
        OnDistributeAllWinningCards(args);
    }

    protected void DistributeCards(int numPlayers)
    {
        float delay = 0.0f;
        float playerDelay = 0.0f;

        foreach (var player in _players)
        {
            delay = playerDelay;
            bool isLocal = (player.playerId == Networking.localId);
            foreach (var card in player.Cards)
            {
                Hashtable args = new Hashtable();
                args.Add("player", player);
                args.Add("card", card);

                iTween.MoveTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", player.cardsHolder.position.x, "y", player.cardsHolder.position.y, "delay", delay,
                        "oncomplete", "OnDistributeAnimationComplete", "oncompleteparams", args, "oncompletetarget", this.gameObject));
                if (!isLocal)
                {
                    iTween.ScaleTo(card.gameObject, iTween.Hash("time", GameConstants.DEAL_ANIM_TIME, "x", 0.5f, "y", 0.5f, "delay", delay, "oncomplete", "ResetScale",
                            "oncompleteparams", args, "oncompletetarget", this.gameObject));
                }
                delay += (GameConstants.DEAL_ANIM_TIME * numPlayers);
            }

            playerDelay += GameConstants.DEAL_ANIM_TIME;
        }            
        {
            iTween.ScaleTo(this.gameObject, iTween.Hash("z", 1.0f, "time", GameConstants.DEAL_ANIM_TIME, "delay", delay,
                    "oncomplete", "OnDistributeAllCards", "oncompletetarget", this.gameObject));
        }
    }

    private void ResetScale(object args)
    {
        Hashtable hash = (Hashtable)(args);
        Card card = (Card)hash["card"];
        card.transform.localScale = Vector3.one;
    }

    virtual protected void OnDistributeAllCards()
    {
        GetLocalPlayer.UpdateCardsPosition();
        if (!Networking.IsHost)
        {
            GameEvent evt = new GameEvent(GameEvent.ACKNOWLEDGE, _lastResponse);
            EventManager.instance.Raise(evt);
        }
        _roundHandler.StartMatch();
    }

    virtual protected void OnDistributeAnimationComplete(object args)
    {
        Hashtable hash = (Hashtable)(args);
        Player player = (Player)hash["player"];
        Card card = (Card)hash["card"];
        card.ShowBackFace();
        //swap parent
        RectTransform rectTransform = card.gameObject.GetComponent<RectTransform>();
        rectTransform.SetParent(player.cardsHolder);
        rectTransform.localScale = Vector3.one;
        rectTransform.position = player.cardsHolder.position;
    }

    virtual protected void DispatchNextRound()
    {
        //dispatch
        RoundVO vo = new RoundVO();
        vo.api = (int)(NetworkConstants.API.NEXT_ROUND);
        vo.sender = Networking.localId;
        vo.api_id = ++APIHandler.GetInstance().runningId;
        //add +1 round number will be incremented only on round start
        vo.roundId = _roundHandler.GetRoundNumber + 1;
        vo.playerIdForRound = network.PlayersIdsExcludingThis[0];

        string data = JsonConvert.SerializeObject(vo);

        API api = new API();
        api.api = vo.api;
        api.data = data;
        api.id = vo.api_id;

        api.playerIds = Utility.DeepCloneList<string>(network.PlayersIdsExcludingThis);
        APIHandler.GetInstance().SendDataToAll(api);
    }

    virtual protected void OnRoundEnd()
    {
        Player player = GetPlayerById(_roundHandler.GetActivePlayerId);
    
        //handle on round end only if player is local player
        //else wait for on round result
        if (player.playerId == Networking.localId)
        {
            Card selectedCard = player.SelectedCard;
            //if player has not selected a card
            if (selectedCard == null)
            {
                //do auto deal
                player.AutoDeal();
                DealCard(player, true);
            }
            else
            {
                CheckWinnings();
            }
        }
    }

    private void OnRoundResult(GameEvent evt)
    {
        RoundResultVO vo = JsonConvert.DeserializeObject<RoundResultVO>(evt.response.data);
        _roundHandler.SetActivePlayerId = vo.player_id;
        _roundHandler.StopTimer();
        Player player = GetPlayerById(vo.player_id);
        player.OnRoundResult(vo.cardValueType, vo.didPullOver);
        DealCard(player, true);
    }
}
