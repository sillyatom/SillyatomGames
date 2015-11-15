//
//  WaitingScreen.h
//  VoidShot
//
//  Created by Sillyatom on 30/04/15.
//
//

#ifndef __VoidShot__WaitingScreen__
#define __VoidShot__WaitingScreen__

#include "cocos2d.h"
#include "Box2D/Box2D.h"

USING_NS_CC;

class WaitingScreen : public Layer
{
private:
    
public:
    CREATE_FUNC(WaitingScreen);
    static cocos2d::Scene* createScene();
    virtual bool init();
    
    void construct(std::string labelString);
    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
    virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
};

#endif /* defined(__VoidShot__WaitingScreen__) */
