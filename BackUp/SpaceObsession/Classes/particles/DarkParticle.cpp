//
//  DarkParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 05/01/15.
//
//

#include "DarkParticle.h"
#include "../Constants.h"
#include "../lib/Utility.h"

bool DarkParticle::initWithColor(Color4F startColor, float angle, Vec2 gravity)
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setDuration(-1.0f);
    setLife(0.5f * (gravity.length()/150.0));
    setEmissionRate(100.0f * Utility::getDevicePositionY(0.5));
    setAngle(angle);
    setSpeed(0.f);
    setGravity(gravity);
    //setNormalizedPosition(gravity);
    setStartSize(15.0);
    setEndSize(15.0);
    const Color4F endColor(1.0, 1.0, 1.0, 0.4);
    
    setStartColor(startColor);
    setEndColor(endColor);
    setBlendFunc(BlendFunc::ADDITIVE);
    setPosVar(Vec2(1, -1));
    //setContentSize(Size(Utility::getDevicePositionX(BALL_RADIUS), Utility::getDevicePositionY(BALL_RADIUS)));
    
    return true;
}