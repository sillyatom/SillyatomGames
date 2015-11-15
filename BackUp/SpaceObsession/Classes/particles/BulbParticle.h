//
//  BulbParticle.h
//  MyCppGame
//
//  Created by Sillyatom on 29/12/14.
//
//

#ifndef __MyCppGame__BulbParticle__
#define __MyCppGame__BulbParticle__

#include "cocos2d.h"

USING_NS_CC;

class BulbParticle : public ParticleMeteor
{
    float _currentEmissionRate;
    
public:
    CREATE_FUNC(BulbParticle);
    bool initWithColor(Color4F startColor);
    void resetEmissionRate();
    float getEmissionRate(){ return _currentEmissionRate; }
};

#endif /* defined(__MyCppGame__BulbParticle__) */
