//
//  DarkParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 05/01/15.
//
//

#ifndef __MyCppGame__DarkParticle__
#define __MyCppGame__DarkParticle__

#include "cocos2d.h"

USING_NS_CC;

class DarkParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(DarkParticle);
    bool initWithColor(Color4F startColor, float angle, Vec2 gravity);
};

#endif /* defined(__MyCppGame__DarkParticle__) */
