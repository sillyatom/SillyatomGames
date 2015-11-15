
//
//  StoneBulb.h
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#ifndef __MazeDev__StoneBulb__
#define __MazeDev__StoneBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class StoneBulb : public RotatingBulb
{
public:
    CREATE_FUNC(StoneBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    
    virtual void setIsDead(bool val);
	virtual void OnUpdate(float dt);
};

#endif /* defined(__MazeDev__StoneBulb__) */
