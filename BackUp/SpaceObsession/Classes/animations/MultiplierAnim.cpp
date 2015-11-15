//
//  MultiplierAnim.cpp
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#include "MultiplierAnim.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool MultiplierAnim::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    return true;
}

void MultiplierAnim::startAnim(std::string text, CallFunc * func1)
{
    auto _text = Label::createWithBMFont("fonts/font.fnt", text);
    _text->setScale(0.75f);
    addChild(_text);
    
    cocos2d::Vector<FiniteTimeAction*> _actions;
    
    FiniteTimeAction * moveTo = MoveBy::create(0.5, Vec2(0, Utility::getDevicePositionY(20.0)));
    _actions.pushBack(moveTo);
    
    FiniteTimeAction * alpha = FadeOut::create(0.5);
    _actions.pushBack(alpha);
    _actions.pushBack(func1);
    _actions.pushBack(CallFunc::create(CC_CALLBACK_0(MultiplierAnim::clear, this)));
    runAction(Sequence::create(_actions));
}

void MultiplierAnim::clear()
{
    if (getParent())
    {
        getParent()->removeChild(this);
    }
}