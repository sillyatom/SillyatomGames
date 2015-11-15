//
//  StarAnimBgParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 10/02/15.
//
//

#ifndef __MyCppGame__FIREPLISTPARTICLE__
#define __MyCppGame__FIREPLISTPARTICLE__

#include "cocos2d.h"

USING_NS_CC;

class FirePlistParticle : public ParticleFire
{
public:
    CREATE_FUNC(FirePlistParticle);
    bool init();
	void initWithFile(std::string fileName);
	void updatePositionVar(float width, float height){ setPosVar(Vec2(width, height));};
};

#endif /* defined(__MyCppGame__StarAnimBgParticle__) */
