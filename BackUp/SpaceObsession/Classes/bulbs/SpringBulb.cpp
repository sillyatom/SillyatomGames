//
//  SpringBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 29/01/15.
//
//

#include "SpringBulb.h"

bool SpringBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("springbulb");
    
    return true;
}

void SpringBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (object == e_Player)
    {
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void SpringBulb::CreateBody( float x, float y, float radius)
{
    _y = y/PTM_RATIO;
    _x = x/PTM_RATIO;
    
    RotatingBulb::CreateBody(x, y, radius);
}

void SpringBulb::setIsDead(bool val)
{
    _isProtected = false;
    _protectionCount = 0;
    RotatingBulb::setIsDead(val);
}
