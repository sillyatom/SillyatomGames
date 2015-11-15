//
//  LevelSelectionParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 18/02/15.
//
//

#include "LevelSelectionParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool LevelSelectionParticle::initWithPosition(float x, float y)
{
    if (!LevelSelectionParticle::initWithFile("plist/levelSelectionBgParticle.plist"))
    {
        return false;
    }
    setPosition(x, y);
    return true;
}