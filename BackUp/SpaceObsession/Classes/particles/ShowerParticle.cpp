//
//  ShowerParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 30/12/14.
//
//

#include "ShowerParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool ShowerParticle::init()
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setDuration(-1.0f);
    
    setLife(0.3f);
    setLifeVar(0.1f);
    
    setEmissionRate(Utility::getDevicePositionY(50.f));
    
    setSpeed(Utility::getDevicePositionY(45.f));
    setSpeedVar(Utility::getDevicePositionY(5.f));
    
    setGravity(Vec2(0, Utility::getDevicePositionY(200)));
    
    const Color4F startColor(1.0, 0.5, 0.0, 1.0);
    Color4F endColor(startColor.r, startColor.g, startColor.b, 0.0);
    
    setStartColor(startColor);
    setEndColor(endColor);
    
    setBlendFunc(BlendFunc::ADDITIVE);
    
    setContentSize(Size(Utility::getDevicePositionY(BALL_RADIUS*2.f), Utility::getDevicePositionY(BALL_RADIUS*2.f)));
    
    return true;
}