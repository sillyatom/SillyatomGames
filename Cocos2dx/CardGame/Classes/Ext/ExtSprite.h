#pragma once
#ifndef _EXT_SPRITE_H_
#define _EXT_SPRITE_H_

#include "cocos2d.h"

USING_NS_CC;

class ExtSprite : public Sprite
{
public:
	CREATE_FUNC(ExtSprite);
	virtual bool init();

};
#endif // !_EXT_SPRITE_H_
