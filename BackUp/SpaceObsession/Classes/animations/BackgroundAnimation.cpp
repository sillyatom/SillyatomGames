//
//  BgFlyingObjects.cpp
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#include "BackgroundAnimation.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool BackgroundAnimation::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
//    img = Sprite::create("misc/fireshower.png");
//    addChild(img);
//    img->setAnchorPoint(Vec2(0.5, 0.5));
//    setPosition(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH)/2.0, Utility::getDevicePositionY(REF_GAME_HEIGHT)/2.0));
//    
//    cocos2d::Node::setScale(0.0);
    return true;
}

void BackgroundAnimation::startAnim(CallFunc * func1, CallFunc * func2)
{
//    cocos2d::Vector<FiniteTimeAction*> _actions;
//    
//    int width = Utility::getDevicePositionX(REF_GAME_WIDTH);
//    unsigned int randomNum = rand() % 1000 + REF_GAME_WIDTH;
//    {
//        srand(randomNum++);
//    }
//    float x = rand() % width;
//    float y = Utility::getDevicePositionY(REF_GAME_HEIGHT - 10);
//    
//    float destX = -Utility::getDevicePositionX(50.0);
//    float destY = y - Utility::getDevicePositionY(50.0);
//    
//    
//    _actions.pushBack(func1);
//    
//    _actions.pushBack(func2);
//    
//    runAction(Sequence::create(_actions));
}

void BackgroundAnimation::clear()
{
    if (getParent())
    {
        getParent()->removeChild(this);
    }
}