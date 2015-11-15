//
//  CountReductionParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#include "CountReductionParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool CountReductionParticle::initWithColor(Color4F startColor, float duration)
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setDuration(duration);
    
    setLife(0.2f);
    setLifeVar(0.1f);
    
    setAngle(-5.f);
    setAngleVar(50.f);
    
    setEmissionRate(150.f);
    
    setSpeed(-45.f);
    setSpeedVar(5.f);
    
    setGravity(Vec2(0, -200));
    
    Color4F endColor(startColor.r/2.f, startColor.g/2.f, startColor.b/2.f, 0.0);
    
    setStartColor(startColor);
    setEndColor(endColor);
    
    setBlendFunc(BlendFunc::ADDITIVE);
    
    //setContentSize(Size(Utility::getDevicePositionY(BALL_RADIUS*2.f), Utility::getDevicePositionY(BALL_RADIUS*2.f)));
    
    setAnchorPoint(Vec2(0.5, 0.5));

    setAutoRemoveOnFinish(true);
    return true;
}