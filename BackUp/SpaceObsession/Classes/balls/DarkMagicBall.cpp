//
//  DarkMagicBall.cpp
//  MazeDev
//
//  Created by Sillyatom on 26/11/14.
//
//

#include "DarkMagicBall.h"
#include "Bulb.h"

bool DarkMagicBall::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_DarkMagicBall;
    _bulbCanDieOnCollide = false;
    _ballName = "darkmagicball";
    return true;
}

void DarkMagicBall::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        case e_Bulb:
        {
            Bulb * bulb = (Bulb*)phySprite;
            bulb->setCanCount(true);
            bulb->setDynamicFlag(true);
            break;
        }
        default:
            break;
    }
    Ball::CollidesWith(object, phySprite, contact);
}