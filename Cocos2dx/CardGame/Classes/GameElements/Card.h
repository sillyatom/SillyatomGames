#pragma once
#ifndef _CARD_H_
#define _CARD_H_
#include "cocos2d.h"
#include "ExtSprite.h"

class Card : public ExtSprite
{
private:
	std::string _cardType;
	std::string _cardValue;
	std::string _assetName;
	Sprite * backFace;

	void addBackFace();
public:
	CREATE_FUNC(Card);
	virtual bool init();
	void initData(std::string val, std::string type)
	{
		_cardType = type;
		_cardValue = val;
		_assetName = val + "-"+type+".png";
		addBackFace();
	}

	std::string getCardType() { return _cardType; }
	std::string getCardValue() { return _cardValue; }
	std::string getAssetName() { return _assetName; }
};
#endif // !_CARD_H_
