//
//  BallParticle.cpp
//  MazeDev
//
//  Created by Sillyatom on 08/12/14.
//
//

#include "BallParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool BallParticle::init()
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setDuration(5.0f);
    setLife(0.01f);
    setEmissionRate(200.0f);
    setAngle(0);
    setSpeed(0.f);
    setGravity(Vec2(0.0f, 1.0f));
    
    const Color4F startColor(0.0, 1.0, 1.0, 0.3);
    const Color4F endColor(1.0, 1.0, 1.0, 0.0);
    
    setStartColor(startColor);
    setEndColor(endColor);
    
    setContentSize(Size(Utility::getDevicePositionY(BALL_RADIUS*2.f), Utility::getDevicePositionY(BALL_RADIUS*2.f)));
    
    setAutoRemoveOnFinish(true);
    
    return true;
}
