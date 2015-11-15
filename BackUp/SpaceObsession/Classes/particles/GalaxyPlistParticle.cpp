//
//  GalaxyPlistParticle.cpp
//  VoidShot
//
//  Created by Sillyatom on 30/04/15.
//
//

#include "GalaxyPlistParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool GalaxyPlistParticle::init()
{
    if (!initWithFileName("plist/trailParticle2.plist"))
    {
        return true;
    }
    return true;
}

bool GalaxyPlistParticle::initWithFileName(std::string fileName)
{
    if (!ParticleGalaxy::initWithFile(fileName))
    {
        return false;
    }
    return true;
}