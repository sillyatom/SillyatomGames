//
//  FlyingMeteorHandler.h
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#ifndef __MyCppGame__FlyingMeteorHandler__
#define __MyCppGame__FlyingMeteorHandler__

#include "SpawnHandler.h"

class FlyingMeteorHandler : public SpawnHandler
{
private:
    float _animScale;
public:
    CREATE_FUNC(FlyingMeteorHandler);
    void setAnimScale(float val){ _animScale = val; }
    virtual bool init();
    virtual void startTick(Sprite * parent, float duration);
    virtual void createAnim(float dt);
};

#endif /* defined(__MyCppGame__FlyingMeteorHandler__) */
