#ifndef _MY_CPP_GAME_LOADING_SCREEN_
#define _MY_CPP_GAME_LOADING_SCREEN_

#include "cocos2d.h"
#include "Box2D/Box2D.h"

USING_NS_CC;

class LoadingScreen : public Layer
{
private:

public:
	CREATE_FUNC(LoadingScreen);
	static cocos2d::Scene* createScene();
	virtual bool init();
	virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
	virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
};
#endif