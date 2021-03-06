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
    _didShout = false;
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
    else
    {
        _isActivePlayer = false;
    }
    
    auto shoutBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, "shout_btn"));
    shoutBtn->addTouchEventListener(CC_CALLBACK_2(MainGame::onShout, this));
    auto spinBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, "spin_btn"));
    spinBtn->addTouchEventListener(CC_CALLBACK_2(MainGame::onSpin, this));
    
	return true;
}

void MainGame::onSpin(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType)
{
    if (eventType == ui::Widget::TouchEventType::ENDED)
    {
        if (_isActivePlayer)
        {
            doSpin();
        }
    }
}

void MainGame::doSpin()
{
    if (!_players.front()->isSpinning())
    {
        _players.front()->spinReel();
    }
}

void MainGame::onShout(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType)
{
    if (eventType == ui::Widget::TouchEventType::ENDED)
    {
        if (_cardSelectionHandler->getSelectedCard() != NULL)
        {
            _didShout = true;
        }
    }
}

void MainGame::updateCardConfigFromCSB()
{
    std::ostringstream oss;
    oss << "refCardPos_player1";
    ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
    CardConfig::CARD_WIDTH = refPos->getContentSize().width;
    CardConfig::CARD_HEIGHT = refPos->getContentSize().height;
}

ui::ImageView* MainGame::getReferenceByName(std::string name)
{
    ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), name));
    return refPos;
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
        
        std::ostringstream osstream;
        osstream << "refCardPos_player"<<(_numPlayers+1);
        player->setCardPosition(getReferenceByName(osstream.str())->getPosition());
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
        std::ostringstream osstream;
        osstream << "refCardPos_player"<<(_numPlayers+1);
        player->setCardPosition(getReferenceByName(osstream.str())->getPosition());

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
    _players.front()->resetReel();
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
        
        std::ostringstream ossCardReel;
        ossCardReel << "CardsReel" << playerIndex;
        ui::ImageView * cardsReel = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), ossCardReel.str()));

        Vec2 refPosition = refPos->getPosition();
        
        delayTime = playerDelay;
        int cardIndex = 0;
        for (auto card : player->getCards())
        {
            card->setAnchorPoint(refPos->getAnchorPoint());
            card->moveToPosition(refPosition, delayTime, CallFunc::create([=](){
            
            static int runningOrder = 0;
            card->showFrontFace();
            
            //swap parent
            card->retain();
            card->removeFromParent();
            cardsReel->addChild(card, runningOrder++);
                
            card->setPosition(cardsReel->getBoundingBox().size.width*0.5f, cardsReel->getBoundingBox().size.height*0.5f);
            if (card != player->getCards().back())
            {
                card->moveByPosition(Vec2(0.0f, -cardsReel->getBoundingBox().size.height), GameConstants::DEAL_ANIM_TIME);
            }
            }));
            delayTime += (GameConstants::DEAL_ANIM_TIME * _numPlayers);
            cardIndex++;
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
    _dealer->initDeck(_gameContainer);
    
    _dealer->onDealCard = std::bind(&MainGame::onDealAnimationComplete, this, std::placeholders::_1);
    
    //if is host, generate cards and shuffle
    if (_isActivePlayer)
    {
        _dealer->shuffleDeck();
    }
}

bool MainGame::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
    //if active player && card not selected
    if (_isActivePlayer
        && _cardSelectionHandler->getSelectedCard() == NULL
        && _roundHandler->getRoundStatus() == STARTED
        )
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
                event->stopPropagation();
                dealSelectedCard();
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

void MainGame::autoSpin()
{
    doSpin();
}

void MainGame::dealSelectedCard()
{
    Card * card = _cardSelectionHandler->getSelectedCard();
    _dealer->dealCard(card);
}

void MainGame::onDealAnimationComplete(Card* dealtCard)
{
    if (_isActivePlayer && _roundHandler->getRoundStatus() == COMPLETED)
    {
        //added to avoid triggering on deal animation complete twice
        //there is a chance that round end timer and dealt animation end time can get called one after the other
        _roundHandler->setRoundStatus(SUCCESS);
        
        float delay = 0.0f;
        if (_dealer->hasMatch())
        {
            if (_didShout)
            {
                std::vector<Card*> matches = _dealer->removeMatches();
                for (auto card : matches)
                {
                    _players.front()->addEarnedCard(card, delay);
                    delay += GameConstants::DEAL_ANIM_TIME;
                }
            }
            else
            {
                //failed to shout
                CCLOG("Failed to SHOUUTTT");
            }
        }
        Utility::delayedCall(this, CallFunc::create(CC_CALLBACK_0(MainGame::dispatchRoundComplete, this)), delay);
    }
}

void MainGame::update(float dt)
{
    for (auto player : _players)
    {
        player->update(dt);
    }
    ExtLayer::update(dt);
}