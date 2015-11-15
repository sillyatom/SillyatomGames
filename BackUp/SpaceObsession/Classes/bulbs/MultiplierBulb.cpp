//
//  MultiplierBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#include "MultiplierBulb.h"
#include "../balls/Ball.h"

bool MultiplierBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("multiplierbulb");
    
    return true;
}

void MultiplierBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (object == e_Player)
    {
        GameEvent event;
        event.eventName = GameEvent::AddExtraHit;
        _eventDispatcher->dispatchEvent(&event);
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}