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
    std::string _value;
	std::string _assetName;
    
	Sprite * backFace;

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
        _value = _cardValue + _cardType;
		_assetName = val + "-"+type+".png";
		addBackFace();
	}
    void onMoveComplete(Card* card);
    void moveToPosition(Vec2 position, float delayTime = 0.0f, CallFunc * callback = NULL);
    void moveByPosition(Vec2 position, float delayTime = 0.0f, CallFunc * callback = NULL);
    
	std::string getCardType() { return _cardType; }
	std::string getCardValue() { return _cardValue; }
	
    std::string getAssetName() { return _assetName; }
    
    std::string getValue(){ return _value; }
    
    void showFrontFace();
};
#endif // !_CARD_H_
