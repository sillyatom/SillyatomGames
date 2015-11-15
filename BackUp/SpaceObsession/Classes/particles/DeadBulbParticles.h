#ifndef __MyCppGame__DEAD_BULB_PARTICLES__
#define __MyCppGame__DEAD_BULB_PARTICLES__


#include "cocos2d.h"

USING_NS_CC;

class DeadBulbParticles : public ParticleMeteor
{
public:
	CREATE_FUNC(DeadBulbParticles);
	bool initWithPosition(float x, float y);
};

#endif