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
    FiniteTimeAction * delay = DelayTime::create(delayTime);
    FiniteTimeAction * move = MoveTo::create(1.0f, position);
    
    runAction(Sequence::create(delay, move, NULL));
}