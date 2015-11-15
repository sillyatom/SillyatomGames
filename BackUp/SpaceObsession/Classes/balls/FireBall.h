//
//  FireBall.h
//  MazeDev
//
//  Created by Sillyatom on 26/11/14.
//
//

#ifndef __MazeDev__FireBall__
#define __MazeDev__FireBall__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class FireBall : public Ball
{

public:
    CREATE_FUNC(FireBall);
    virtual bool init();
    virtual void CreateBody( float x, float y, float radius);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};


#endif /* defined(__MazeDev__FireBall__) */
