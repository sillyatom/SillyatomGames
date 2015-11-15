//
//  DarkMagicBall.h
//  MazeDev
//
//  Created by Sillyatom on 26/11/14.
//
//

#ifndef __MazeDev__DarkMagicBall__
#define __MazeDev__DarkMagicBall__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class DarkMagicBall : public Ball
{
    
public:
    CREATE_FUNC(DarkMagicBall);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__DarkMagicBall__) */
