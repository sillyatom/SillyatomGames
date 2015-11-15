//
//  RectGreenBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 10/12/14.
//
//

#include "RectGreenBulb.h"

bool RectGreenBulb::init()
{
    if (!RectBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("rectgreenbulb");
    
    return true;
}