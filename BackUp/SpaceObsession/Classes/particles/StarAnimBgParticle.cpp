//
//  StarAnimBgParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 10/02/15.
//
//

#include "StarAnimBgParticle.h"

#include "Constants.h"
#include "../lib/Utility.h"

bool StarAnimBgParticle::init()
{
    if (!ParticleGalaxy::initWithFile("plist/starBgAnim.plist"))
    {
        return false;
    }
    
    setPosition(0, 0);
    
    setLife(4);
    setLifeVar(2);
    
    setStartSize(Utility::getDevicePositionY(20));
    setStartSizeVar(Utility::getDevicePositionY(5));
    
    setEndSize(Utility::getDevicePositionY(30));
    setEndSizeVar(Utility::getDevicePositionY(5));
    
    setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH / 2.0), Utility::getDevicePositionY(REF_GAME_HEIGHT / 2.0)));
    
    return true;
}