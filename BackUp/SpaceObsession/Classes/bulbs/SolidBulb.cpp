//
//  SolidBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 08/04/15.
//
//

#include "SolidBulb.h"

bool SolidBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("solidbulb");
    _isProtected = true;
    
    return true;
}

void SolidBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void SolidBulb::setIsDead(bool val)
{
    _isProtected = false;
    _protectionCount = 0;
    RotatingBulb::setIsDead(val);
}
