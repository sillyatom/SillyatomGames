//
//  MovingPlanets.h
//  MyCppGame
//
//  Created by Sillyatom on 09/02/15.
//
//

#ifndef __MyCppGame__MovingPlanets__
#define __MyCppGame__MovingPlanets__

#include "cocos2d.h"
#include "BackgroundAnimation.h"

USING_NS_CC;

class MovingPlanets : public BackgroundAnimation
{
    Vec2 _rotatingCenter;
    float _radius;
    float _currRotation;
public:
    CREATE_FUNC(MovingPlanets);
    virtual bool init();
    virtual void initWithData(const rapidjson::Value& object);
    virtual void onUpdate(float dt);
};

#endif /* defined(__MyCppGame__MovingPlanets__) */
