//
//  MultiplierAnim.h
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#ifndef __MyCppGame__MultiplierAnim__
#define __MyCppGame__MultiplierAnim__

#include "cocos2d.h"

USING_NS_CC;

class MultiplierAnim : public Sprite
{
private:
    
public:
    CREATE_FUNC(MultiplierAnim);
    virtual bool init();
    void clear();
    void startAnim(std::string text, CallFunc * func1);
};

#endif /* defined(__MyCppGame__MultiplierAnim__) */
