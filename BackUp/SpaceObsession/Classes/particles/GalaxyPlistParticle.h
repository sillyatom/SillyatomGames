//
//  GalaxyPlistParticle.h
//  VoidShot
//
//  Created by Sillyatom on 30/04/15.
//
//

#ifndef __VoidShot__GalaxyPlistParticle__
#define __VoidShot__GalaxyPlistParticle__

#include "cocos2d.h"

USING_NS_CC;

class GalaxyPlistParticle : public ParticleGalaxy
{
protected:
    virtual bool initWithFileName(std::string fileName);
public:
    CREATE_FUNC(GalaxyPlistParticle);
    virtual bool init();
    void updatePositionVar(float width, float height){ setPosVar(Vec2(width, height));};
};

#endif /* defined(__VoidShot__GalaxyPlistParticle__) */
