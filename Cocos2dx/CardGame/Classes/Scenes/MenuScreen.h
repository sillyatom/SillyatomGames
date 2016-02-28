#ifndef _MENU_SCREEN_H_
#define _MENU_SCREEN_H_

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;
using namespace cocostudio::timeline;

class MenuScreen : public cocos2d::Layer
{
private:
	void loadAutoMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
	void loadFriendsMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
public:
	CREATE_FUNC(MenuScreen);
	static cocos2d::Scene* createScene();
	virtual bool init();
};

#endif
