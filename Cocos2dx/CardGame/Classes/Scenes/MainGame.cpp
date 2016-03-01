#include "MainGame.h"
#include "../Constants/GameConstants.h"
#include "../Config/CardConfig.h"

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

    numPlayers = 4;
    _cardSelectionHandler = CardSelectionHandler::getInstance();
    
    updateCardConfigFromCSB();
    
    createDealer();
    createPlayers();
    
    hideWidgets();
    addTouchListeners();
    
    startGameCountDownTimer();

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

void MainGame::startGame(float dt)
{
    distributeCards();
}

void MainGame::startGameCountDownTimer()
{
    scheduleOnce(schedule_selector(MainGame::startGame), 1.0f);
}

void MainGame::createPlayers()
{
    for (int index = 0; index < numPlayers; index++)
    {
        Player * player = Player::create();
        _gameContainer->addChild(player);
        player->setPlayerIndex(index);
        _players.push_back(player);
    }
}

void MainGame::distributeCards()
{
    int len = _dealer->getDeckSize();
    for (int index = 0; index < len; index++)
    {
        _players.at((index%numPlayers))->addCard(_dealer->getCard());
    }
    
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
            if (playerIndex == 1 || playerIndex == 4)
            {
                refPosition.x += GameConstants::SPACE_BETWEEN_CARDS;
            }
            else
            {
                refPosition.x -= GameConstants::SPACE_BETWEEN_CARDS;
            }
            delayTime += 0.1f;
        }
    }
}

void MainGame::createDealer()
{
    _dealer = Dealer::create();
    _gameContainer->addChild(_dealer);
    
    _dealer->retain();
    _dealer->resetDeck();
    _dealer->shuffleDeck();
}

bool MainGame::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
    Card* card = dynamic_cast<Card*>(event->getCurrentTarget());
    if (card != nullptr)
    {
        Point locationInNode = card->convertToNodeSpace(touch->getLocation());
        Size s = card->getContentSize();
        Rect rect = Rect(0, 0, s.width, s.height);
        
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

//void MainGame::testFn()
//{
//	std::vector<std::string> types = {"D","S", "H", "C"};
//	float delAngle = (180.0) / (types.size() * (GameConstants::CARD_VALUE_END - GameConstants::CARD_VALUE_START));
//	float angle = 180.0f;
//
//	Vec2 rotationCenter;
//	rotationCenter.x = Director::getInstance()->getVisibleSize().width / 2.0f;
//	rotationCenter.y = Director::getInstance()->getVisibleSize().height / 2.0f;
//
//	for (int i = 0; i < types.size(); i++)
//	{
//		for (int j = GameConstants::CARD_VALUE_START; j < GameConstants::CARD_VALUE_END; j++)
//		{
//			Card * card = Card::create();
//			card->initData(GameConstants::CARD_VALUES[j], types[i]);
//			card->initWithSpriteFrameName(card->getAssetName());
//			addChild(card);
//            card->setScale(CardConfig::CARD_WIDTH / card->getContentSize().width, CardConfig::CARD_HEIGHT / card->getContentSize().height);
//			_cards.push_back(card);
//		
//			float radians = -CC_DEGREES_TO_RADIANS(angle);
//			float x = rotationCenter.x + (150.0f * cos(radians));
//			float y = rotationCenter.y + (150.0f * sin(radians));
//			card->setPosition(x, y);
//			card->setRotation(radians);
//			angle += delAngle;
//		}
//	}
//}