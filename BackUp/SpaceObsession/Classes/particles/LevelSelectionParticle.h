//
//  LevelSelectionParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 18/02/15.
//
//

#ifndef __MyCppGame__LevelSelectionParticle__
#define __MyCppGame__LevelSelectionParticle__

#include "cocos2d.h"

USING_NS_CC;

class LevelSelectionParticle : public ParticleFire
{
public:
    CREATE_FUNC(LevelSelectionParticle);
    bool initWithPosition(float x, float y);
};

#endif /* defined(__MyCppGame__LevelSelectionParticle__) */
