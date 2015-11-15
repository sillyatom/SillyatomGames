
//
//  MeteorPlistParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 05/04/15.
//
//

#ifndef __MyCppGame__MeteorPlistParticle__
#define __MyCppGame__MeteorPlistParticle__

#include "cocos2d.h"

USING_NS_CC;

class MeteorPlistParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(MeteorPlistParticle);
    bool init();
    void initWithFile(std::string fileName);
    void updatePositionVar(float width, float height){ setPosVar(Vec2(width, height));};
};

#endif /* defined(__MyCppGame__MeteorPlistParticle__) */
