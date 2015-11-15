//
//  CosmicBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#ifndef __MyCppGame__CosmicBulb__
#define __MyCppGame__CosmicBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class CosmicBulb : public RotatingBulb
{
    bool _animTriggered;
    
    cocos2d::Vector<Bulb*> _affectedBulbs;

    void clearAffectedBulbs();
public:
    CREATE_FUNC(CosmicBulb);
    
    void triggerAnim();
    void blastNeighbours();    
    virtual bool init();
    virtual void OnUpdate(float dt);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    
    virtual void setIsDead(bool val);
};

#endif
