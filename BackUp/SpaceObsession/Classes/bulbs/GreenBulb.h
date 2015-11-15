//
//  GreenBulb.h
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#ifndef __MazeDev__GreenBulb__
#define __MazeDev__GreenBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class GreenBulb : public RotatingBulb
{
public:
    CREATE_FUNC(GreenBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
	virtual void OnUpdate(float dt);
};

#endif /* defined(__MazeDev__GreenBulb__) */
