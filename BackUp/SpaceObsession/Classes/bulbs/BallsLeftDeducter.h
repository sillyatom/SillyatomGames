//
//  BallsLeftDeducter.h
//  MazeDev
//
//  Created by Sillyatom on 05/12/14.
//
//

#ifndef __MazeDev__BallsLeftDeducter__
#define __MazeDev__BallsLeftDeducter__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class BallsLeftDeducter : public RotatingBulb
{
public:
    CREATE_FUNC(BallsLeftDeducter);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__BallsLeftDeducter__) */
