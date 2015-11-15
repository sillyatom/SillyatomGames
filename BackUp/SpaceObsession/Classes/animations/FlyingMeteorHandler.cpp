//
//  FlyingMeteorHandler.cpp
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#include "FlyingMeteorHandler.h"
#include "FlyingMeteor.h"
#include "../Constants.h"

bool FlyingMeteorHandler::init()
{
    if (!SpawnHandler::init())
    {
        return false;
    }
    _animScale = 1.0;
    return true;
}

void FlyingMeteorHandler::startTick(Sprite * parent, float duration)
{
    schedule(schedule_selector(FlyingMeteorHandler::createAnim), duration, -1, 0.0);
    SpawnHandler::startTick(parent, duration);
}

void FlyingMeteorHandler::createAnim(float dt)
{
    unsigned int randomNum = rand() % (rand() % 1000);
    {
        srand(randomNum++);
    }
    int randNum = (rand() % 2);
    for (int index = 0; index < randNum; index++)
    {
        FlyingMeteor * flyingMeteor = FlyingMeteor::create();
        flyingMeteor->setAnchorPoint(Vec2(0.5, 0.5));
        flyingMeteor->setPosition(Vec2(0.0, 0.0));
        _parent->addChild(flyingMeteor);
     //   flyingMeteor->setScale(_animScale);
        flyingMeteor->startAnim();
    }
}