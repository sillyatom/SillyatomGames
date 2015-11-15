//
//  RedBulb.h
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#ifndef __MazeDev__RedBulb__
#define __MazeDev__RedBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class RedBulb : public RotatingBulb
{
public:
    CREATE_FUNC(RedBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__RedBulb__) */
