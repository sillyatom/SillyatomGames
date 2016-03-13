#include "MainGame.h"

using namespace rapidjson;

Scene * MainGame::createScene()
{
	auto scene = Scene::create();
	auto layer = MainGame::create();
	scene->addChild(layer);
	return scene;
}

bool MainGame::init()
{
	if (!ExtLayer::initWithData(MAIN_GAME))
	{
		return false;
	}

    _rootNode = CSLoader::createNode("MainGame.csb");
	addChild(_rootNode);
    
    _readyCounter = 0;
    _isActivePlayer = false;
    
    _cardSelectionHandler = CardSelectionHandler::getInstance();
    _apiHandler = APIHandler::getInstance();
    
    _apiHandler->apiSuccessHandler = std::bind(&MainGame::onAPISuccess, this, std::placeholders::_1);
    
    updateCardConfigFromCSB();
    
    createDealer();
    
    hideWidgets();
    
    addTouchListeners();

    _roundHandler = RoundHandler::getInstance();
    _roundHandler->onRoundComplete = std::bind(&MainGame::onRoundComplete, this, std::placeholders::_1, std::placeholders::_2);
    _gameContainer->addChild(_roundHandler);
    
    if (Network::isHost)
    {
        hostCreatePlayers();
        dispatchHostId();
    }
    
	return true;
}

void MainGame::updateCardConfigFromCSB()
{
    std::ostringstream oss;
    oss << "refCardPos_player1";
    ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
    CardConfig::CARD_WIDTH = refPos->getContentSize().width;
    CardConfig::CARD_HEIGHT = refPos->getContentSize().height;
}

void MainGame::hideWidgets()
{
    for (int index = 1; index <= MAX_PLAYERS; index++)
    {
        std::ostringstream oss;
        oss << "refCardPos_player" << index;
        ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
        refPos->setVisible(false);
    }
    {
        std::ostringstream oss;
        oss << "deck_card_1";
        ui::ImageView * ref = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
        ref->setVisible(false);
        
        _dealer->setDeckStartPos(ref->getPosition());
    }
}

void MainGame::createPlayers()
{
    _numPlayers = 0;
    NSMutableDictionary * players = [[GameKitHelper sharedGameKitHelper]playersDict];
    for (auto ids : _playersId)
    {
        GKPlayer * gkPlayer = [players objectForKey:[[NSString alloc]initWithUTF8String:ids.c_str()]];
        Player * player = Player::create();
        _gameContainer->addChild(player);
        
        player->setPlayerIndex(_numPlayers);
        player->setPlayerName([gkPlayer alias].UTF8String);
        player->setPlayerId([gkPlayer playerID].UTF8String);
        _players.push_back(player);
        _numPlayers++;
        
        std::ostringstream oss;
        oss<<"name_player"<<_numPlayers;
        ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
        name->setString(player->getPlayerName());
    }
    for(int index = _numPlayers+1; index <= MAX_PLAYERS; index++)
    {
        {
            std::ostringstream oss;
            oss<<"name_player"<<index;
            ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
            name->setVisible(false);
        }
        {
            std::ostringstream oss;
            oss << "dp_player" << index;
            ui::ImageView * dp = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
            dp->setVisible(false);
        }
        
    }
    
    _numPlayersExcludingThis = _numPlayers - 1;
    
    _playersExcludingThis = _players;
    _playersExcludingThis.erase(_playersExcludingThis.begin());
    
    for (auto player : _players)
    {
        _playersId.push_back(player->getPlayerId());
        _playersIdExcludingThis.push_back(player->getPlayerId());
    }
    
    _playersIdExcludingThis.erase(_playersIdExcludingThis.begin());
}

void MainGame::hostCreatePlayers()
{
    _numPlayers = 0;
    NSMutableDictionary * players = [[GameKitHelper sharedGameKitHelper]playersDict];
    for(id key in players)
    {
        GKPlayer * gkPlayer = [players objectForKey:key];
        Player * player = Player::create();
        _gameContainer->addChild(player);
        
        player->setPlayerIndex(_numPlayers);
        player->setPlayerName([gkPlayer alias].UTF8String);
        player->setPlayerId([gkPlayer playerID].UTF8String);
        _players.push_back(player);
        _numPlayers++;
        
        std::ostringstream oss;
        oss<<"name_player"<<_numPlayers;
        ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
        name->setString(player->getPlayerName());
    }
    for(int index = _numPlayers+1; index <= MAX_PLAYERS; index++)
    {
        {
            std::ostringstream oss;
            oss<<"name_player"<<index;
            ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
            name->setVisible(false);
        }
        {
            std::ostringstream oss;
            oss << "dp_player" << index;
            ui::ImageView * dp = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
            dp->setVisible(false);
        }
        
    }
    
    _numPlayersExcludingThis = _numPlayers - 1;
    
    _playersExcludingThis = _players;
    _playersExcludingThis.erase(_playersExcludingThis.begin());
    
    for (auto player : _players)
    {
        _playersId.push_back(player->getPlayerId());
        _playersIdExcludingThis.push_back(player->getPlayerId());
    }
    
    _playersIdExcludingThis.erase(_playersIdExcludingThis.begin());
}


void MainGame::onDistributeCards()
{
    resumeProcessEvents();
}

float MainGame::playDistributeCards()
{
    float playerDelay = 0.0f;
    float delayTime = 0.0f;
    
    for (auto player : _players)
    {
        int playerIndex = player->getPlayerIndex() + 1;
        
        std::ostringstream oss;
        oss << "refCardPos_player" << playerIndex;
        ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
        
        Vec2 refPosition = refPos->getPosition();
        
        delayTime = playerDelay;
        int runningZOrder = 0;
        
        for (auto card : player->getCards())
        {
            card->setAnchorPoint(refPos->getAnchorPoint());
            card->moveToPosition(refPosition, delayTime);
            card->setLocalZOrder(runningZOrder++);
            card->addTouchListeners(_listener);
            
            delayTime += (GameConstants::DEAL_ANIM_TIME * _numPlayers);
        }
        playerDelay += GameConstants::DEAL_ANIM_TIME;
    }
    return delayTime;
}

void MainGame::createDealer()
{
    _dealer = Dealer::create();
    _gameContainer->addChild(_dealer);
    
    _dealer->retain();
    _dealer->resetDeck();
    
    _dealer->onDealCard = std::bind(&MainGame::validateDeal, this, std::placeholders::_1);
    
    //if is host, generate cards and shuffle
    if (Network::isHost)
    {
        _dealer->shuffleDeck();
    }
}

bool MainGame::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
    if (_isActivePlayer)
    {
        Card* card = dynamic_cast<Card*>(event->getCurrentTarget());
        
        if (card != nullptr)
        {
            cocos2d::Point locationInNode = card->convertToNodeSpace(touch->getLocation());
            cocos2d::Size s = card->getContentSize();
            cocos2d::Rect rect = cocos2d::Rect(0, 0, s.width, s.height);
            
            if (rect.containsPoint(locationInNode))
            {
                CCLOG("Touched Card : %s ", card->getValue().c_str());
                _cardSelectionHandler->setActiveCard(card);
                _roundHandler->stopRound();
                event->stopPropagation();
                return true;
            }
        }
    }
    return false;
}

void MainGame::onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void MainGame::onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event)
{
}

void MainGame::onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

float MainGame::updateCardsData(int type, rapidjson::Document &data)
{
    for (auto player : _players)
    {
        const rapidjson::Value& cards = data[player->getPlayerId().c_str()];
        
        int length = (int)cards.Size();
        for (int i = 0; i < length; i++)
        {
            std::string card = cards[i].GetString();
            player->addCard(_dealer->removeCardWithValue(card));
        }
    }
    
    //distribute card animation
    float delay = playDistributeCards();
    pauseProcessEvents();
    
    Utility::delayedCall(this, CallFunc::create([=]()
                                                {
                                                    //acknowledge
                                                    onProcessDataComplete();
                                                    onDistributeCards();
                                                }), delay);
    return delay;
}

Player* MainGame::getPlayerById(std::string playerId)
{
    for (auto player : _players)
    {
        if (player->getPlayerId() == playerId)
        {
            return player;
        }
    }
    return NULL;
}

void MainGame::startMatch()
{
    if (Network::isHost)
    {
        CCLOG("%s starting match", [[GKLocalPlayer localPlayer]playerID].UTF8String);
        _isActivePlayer = true;
        _roundHandler->startRound(1);
    }
    else
    {
        
    }
}

void MainGame::startRound(int type, rapidjson::Document &data)
{
    _isActivePlayer = isThisActivePlayer();
    int roundNumber = data[NetworkKey::ROUND_ID.c_str()].GetInt();
    _roundHandler->setRoundNumber(roundNumber);
    _roundHandler->playNextRound();
    //acknowledge
    onProcessDataComplete();
}

NSData* MainGame::getAcknowledgementData(rapidjson::Document &data)
{
    NSMutableDictionary *dict = [[NSMutableDictionary alloc]init];
    [dict setObject:[[GKLocalPlayer localPlayer]playerID] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::PLAYER_ID.c_str()]];
    [dict setObject:[NSNumber numberWithInt:data[NetworkKey::API.c_str()].GetInt()] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::API.c_str()]];
    [dict setObject:[NSNumber numberWithInt:data[NetworkKey::API_ID.c_str()].GetInt()] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::API_ID.c_str()]];
    [dict setObject:[[NSString alloc]initWithUTF8String:data[NetworkKey::SENDER.c_str()].GetString()] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::SENDER.c_str()]];
    NSError * error;
    NSData * nsData = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    return nsData;
}

bool MainGame::isThisActivePlayer()
{
    return (strcmp(_roundHandler->getNextActivePlayer().c_str(), [[GKLocalPlayer localPlayer]playerID].UTF8String) == 0);
}

void MainGame::dealSelectedCard()
{
    Card * card = _cardSelectionHandler->getSelectedCard();
    
    if (card == NULL)
    {
        card = _players.front()->getCard();
        _cardSelectionHandler->setActiveCard(card);
    }
    _dealer->dealCard(card);
}

void MainGame::validateDeal(Card* dealtCard)
{
    if (_isActivePlayer)
    {
        std::vector<Card*> matches = _dealer->removeMatches();
        if (matches.size() > 0)
        {
            float delay = 0.0f;
            for (auto card : matches)
            {
                _players.front()->addEarnedCard(card, delay);
                delay += GameConstants::DEAL_ANIM_TIME;
            }
            Utility::delayedCall(this, CallFunc::create(CC_CALLBACK_0(MainGame::dispatchRoundComplete, this)), delay);
        }
        else
        {
            dispatchRoundComplete();
        }
    }
}