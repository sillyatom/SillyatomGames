//
//  SpringBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 29/01/15.
//
//

#ifndef __MyCppGame__SpringBulb__
#define __MyCppGame__SpringBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class SpringBulb : public RotatingBulb
{
public:
    CREATE_FUNC(SpringBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    
    virtual void CreateBody( float x, float y, float radius);
    virtual void setIsDead(bool val);
};

#endif /* defined(__MyCppGame__SpringBulb__) */
