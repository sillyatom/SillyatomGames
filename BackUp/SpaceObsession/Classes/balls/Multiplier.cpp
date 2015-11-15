//
//  Multiplier.cpp
//  MyCppGame
//
//  Created by Sillyatom on 24/12/14.
//
//

#include "Multiplier.h"

bool Multiplier::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_MultiplierBall;
    _ballName = "multiplier";
    _availableCount = 1;
    
    return true;
}

void Multiplier::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    //multiply the ball here
    
    if (_availableCount)
    {
        if  (object == e_Bulb)
        {
            GameEvent event;
            event.eventName = GameEvent::AddExtraHit;
            _eventDispatcher->dispatchEvent(&event);
        }
    }
    Ball::CollidesWith(object, phySprite, contact);
}