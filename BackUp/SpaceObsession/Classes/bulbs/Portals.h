//
//  Portals.h
//  MyCppGame
//
//  Created by Sillyatom on 07/01/15.
//
//

#ifndef __MyCppGame__Portals__
#define __MyCppGame__Portals__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class Portals : public RotatingBulb
{
    Portals * _out;
public:
    CREATE_FUNC(Portals);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact);
    
    void addAnimation();
    void setOutPortal(Portals* portal){ _out = portal; }
};

#endif /* defined(__MyCppGame__Portals__) */
