//
//  HelpingBumper.h
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#ifndef __MyCppGame__HelpingBumper__
#define __MyCppGame__HelpingBumper__

#include "cocos2d.h"
#include "../bulbs/Bumper.h"

USING_NS_CC;

class HelpingBumper : public Bumper
{
public:
    CREATE_FUNC(HelpingBumper);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MyCppGame__HelpingBumper__) */
