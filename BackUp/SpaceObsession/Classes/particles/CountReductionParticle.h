//
//  CountReductionParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#ifndef __MyCppGame__CountReductionParticle__
#define __MyCppGame__CountReductionParticle__

#include "cocos2d.h"

USING_NS_CC;

class CountReductionParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(CountReductionParticle);
    bool initWithColor(Color4F startColor, float duration);
};

#endif /* defined(__MyCppGame__CountReductionParticle__) */
