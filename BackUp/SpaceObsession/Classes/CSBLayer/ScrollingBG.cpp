//
//  ScrollingBG.cpp
//  MyCppGame
//
//  Created by Sillyatom on 05/04/15.
//
//

#include "ScrollingBG.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../lib/LanguageManager.h"
#include "../lib/Utility.h"

bool ScrollingBG::init()
{
    if (!CSBPopup::init())
    {
        return false;
    }
    
    return true;
}

void ScrollingBG::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    
    
    setContentSize(Size(_layout->getContentSize().width, _layout->getContentSize().height));
    setAnchorPoint(Vec2(0.5, 0.5));
    setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(REF_GAME_HEIGHT/2.0));
}