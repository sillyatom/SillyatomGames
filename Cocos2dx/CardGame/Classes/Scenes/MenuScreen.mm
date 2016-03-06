#include "MenuScreen.h"
#include "MainGame.h"

cocos2d::Scene * MenuScreen::createScene()
{
	auto scene = Scene::create();
	auto layer = MenuScreen::create();
	scene->addChild(layer);
	return scene;
}

bool MenuScreen::init()
{
	if (!ExtLayer::initWithData(MENU_SCREEN))
	{
		return false;
	}

	auto rootNode = CSLoader::createNode("MenuScreen.csb");
	addChild(rootNode);

	auto autoMatchBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)(rootNode), "autoMatchBtn"));
	autoMatchBtn->addTouchEventListener(CC_CALLBACK_2(MenuScreen::loadAutoMatchScreen, this));
    _btns.push_back(autoMatchBtn);
    
	auto friendsMatchBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)(rootNode), "friendsMatchBtn"));
	friendsMatchBtn->addTouchEventListener(CC_CALLBACK_2(MenuScreen::loadFriendsMatchScreen, this));
    _btns.push_back(friendsMatchBtn);
    
	return true;
}

void MenuScreen::onReceiveNetworkData(int type, rapidjson::Document &data)
{
    NSLog(@"[ MenuScreen OnReceiveNetworkData ] Type : %d",type);
    switch (type)
    {
        case MATCH_STARTED:
        {
            auto scene = MainGame::createScene();
            replaceScene(scene);
        }
        break;
            
        default:
            break;
    }
}

void MenuScreen::loadFriendsMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType)
{
	if (eventType == ui::Widget::TouchEventType::ENDED)
	{
        findMatches();
	}
}

void MenuScreen::loadAutoMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType)
{
	if (eventType == ui::Widget::TouchEventType::ENDED)
	{
        findMatches();
	}
}

void MenuScreen::findMatches()
{
    for (auto btn : _btns)
    {
        btn->setEnabled(false);
    }
    Network::findMatches();
}

void MenuScreen::onExit()
{
    _btns.clear();
}