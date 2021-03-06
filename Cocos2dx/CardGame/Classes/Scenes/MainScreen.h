#ifndef _MAIN_SCREEN_H_
#define _MAIN_SCREEN_H_

#include "../Ext/ExtLayer.h"
USING_NS_CC;
using namespace cocostudio::timeline;

class MainScreen : public ExtLayer
{
private:
	void loadMenuScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
public:
	CREATE_FUNC(MainScreen);
	static cocos2d::Scene* createScene();
	virtual bool init();
};

#endif
