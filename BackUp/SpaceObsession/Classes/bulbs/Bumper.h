//
//  Bumper.h
//  MyCppGame
//
//  Created by Sillyatom on 24/12/14.
//
//

#ifndef __MyCppGame__Bumper__
#define __MyCppGame__Bumper__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class Bumper : public RotatingBulb
{
    void addAnimation();
public:
    CREATE_FUNC(Bumper);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MyCppGame__Bumper__) */
