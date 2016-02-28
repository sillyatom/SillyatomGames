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