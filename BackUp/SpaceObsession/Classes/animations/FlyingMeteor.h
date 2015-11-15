//
//  FlyingMeteor.h
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#ifndef __MyCppGame__FlyingMeteor__
#define __MyCppGame__FlyingMeteor__

#include "cocos2d.h"
#include "BackgroundAnimation.h"

USING_NS_CC;

class FlyingMeteor : public BackgroundAnimation
{
public:
    CREATE_FUNC(FlyingMeteor);
    virtual bool init();
    virtual void startAnim(CallFunc * func1 = NULL, CallFunc * func2 = NULL);
};

#endif /* defined(__MyCppGame__FlyingMeteor__) */
