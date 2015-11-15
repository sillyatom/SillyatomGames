//
//  PlatformParticles.cpp
//  MyCppGame
//
//  Created by Sillyatom on 03/02/15.
//
//

#include "PlatformParticles.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool PlatformParticles::initWithSize(float width, float height)
{
    if (!ParticleSystemQuad::initWithFile("plist/platformParticle.plist"))
    {
        return false;
    }
    setPosVar(Vec2(width, height));
    return true;
}