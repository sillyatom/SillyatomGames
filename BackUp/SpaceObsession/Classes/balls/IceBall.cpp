//
//  IceBall.cpp
//  MazeDev
//
//  Created by Sillyatom on 13/11/14.
//
//

#include "IceBall.h"
#include "Bulb.h"

bool IceBall::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_IceBall;
    _protectionCount = 1;
    _canFreeze = true;
    _ballName = "iceball";
    return true;
}

void IceBall::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        case e_Bulb:
        {
            Bulb * bulb = (Bulb*)phySprite;
            if (_protectionCount)
            {
                if (!bulb->getIsProtected())
                {
                    bulb->createProtectionShield(_protectionCount);
                    _protectionCount--;
                }
            }
            else
            {
                bulb->setIsDead(true);
            }
            break;
        }
        default:
            break;
    }
    Ball::CollidesWith(object, phySprite, contact);
}