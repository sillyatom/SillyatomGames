#include "Dealer.h"
#include "GameConstants.h"
#include <iostream>
#include <algorithm>
#include <random>
#include "../Config/CardConfig.h"

bool Dealer::init()
{
	if (!ExtSprite::init())
	{
		return false;
	}
    _lastMatchStartIndex = -1;
	return true;
}

void Dealer::initDeck(Sprite * container)
{
	for (int i = 0; i < GameConstants::CARD_TYPES.size(); i++)
	{
		for (int j = GameConstants::CARD_VALUE_START; j < GameConstants::CARD_VALUE_END; j++)
		{
			Card * card = Card::create();
			card->initData(GameConstants::CARD_VALUES[j], GameConstants::CARD_TYPES[i]);
			card->initWithSpriteFrameName(card->getAssetName());
			container->addChild(card);
            card->setScale(CardConfig::CARD_WIDTH / card->getContentSize().width, CardConfig::CARD_HEIGHT / card->getContentSize().height);
			Size size = Director::getInstance()->getVisibleSize();
			card->setPosition(size.width/2, size.height/2);
			_deck.push_back(card);
		}
	}
}

Card * Dealer::removeCardWithValue(std::string val)
{
    Card * retCard = nullptr;
    for (std::vector<Card*>::iterator iter = _deck.begin(); iter != _deck.end();)
    {
      if ((*iter)->getValue() == val)
      {
          retCard = (*iter);
          _deck.erase(iter);
          break;
      }
        iter++;
    }
    return retCard;
}

std::vector<Card *>::iterator Dealer::removeCardAt(std::vector<Card *>::iterator iter)
{
    return _deck.erase(iter);
}

Card * Dealer::removeCard()
{
    Card * card = nullptr;
    if (_deck.size() > 0)
    {
        card = _deck.back();
        _deck.pop_back();
    }
    return card;
}

void Dealer::shuffleDeck()
{
	auto engine = std::default_random_engine{};
	for (int i = 0; i < GameConstants::CARD_TYPES.size()*GameConstants::CARD_VALUES.size(); i++)
	{
		std::shuffle(std::begin(_deck), std::end(_deck), engine);
	}
}

void Dealer::dealCard(Card *card, CallFunc * callback)
{
    int runningIndex = 0;
    for (auto card : _deck)
    {
        Vec2 newPos = _deckStartPos;
        newPos.x += ((_deck.size() - runningIndex) * -card->getBoundingBox().size.width * 0.4f);
        card->moveToPosition(newPos, 0.0f);
        card->setLocalZOrder(runningIndex++);
    }
    
    _deck.push_back(card);
    
    card->setLocalZOrder(runningIndex++);
    card->showFrontFace();

    if (callback == NULL)
    {
        card->moveToPosition(_deckStartPos, 0.0f, CallFunc::create(CC_CALLBACK_0(Dealer::onDealAnimationComplete, this)));
    }
    else
    {
        card->moveToPosition(_deckStartPos, 0.0f, callback);
    }
}

void Dealer::onDealAnimationComplete()
{
    onDealCard(_deck.back());
}

bool Dealer::hasMatch()
{
    if (_deck.size() > 0)
    {
        Card * lastDealt = _deck.back();
        for (auto card : _deck)
        {
            if (card != lastDealt)
            {
                if (card->getCardValue() == lastDealt->getCardValue())
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int Dealer::getMatchingIndex()
{
    int index = 0;
    if (_deck.size() > 0)
    {
        Card * lastDealt = _deck.back();
        for (std::vector<Card*>::iterator iter = _deck.begin(); iter != _deck.end(); iter++)
        {
            Card * card = (*iter);
            
            if (card != lastDealt)
            {
                if (card->getCardValue() == lastDealt->getCardValue())
                {
                    return index;
                }
            }
            index++;
        }
    }
    return -1;
}

std::vector<Card*> Dealer::getMatchedData()
{
    std::vector<Card*> matches;
    int matchingIndex = getMatchingIndex();
    std::vector<Card*>::iterator iter = _deck.begin() + matchingIndex;
    while(iter != _deck.end())
    {
        Card* card = (*iter);
        matches.push_back(card);
        iter++;
    }

    return matches;
}

std::vector<Card*> Dealer::removeMatches()
{
    std::vector<Card*> matches;
    if (hasMatch())
    {
        _lastMatchStartIndex = getMatchingIndex();
        std::vector<Card*>::iterator iter = _deck.begin() + _lastMatchStartIndex;
        while(iter != _deck.end())
        {
            Card* card = (*iter);
            matches.push_back(card);
            iter = removeCardAt(iter);
        }
    }
    else
    {
        _lastMatchStartIndex = -1;
    }
    return matches;
}

std::vector<Card*> Dealer::removeMatchesFromIndex(int index)
{
    CC_ASSERT((index >= 0));
    std::vector<Card*> matches;
    std::vector<Card*>::iterator iter = _deck.begin() + index;
    while(iter != _deck.end())
    {
        Card* card = (*iter);
        matches.push_back(card);
        iter = removeCardAt(iter);
    }
    return matches;
}
