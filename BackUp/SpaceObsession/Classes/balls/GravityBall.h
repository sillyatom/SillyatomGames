//
//  GravityBall.h
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#ifndef __MyCppGame__GravityBall__
#define __MyCppGame__GravityBall__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class GravityBall : public Ball
{
    
public:
    
    CREATE_FUNC(GravityBall);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};


#endif /* defined(__MyCppGame__GravityBall__) */
