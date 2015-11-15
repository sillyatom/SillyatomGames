//
//  OnUpdateHandler.cpp
//  MyCppGame
//
//  Created by Sillyatom on 10/02/15.
//
//

#include "OnUpdateHandler.h"

bool OnUpdateHandler::init()
{
    if (!Node::init())
    {
        return false;
    }
    
    schedule(schedule_selector(OnUpdateHandler::onUpdate));
    return true;
}

void OnUpdateHandler::pushAnim(BackgroundAnimation *anim)
{
    _anims.push_back(anim);
}

void OnUpdateHandler::onUpdate(float dt)
{
    for (auto anim : _anims)
    {
        anim->onUpdate(dt);
    }
}