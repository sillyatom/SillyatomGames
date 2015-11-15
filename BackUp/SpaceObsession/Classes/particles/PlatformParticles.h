//
//  PlatformParticles.h
//  MyCppGame
//
//  Created by Sillyatom on 03/02/15.
//
//

#ifndef __MyCppGame__PlatformParticles__
#define __MyCppGame__PlatformParticles__

#include "cocos2d.h"

USING_NS_CC;

class PlatformParticles : public ParticleMeteor
{
public:
    CREATE_FUNC(PlatformParticles);
    bool initWithSize(float width, float height);
};

#endif /* defined(__MyCppGame__PlatformParticles__) */
