//
//  Bumper.cpp
//  MyCppGame
//
//  Created by Sillyatom on 24/12/14.
//
//

#include "Bumper.h"
#include "../lib/Utility.h"

bool Bumper::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("bumper");
    
    return true;
}

void Bumper::addAnimation()
{
    cocos2d::Vector<FiniteTimeAction*> actions;
    float scale = getScaleX();
    
    {
        FiniteTimeAction * action = ScaleTo::create(0.1, scale * 0.75);
        actions.pushBack(action);
    }
    {
        FiniteTimeAction * action = ScaleTo::create(0.1, scale);
        actions.pushBack(action);
    }
    runAction(Sequence::create(actions));
}

void Bumper::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (phySprite->GetObjectId() == e_Player || phySprite->GetObjectId() == e_Bulb)
    {
        addAnimation();
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}