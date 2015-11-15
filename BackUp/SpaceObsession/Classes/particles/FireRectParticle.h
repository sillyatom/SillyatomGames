//
//  FireRectParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#ifndef __MyCppGame__FireRectParticle__
#define __MyCppGame__FireRectParticle__

#include "cocos2d.h"

USING_NS_CC;

class FireRectParticle : public ParticleFire
{
public:
    CREATE_FUNC(FireRectParticle);
    bool initWithPosition(float x, float y);
};

#endif /* defined(__MyCppGame__FireRectParticle__) */
