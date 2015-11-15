//
//  ExplodeParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 01/02/15.
//
//

#ifndef __MyCppGame__ExplodeParticle__
#define __MyCppGame__ExplodeParticle__

#include "cocos2d.h"

USING_NS_CC;

class ExplodeParticle : public ParticleExplosion
{
public:
    CREATE_FUNC(ExplodeParticle);
    bool initWithPosition(float x, float y);
};

#endif /* defined(__MyCppGame__ExplodeParticle__) */
