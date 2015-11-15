//
//  HelpingBumper.cpp
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#include "HelpingBumper.h"

bool HelpingBumper::init()
{
    if (!Bumper::init())
    {
        return false;
    }
    
    _bulbName = std::string("helpingbumper");
    
    return true;
}

void HelpingBumper::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    Bumper::CollidesWith(object, phySprite, contact);
}