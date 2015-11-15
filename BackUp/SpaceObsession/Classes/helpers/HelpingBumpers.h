//
//  HelpingBumpers.h
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#ifndef __MyCppGame__HelpingBumpers__
#define __MyCppGame__HelpingBumpers__

#include "cocos2d.h"
#include "../lib/PhysicsSprite.h"
#include "HelpingBumper.h"

USING_NS_CC;

class HelpingBumpers : public Sprite
{
private:
    HelpingBumper * _left;
    HelpingBumper * _middle;
    HelpingBumper * _right;
    
    void createBumpers();
    void createBumper(HelpingBumper * bulb, float x, float y, float radius);
    
public:
    CREATE_FUNC(HelpingBumpers);
    virtual bool init();
    virtual void OnUpdate(float dt);
};

#endif /* defined(__MyCppGame__HelpingBumpers__) */
