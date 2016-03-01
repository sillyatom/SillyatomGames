#pragma once
#ifndef _EXT_SPRITE_H_
#define _EXT_SPRITE_H_

#include "cocos2d.h"

USING_NS_CC;

class ExtSprite : public Sprite
{
protected:
    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);

public:
	CREATE_FUNC(ExtSprite);
	virtual bool init();
    void addTouchListeners(EventListenerTouchOneByOne * listener);
};
#endif // !_EXT_SPRITE_H_
