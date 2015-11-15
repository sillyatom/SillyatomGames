//
//  GravityBall.cpp
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#include "GravityBall.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool GravityBall::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_GravityBall;
    _ballName = "gravityball";
    _fallCount = 1;
    
    return true;
}

void GravityBall::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (_fallCount)
    {
        if (object == e_Bounds_Bottom)
        {
//            GameEvent event;
//            event.eventName = GameEvent::AddExtraBall;
//            event.x = GetCCBodyPositionX();
//            event.y = Utility::getDevicePositionY(REF_GAME_HEIGHT);
//            event.radius = getBoundingBox().size.width/2.f;
//            event.selectedball = "gravityball";
//            event.fallCount = --_fallCount;
//            event.velocity = Point(GetBody()->GetLinearVelocity().x, GetBody()->GetLinearVelocity().y);
            
//            _eventDispatcher->dispatchEvent(&event);
            
            setIsDead(true);
        }
        else
        {
            CCLOG(" [ Missing Condition : GravityBall Collides With fn ] ");
        }
    }
    Ball::CollidesWith(object, phySprite, contact);
}