//
//  PlayerHitResistance.h
//  VoidShot
//
//  Created by Sillyatom on 21/04/15.
//
//

#ifndef __VoidShot__PlayerHitResistance__
#define __VoidShot__PlayerHitResistance__

#include "cocos2d.h"
#include "../bulbs/RotatingBulb.h"

USING_NS_CC;

class PlayerHitResistance : public RotatingBulb
{
public:
    CREATE_FUNC(PlayerHitResistance);
    virtual bool init();
    virtual void updateRotation();
    virtual void CreateBody( float x, float y, float radius);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};
#endif /* defined(__VoidShot__PlayerHitResistance__) */
