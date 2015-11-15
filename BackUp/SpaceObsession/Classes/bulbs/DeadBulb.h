//
//  GreenBulb.h
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#ifndef __MazeDev__DeadBulb__
#define __MazeDev__DeadBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class DeadBulb : public RotatingBulb
{
public:
    CREATE_FUNC(DeadBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__DeadBulb__) */
