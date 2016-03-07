//
//  Utility.cpp
//  CardGame
//
//  Created by Sillyatom on 07/03/16.
//
//

#include "Utility.h"

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