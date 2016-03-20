//
//  Utility.cpp
//  CardGame
//
//  Created by Sillyatom on 07/03/16.
//
//

#include "Utility.h"
#include <Math.h>
void Utility::delayedCall(Node * node, CallFunc * callFunc, float delay)
{
    cocos2d::Vector<FiniteTimeAction*>_actions;
    {
        FiniteTimeAction * action1 = DelayTime::create(delay);
        _actions.pushBack(action1);
    }
    {
        CallFunc * action2 = callFunc;
        _actions.pushBack(action2);
    }
    
    node->runAction(Sequence::create(_actions));
}

float Utility::InterpolateSlowAcceleration(float timeElapsed, float from, float to, float duration)
{
    float v = timeElapsed / duration;
    v = v * v;
    return (from * v) + (to * (1 - v));
}

float Utility::InterpolateDecelleration(float timeElapsed, float from, float to, float duration)
{
    float v = timeElapsed / duration;
    v = 1 - (1 - v) * (1 - v);
    return (from * v) + (to * (1 - v));
}

float Utility::SinInterpolate(float timeElapsed, float from, float to, float duration)
{
    float v = timeElapsed / duration;
    v = sin(v * MATH_PIOVER2);
    return (from * v) + (to * (1 - v));
}