//
//  ExplodeParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 01/02/15.
//
//

#include "ExplodeParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool ExplodeParticle::initWithPosition(float x, float y)
{
    if (!ParticleExplosion::initWithFile("plist/bulbExplode.plist"))
    {
        return false;
    }
    setScale(0.6);
    setPosition(x, y);
    setDuration(0.05);
    setLife(0.1);
    setAutoRemoveOnFinish(true);
    return true;
}