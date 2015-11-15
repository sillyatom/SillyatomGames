//
//  HudEnergyParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#ifndef __MyCppGame__HudEnergyParticle__
#define __MyCppGame__HudEnergyParticle__

#include "cocos2d.h"

USING_NS_CC;

class HudEnergyParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(HudEnergyParticle);
    bool initWithColor(Color4F startColor);
};

#endif /* defined(__MyCppGame__HudEnergyParticle__) */
