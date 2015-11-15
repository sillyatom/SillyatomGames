//
//  TimerBulb.h
//  MazeDev
//
//  Created by Sillyatom on 04/12/14.
//
//

#ifndef __MazeDev__TimerBulb__
#define __MazeDev__TimerBulb__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class TimerBulb : public RotatingBulb
{
    void onTimerExpires(float dt);
    float _intensityPerTick;
    
public:
    ~TimerBulb();
    CREATE_FUNC(TimerBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    void startTimer(float duration);
    virtual void updateMass();
};

#endif /* defined(__MazeDev__TimerBulb__) */
