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
    
};

#endif /* Utility_hpp */
