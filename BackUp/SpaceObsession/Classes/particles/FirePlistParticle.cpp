//
//  StarAnimBgParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 10/02/15.
//
//

#include "FirePlistParticle.h"

#include "Constants.h"
#include "../lib/Utility.h"

bool FirePlistParticle::init()
{
    return true;
}

void FirePlistParticle::initWithFile(std::string fileName)
{
	if (!ParticleFire::initWithFile(fileName))
	{
		return;
	}
}