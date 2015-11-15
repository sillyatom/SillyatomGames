//
//  DarkBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 05/01/15.
//
//

#ifndef __MyCppGame__DarkBulb__
#define __MyCppGame__DarkBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class DarkBulb : public RotatingBulb
{
    cocos2d::Vector<Bulb*> _affectedBulbs;
    void blastNeighbours();
    void clearAffectedBulbs();
public:
    CREATE_FUNC(DarkBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void onStartUpdate();
};

#endif /* defined(__MyCppGame__DarkBulb__) */
