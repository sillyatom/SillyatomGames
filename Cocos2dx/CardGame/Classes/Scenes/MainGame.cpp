#include "MainGame.h"
#include "../Constants/GameConstants.h"

Scene * MainGame::createScene()
{
	auto scene = Scene::create();
	auto layer = MainGame::create();
	scene->addChild(layer);
	return scene;
}

bool MainGame::init()
{
	if (!Layer::init())
	{
		return false;
	}

    auto rootNode = CSLoader::createNode("MainGame.csb");
	addChild(rootNode);

	_dealer = Dealer::create();
	addChild(_dealer);
	_dealer->retain();
	_dealer->resetDeck();
	_dealer->shuffleDeck();

	return true;
}

void MainGame::testFn()
{
	std::vector<std::string> types = {"D","S", "H", "C"};
	float delAngle = (180.0) / (types.size() * (GameConstants::CARD_VALUE_END - GameConstants::CARD_VALUE_START));
	float angle = 180.0f;

	Vec2 rotationCenter;
	rotationCenter.x = Director::getInstance()->getVisibleSize().width / 2.0f;
	rotationCenter.y = Director::getInstance()->getVisibleSize().height / 2.0f;

	for (int i = 0; i < types.size(); i++)
	{
		for (int j = GameConstants::CARD_VALUE_START; j < GameConstants::CARD_VALUE_END; j++)
		{
			Card * card = Card::create();
			card->initData(GameConstants::CARD_VALUES[j], types[i]);
			card->initWithSpriteFrameName(card->getAssetName());
			addChild(card);
			_cards.push_back(card);
		
			float radians = -CC_DEGREES_TO_RADIANS(angle);
			float x = rotationCenter.x + (150.0f * cos(radians));
			float y = rotationCenter.y + (150.0f * sin(radians));
			card->setPosition(x, y);
			card->setRotation(radians);
			angle += delAngle;
		}
	}
}