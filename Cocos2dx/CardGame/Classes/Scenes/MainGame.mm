#include "MainGame.h"
#include "../Constants/GameConstants.h"
#include "../Config/CardConfig.h"
#include "../../proj.ios_mac/GameKitHelper/GameKitHelper.h"

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
	if (!ExtLayer::init())
	{
		return false;
	}

    _rootNode = CSLoader::createNode("MainGame.csb");
	addChild(_rootNode);

    _cardSelectionHandler = CardSelectionHandler::getInstance();
    
    updateCardConfigFromCSB();
    
    createDealer();
    createPlayers();
    
    hideWidgets();
    
    addTouchListeners();
    addCustomListeners();
    
    if (Network::isHost)
    {
        distributeCardsData();
    }
    
    CCLOG("[ Main Game Initialized ]");
    
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
    for (auto player : _players)
    {
        int playerIndex = player->getPlayerIndex() + 1;
        std::ostringstream oss;
        oss << "refCardPos_player" << playerIndex;
        ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
        refPos->setVisible(false);
    }
}

void MainGame::startGameCountDownTimer()
{
//    scheduleOnce(schedule_selector(MainGame::startGame), 1.0f);
}

void MainGame::createPlayers()
{
    numPlayers = 0;
    NSMutableDictionary * players = [[GameKitHelper sharedGameKitHelper]playersDict];
    for(id key in players)
    {
        GKPlayer * gkPlayer = [players objectForKey:key];
        Player * player = Player::create();
        _gameContainer->addChild(player);
        
        player->setPlayerIndex(numPlayers);
        player->setPlayerName([gkPlayer alias].UTF8String);
        player->setPlayerId([gkPlayer playerID].UTF8String);
        _players.push_back(player);
        numPlayers++;
    }
}

void MainGame::distributeCardsData()
{
    //create json data and send to respective players
    
    int len = _dealer->getDeckSize();
    for (int index = 0; index < len; index++)
    {
        _players.at((index%numPlayers))->addCard(_dealer->getCard());
    }
    
    NSMutableDictionary *dict = [[NSMutableDictionary alloc]init];
    [dict setValue:[NSNumber numberWithInt:INIT_CARDS_DATA] forKey:@"api"];
    for (auto player : _players)
    {
        NSString * playerId = [NSString stringWithUTF8String:player->getPlayerId().c_str()];
        NSMutableArray * cards = [[NSMutableArray alloc]init];
        
        for (auto card : player->getCards())
        {
            std::string cardNumber = (card->getCardValue() + card->getCardType());
            [cards addObject:[NSString stringWithUTF8String:cardNumber.c_str()]];
        }
        
        [dict setValue:cards forKey:playerId];
    }
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    [[GameKitHelper sharedGameKitHelper]sendDataToAll:data];
    
    playDistributeCards();
}

void MainGame::playDistributeCards()
{
    for (auto player : _players)
    {
        int playerIndex = player->getPlayerIndex() + 1;
        
        std::ostringstream oss;
        oss << "refCardPos_player" << playerIndex;
        ui::ImageView * refPos = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
        
        Vec2 refPosition = refPos->getPosition();
        
        float delayTime = 0.0f;
        int runningZOrder = 0;
        
        for (auto card : player->getCards())
        {
            card->setAnchorPoint(refPos->getAnchorPoint());
            card->moveToPosition(refPosition, delayTime);
            card->setLocalZOrder(runningZOrder++);
            card->addTouchListeners(_listener);
            
            delayTime += 0.5f;
        }
    }
}

void MainGame::createDealer()
{
    _dealer = Dealer::create();
    _gameContainer->addChild(_dealer);
    
    _dealer->retain();
    _dealer->resetDeck();
    
    //if is host, generate cards and shuffle
    if (Network::isHost)
    {
        _dealer->shuffleDeck();
    }
}

bool MainGame::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
    Card* card = dynamic_cast<Card*>(event->getCurrentTarget());
    if (card != nullptr)
    {
        cocos2d::Point locationInNode = card->convertToNodeSpace(touch->getLocation());
        cocos2d::Size s = card->getContentSize();
        cocos2d::Rect rect = cocos2d::Rect(0, 0, s.width, s.height);
        
        if (rect.containsPoint(locationInNode))
        {
            _cardSelectionHandler->setActiveCard(card);
            CCLOG("%d onTouchBegan ",card->getLocalZOrder());
            event->stopPropagation();
            return true;
        }
    }
    return false;
}

void MainGame::onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void MainGame::onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event)
{
    Card* card = dynamic_cast<Card*>(event->getCurrentTarget());
    if (card != nullptr)
    {
        CCLOG("%d onTouchMoved ",card->getLocalZOrder());
    }
}

void MainGame::onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void MainGame::updateCardsData(rapidjson::Document &data)
{
    for (auto player : _players)
    {
        const rapidjson::Value& cards = data[player->getPlayerId().c_str()];
        
        int length = (int)cards.Size();
        for (int i = 0; i < length; i++)
        {
            std::string card = cards[i].GetString();
            player->addCard(_dealer->getCardWithValue(card));
        }
    }
    
    playDistributeCards();
}

void MainGame::onReceiveNetworkData(int type, rapidjson::Document &data)
{
    switch (type)
    {
        case INIT_CARDS_DATA:
        {
            updateCardsData(data);
        }
        break;
            
        default:
            break;
    }
}