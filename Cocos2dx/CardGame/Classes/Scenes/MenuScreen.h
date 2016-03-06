#ifndef _MENU_SCREEN_H_
#define _MENU_SCREEN_H_

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "../Ext/ExtLayer.h"

USING_NS_CC;
using namespace cocostudio::timeline;

class MenuScreen : public ExtLayer
{
private:
    std::vector<ui::Button*> _btns;
    void findMatches();
	void loadAutoMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
	void loadFriendsMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
protected:
    virtual void onReceiveNetworkData(int type, rapidjson::Document & data);
public:
	CREATE_FUNC(MenuScreen);
	static cocos2d::Scene* createScene();
	virtual bool init();
    virtual void onExit();
};

#endif
