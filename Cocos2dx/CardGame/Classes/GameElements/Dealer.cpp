#include "Dealer.h"
#include "GameConstants.h"
#include <iostream>
#include <algorithm>
#include <random>

bool Dealer::init()
{
	if (!ExtSprite::init())
	{
		return false;
	}

	return true;
}

void Dealer::initDeck()
{
	for (int i = 0; i < GameConstants::CARD_TYPES.size(); i++)
	{
		for (int j = GameConstants::CARD_VALUE_START; j < GameConstants::CARD_VALUE_END; j++)
		{
			Card * card = Card::create();
			card->initData(GameConstants::CARD_VALUES[j], GameConstants::CARD_TYPES[i]);
			card->initWithSpriteFrameName(card->getAssetName());
			getParent()->addChild(card);
			Size size = Director::getInstance()->getVisibleSize();
			card->setPosition(size.width/2, size.height/2);
			_deck.push_back(card);
		}
	}
}

void Dealer::resetDeck()
{
	initDeck();
}

void Dealer::shuffleDeck()
{
	auto engine = std::default_random_engine{};
	for (int i = 0; i < GameConstants::CARD_TYPES.size()*GameConstants::CARD_VALUES.size(); i++)
	{
		std::shuffle(std::begin(_deck), std::end(_deck), engine);
	}
	for (std::vector<Card*>::iterator iter = _deck.begin(); iter != _deck.end(); iter++)
	{
		CCLOG(" val : %s type : %s ", (*iter)->getCardValue().c_str(), (*iter)->getCardType().c_str());
	}
}