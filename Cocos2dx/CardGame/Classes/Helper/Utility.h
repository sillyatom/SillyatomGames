//
//  Utility.hpp
//  CardGame
//
//  Created by Sillyatom on 07/03/16.
//
//

#ifndef Utility_hpp
#define Utility_hpp

#include "cocos2d.h"
USING_NS_CC;

class Utility
{
public:
    static void delayedCall(Node * node, CallFunc * callFunc, float delay);
    static float InterpolateSlowAcceleration(float timeElapsed, float from, float to, float duration);
    static float InterpolateDecelleration(float timeElapsed, float from, float to, float duration);
    static float SinInterpolate(float timeElapsed, float from, float to, float duration);
};

#endif /* Utility_hpp */
