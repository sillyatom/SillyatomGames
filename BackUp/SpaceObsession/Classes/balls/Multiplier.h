//
//  Multiplier.h
//  MyCppGame
//
//  Created by Sillyatom on 24/12/14.
//
//

#ifndef __MyCppGame__Multiplier__
#define __MyCppGame__Multiplier__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class Multiplier : public Ball
{
public:
    CREATE_FUNC(Multiplier);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MyCppGame__Multiplier__) */
