//
//  MultiplierBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#ifndef __MyCppGame__MultiplierBulb__
#define __MyCppGame__MultiplierBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class MultiplierBulb : public RotatingBulb
{
public:
    CREATE_FUNC(MultiplierBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MyCppGame__MultiplierBulb__) */
