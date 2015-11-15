//
//  CosmicBulbParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 31/12/14.
//
//

#ifndef __MyCppGame__CosmicBulbParticle__
#define __MyCppGame__CosmicBulbParticle__

#include "cocos2d.h"

USING_NS_CC;

class CosmicBulbParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(CosmicBulbParticle);
    bool initWithColor(Color4F startColor);
};

class CosmicBlastParticle : public ParticleMeteor
{
public:
	CREATE_FUNC(CosmicBlastParticle);
	bool initWithColor(Color4F startColor, float duration);
};


#endif /* defined(__MyCppGame__CosmicBulbParticle__) */
