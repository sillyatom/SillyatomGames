//
//  HudEnergyParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#include "HudEnergyParticle.h"
#include "../Constants.h"
#include "../lib/Utility.h"

bool HudEnergyParticle::initWithColor(Color4F startColor)
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setDuration(-1.0f);
    
    setLife(0.4f);
    setLifeVar(0.4f);
    
    setAngle(-5.f);
    setAngleVar(50.f);
    
    setEmissionRate(110.f);
    
    setSpeed(45.f);
    setSpeedVar(5.f);
    
    setGravity(Vec2(0, 400));
    
    Color4F endColor(1.0, 1.0, 1.0, 0.2);
    
    setStartColor(startColor);
    setEndColor(endColor);
    
    setBlendFunc(BlendFunc::ADDITIVE);
    
    setContentSize(Size(Utility::getDevicePositionX(BALL_RADIUS), Utility::getDevicePositionY(BALL_RADIUS)));
    
    setScale(0.5);
    
    return true;
}