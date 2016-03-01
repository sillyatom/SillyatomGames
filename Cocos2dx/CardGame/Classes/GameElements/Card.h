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

    Vec2 _startPosition;
    
    void addBackFace();

protected:
    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);

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
    
    void moveToPosition(Vec2 position, float delayTime = 0.0f);
    Vec2 getStartPosition() { return _startPosition; }
	std::string getCardType() { return _cardType; }
	std::string getCardValue() { return _cardValue; }
	std::string getAssetName() { return _assetName; }
};
#endif // !_CARD_H_
