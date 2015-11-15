//
//  SolidBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 08/04/15.
//
//

#ifndef __MyCppGame__SolidBulb__
#define __MyCppGame__SolidBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class SolidBulb : public RotatingBulb
{
public:
    CREATE_FUNC(SolidBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void setIsDead(bool val);
};
#endif /* defined(__MyCppGame__SolidBulb__) */
