//
//  GreenBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#include "DeadBulb.h"

bool DeadBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("deadbulb");
    
    return true;
}

void DeadBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}