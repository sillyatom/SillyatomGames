//
//  RedBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#include "RedBulb.h"

bool RedBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("redbulb");
    return true;
}

void RedBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        case e_Bulb:
        {
            Bulb * bulb = (Bulb*)phySprite;
            bulb->setCanCount(false);
            bulb->setIsDead(true);
        }
        break;
            
        default:
            break;
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}