//
//  SpawnHandler.cpp
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#include "SpawnHandler.h"

bool SpawnHandler::init()
{
    if (!Node::init())
    {
        return false;
    }
    
    return true;
}

void SpawnHandler::startTick(Sprite * parent, float duration)
{
    _parent = parent;
}