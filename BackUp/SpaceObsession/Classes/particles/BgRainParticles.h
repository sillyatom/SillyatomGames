//
//  BgRainParticles.h
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#ifndef __MyCppGame__BgRainParticles__
#define __MyCppGame__BgRainParticles__

#include "cocos2d.h"

USING_NS_CC;

class BgRainParticles : public ParticleRain
{
public:
    CREATE_FUNC(BgRainParticles);
    virtual bool init();
};


#endif /* defined(__MyCppGame__BgRainParticles__) */
