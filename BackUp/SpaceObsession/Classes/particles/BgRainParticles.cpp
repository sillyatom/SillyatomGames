//
//  BgRainParticles.cpp
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#include "BgRainParticles.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool BgRainParticles::init()
{
    if (!ParticleRain::init())
    {
        return false;
    }
    
    setDuration(-1.0f);
    setLife(2.0);
    
    setAngle(-122.0);
    setAngleVar(4);
    
    setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH), Utility::getDevicePositionY(REF_GAME_HEIGHT)));
    
    setStartSize(Utility::getDevicePositionY(2.0));
    
    setEmissionRate(60.0);
    
    setSpeed(50.f);
    
    setGravity(Vec2(0, 40));
    
    setContentSize(Size(Utility::getDevicePositionX(REF_GAME_WIDTH), Utility::getDevicePositionY(REF_GAME_HEIGHT)));
    
    return true;
}
