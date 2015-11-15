//
//  ShowerParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 30/12/14.
//
//

#ifndef __MyCppGame__ShowerParticle__
#define __MyCppGame__ShowerParticle__

#include "cocos2d.h"

USING_NS_CC;

class ShowerParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(ShowerParticle);
    virtual bool init();
};

#endif /* defined(__MyCppGame__ShowerParticle__) */
