//
//  ToggleBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 20/01/15.
//
//

#ifndef __MyCppGame__ToggleBulb__
#define __MyCppGame__ToggleBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class ToggleBulb : public RotatingBulb
{
public:
    CREATE_FUNC(ToggleBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void onNextRound(cocos2d::Event * event);
    virtual void setIsDead(bool val);
};

#endif /* defined(__MyCppGame__ToggleBulb__) */
