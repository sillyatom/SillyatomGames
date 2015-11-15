//
//  BallsLeftDeducter.cpp
//  MazeDev
//
//  Created by Sillyatom on 05/12/14.
//
//

#include "BallsLeftDeducter.h"
bool BallsLeftDeducter::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("ballsleftdeducter");

    return true;
}

void BallsLeftDeducter::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}