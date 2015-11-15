//
//  FireShowerAnim.cpp
//  MyCppGame
//
//  Created by Sillyatom on 10/01/15.
//
//

#include "FireShowerAnim.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool FireShowerAnim::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    img = Sprite::create("misc/fireshower.png");
    addChild(img);
    img->setAnchorPoint(Vec2(0.5, 0.5));
    setPosition(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH)/2.0, Utility::getDevicePositionY(REF_GAME_HEIGHT)/2.0));
    
    cocos2d::Node::setScale(0.0);
    return true;
}

void FireShowerAnim::startAnim(CallFunc * func1, CallFunc * func2)
{
    cocos2d::Vector<FiniteTimeAction*> _actions;
    
    FiniteTimeAction * scaleUp = ScaleTo::create(0.25f, 1.0f);
    _actions.pushBack(scaleUp);
    
    DelayTime * delay = DelayTime::create(1.0);
    _actions.pushBack(delay);
    
    FiniteTimeAction * scaleDown = ScaleTo::create(0.25f, 0.0);
    _actions.pushBack(scaleDown);
    
    _actions.pushBack(func1);
    
    _actions.pushBack(func2);
    
    runAction(Sequence::create(_actions));
}