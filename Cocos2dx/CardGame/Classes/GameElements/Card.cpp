#include "Card.h"

bool Card::init()
{
	if (!ExtSprite::init())
	{
		return false;
	}

	return true;
}

void Card::addBackFace()
{
	Sprite * back = Sprite::create();
	back->initWithSpriteFrameName("back.png");
	back->setAnchorPoint(Vec2(0.0f, 0.0f));
	addChild(back);
}

void Card::moveToPosition(cocos2d::Vec2 position, float delayTime)
{
    _startPosition = position;
    
    FiniteTimeAction * delay = DelayTime::create(delayTime);
    FiniteTimeAction * move = MoveTo::create(1.0f, position);
    
    runAction(Sequence::create(delay, move, NULL));
}

bool Card::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
    return false;
}

void Card::onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void Card::onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void Card::onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}
