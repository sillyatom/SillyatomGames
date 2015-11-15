//
//  BulbParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 29/12/14.
//
//

#include "BulbParticle.h"
#include "../Constants.h"
#include "../lib/Utility.h"

bool BulbParticle::initWithColor(Color4F startColor)
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    _currentEmissionRate = 110.0f;
    
    setDuration(-1.0f);

    setLife(0.4f);
    setLifeVar(0.4f);
    
    setAngle(-5.f);
    setAngleVar(50.f);
    
    setEmissionRate(_currentEmissionRate);

    setSpeed(45.f);
    setSpeedVar(5.f);
    
    setGravity(Vec2(0, 400));
    
    Color4F endColor(startColor.r, startColor.g, startColor.b, 0.2);

    setStartColor(startColor);
    setEndColor(endColor);

    setBlendFunc(BlendFunc::ADDITIVE);
    
    setContentSize(Size(Utility::getDevicePositionX(BALL_RADIUS), Utility::getDevicePositionY(BALL_RADIUS)));
    
    setScale(0.25 * Utility::getDevicePositionX(1.0));
    
    return true;
}

void BulbParticle::resetEmissionRate()
{
    _currentEmissionRate = 110.0f;
    setEmissionRate(_currentEmissionRate);
}