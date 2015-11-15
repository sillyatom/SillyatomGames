//
//  FlyingText.h
//  MyCppGame
//
//  Created by Sillyatom on 11/01/15.
//
//

#ifndef __MyCppGame__FlyingText__
#define __MyCppGame__FlyingText__

#include "cocos2d.h"

USING_NS_CC;

class FlyingText : public Sprite
{
private:
    
public:
    CREATE_FUNC(FlyingText);
    virtual bool init();
    void clear();
    void startAnim(std::string text, CallFunc * func1 = nullptr);
};

#endif /* defined(__MyCppGame__FlyingText__) */
