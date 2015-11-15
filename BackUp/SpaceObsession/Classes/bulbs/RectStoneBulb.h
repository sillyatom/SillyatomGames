//
//  RectStoneBulb.h
//  MazeDev
//
//  Created by Sillyatom on 10/12/14.
//
//

#ifndef __MazeDev__RectStoneBulb__
#define __MazeDev__RectStoneBulb__

#include "RectBulb.h"

class RectStoneBulb : public RectBulb
{

public:
    
    CREATE_FUNC(RectStoneBulb);
    virtual bool init();
    virtual void setIsDead(bool val);
    virtual void onNextRound(cocos2d::Event * event){};
    void CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__RectStoneBulb__) */
