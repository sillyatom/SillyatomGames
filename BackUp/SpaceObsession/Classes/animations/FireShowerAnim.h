//
//  FireShowerAnim.h
//  MyCppGame
//
//  Created by Sillyatom on 10/01/15.
//
//

#ifndef __MyCppGame__FireShowerAnim__
#define __MyCppGame__FireShowerAnim__

#include "cocos2d.h"

USING_NS_CC;

class FireShowerAnim : public Sprite
{
private:
    Sprite * img;
    
public:
    CREATE_FUNC(FireShowerAnim);
    virtual bool init();
    
    void startAnim(CallFunc * func1, CallFunc * func2);
};

#endif /* defined(__MyCppGame__FireShowerAnim__) */
