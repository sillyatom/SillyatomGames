//
//  RectStoneBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 10/12/14.
//
//

#include "RectStoneBulb.h"

bool RectStoneBulb::init()
{
    if (!RectBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("rectstonebulb");
    _isProtected = true;
    return true;
}

void RectStoneBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (_isProtected && object == e_Player)
    {
        //_protectionCount--;
    }
    if (_protectionCount == 0)
    {
        setCanCount(true);
        setIsDead(true);
    }
    RectBulb::CollidesWith(object, phySprite, contact);
}

void RectStoneBulb::setIsDead(bool val)
{
    _isProtected = false;
    _protectionCount = 0;
    RotatingBulb::setIsDead(val);
}