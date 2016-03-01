#include "ExtSprite.h"

bool ExtSprite::init()
{
	if (!Sprite::init())
	{
		return false;
	}

	return true;
}

void ExtSprite::addTouchListeners(EventListenerTouchOneByOne * listener)
{
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener->clone(), this);
}

bool ExtSprite::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
    return false;
}

void ExtSprite::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
    
}

void ExtSprite::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *event)
{
    
}

void ExtSprite::onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *event)
{
    
}