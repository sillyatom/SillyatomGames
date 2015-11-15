//
//  RectRedBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 10/12/14.
//
//

#include "RectRedBulb.h"

bool RectRedBulb::init()
{
    if (!RectBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("rectredbulb");
    
    return true;
}