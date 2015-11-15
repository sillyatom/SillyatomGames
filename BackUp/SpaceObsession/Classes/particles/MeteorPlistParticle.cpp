//
//  MeteorPlistParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 05/04/15.
//
//

#include "MeteorPlistParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool MeteorPlistParticle::init()
{
    return true;
}

void MeteorPlistParticle::initWithFile(std::string fileName)
{
    if (!ParticleMeteor::initWithFile(fileName))
    {
        return;
    }
}