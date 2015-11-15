//
//  FireRectParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#include "FireRectParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool FireRectParticle::initWithPosition(float x, float y)
{
    if (!ParticleFire::initWithFile("plist/fireFloor.plist"))
    {
        return false;
    }
    
    setPosition(x, y);
    return true;
}
