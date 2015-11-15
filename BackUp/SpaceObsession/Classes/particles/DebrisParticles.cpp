//
//  DebrisParticles.cpp
//  MyCppGame
//
//  Created by Sillyatom on 30/12/14.
//
//

#include "DebrisParticles.h"
#include "../lib/Utility.h"

bool DebrisParticles::init()
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setAnchorPoint(Vec2(0.5, 0.5));
    setDuration(-1.0f);
    setLife(1.1);
    setEmissionRate(150.f);
    setSpeed(0.f);
    setGravity(Vec2(0, -10));
    
    return true;
}