//
//  OnUpdateHandler.h
//  MyCppGame
//
//  Created by Sillyatom on 10/02/15.
//
//

#ifndef __MyCppGame__OnUpdateHandler__
#define __MyCppGame__OnUpdateHandler__

#include <vector>
#include "cocos2d.h"
#include "BackgroundAnimation.h"
USING_NS_CC;

class OnUpdateHandler : public Node
{
protected:
    std::vector<BackgroundAnimation*> _anims;
    Sprite * _parent;
public:
    CREATE_FUNC(OnUpdateHandler);
    virtual bool init();
    void pushAnim(BackgroundAnimation*anim);
    virtual void onUpdate(float dt);
};

#endif /* defined(__MyCppGame__OnUpdateHandler__) */
