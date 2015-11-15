//
//  FlyingText.cpp
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#include "FlyingText.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool FlyingText::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    return true;
}

void FlyingText::startAnim(std::string text, CallFunc * func1)
{
    auto _text = Label::createWithBMFont("fonts/font.fnt", text);
    _text->setScale(0.5f);
    addChild(_text);
    
    cocos2d::Vector<FiniteTimeAction*> _actions;
    
    FiniteTimeAction * moveUp = MoveBy::create(0.5, Vec2(0.0, Utility::getDevicePositionY(20.0)));
    _actions.pushBack(moveUp);
    
    FiniteTimeAction * alpha = FadeOut::create(0.5);
    _actions.pushBack(alpha);
	if (func1)
	{
		_actions.pushBack(func1);
	}
    _actions.pushBack(CallFunc::create(CC_CALLBACK_0(FlyingText::clear, this)));
    runAction(Sequence::create(_actions));
}

void FlyingText::clear()
{
    if (getParent())
    {
        getParent()->removeChild(this);
    }
}