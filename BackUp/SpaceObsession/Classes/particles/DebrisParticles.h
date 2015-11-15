//
//  DebrisParticles.h
//  MyCppGame
//
//  Created by Sillyatom on 30/12/14.
//
//

#ifndef __MyCppGame__DebrisParticles__
#define __MyCppGame__DebrisParticles__

#include "cocos2d.h"

USING_NS_CC;

class DebrisParticles : public ParticleMeteor
{
public:
    CREATE_FUNC(DebrisParticles);
    virtual bool init();
};


#endif /* defined(__MyCppGame__DebrisParticles__) */
