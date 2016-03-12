#include "Card.h"
#include "../Constants/GameConstants.h"

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
	backFace = Sprite::create();
	backFace->initWithSpriteFrameName("back.png");
	backFace->setAnchorPoint(Vec2(0.0f, 0.0f));
	addChild(backFace);
}

void Card::showFrontFace()
{
    backFace->setVisible(false);
}

void Card::moveToPosition(cocos2d::Vec2 position, float delayTime, CallFunc * callback)
{
    FiniteTimeAction * delay = DelayTime::create(delayTime);
    FiniteTimeAction * move = MoveTo::create(GameConstants::DEAL_ANIM_TIME, position);
    runAction(Sequence::create(delay, move, callback, NULL));
}

void Card::moveByPosition(cocos2d::Vec2 position, float delayTime, CallFunc * callback)
{
    FiniteTimeAction * delay = DelayTime::create(delayTime);
    FiniteTimeAction * move = MoveBy::create(GameConstants::DEAL_ANIM_TIME, position);
    runAction(Sequence::create(delay, move, callback, NULL));
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
