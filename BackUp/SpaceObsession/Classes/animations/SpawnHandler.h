//
//  Spawn Handler
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#ifndef __MyCppGame__SpawnHandler__
#define __MyCppGame__SpawnHandler__

#include <vector>
#include "cocos2d.h"
#include "BackgroundAnimation.h"
USING_NS_CC;

class SpawnHandler : public Node
{
protected:
    std::vector<BackgroundAnimation*> _anims;
    Sprite * _parent;
public:
    CREATE_FUNC(SpawnHandler);
    virtual bool init();
    virtual void startTick(Sprite * parent, float duration);
    virtual void createAnim(){};
};

#endif /* defined(__MyCppGame__SpawnHandler__) */
