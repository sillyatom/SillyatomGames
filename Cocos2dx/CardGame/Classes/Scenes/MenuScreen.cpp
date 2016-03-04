#include "MenuScreen.h"
#include "MainGame.h"
#include "../Network/Network.h"

cocos2d::Scene * MenuScreen::createScene()
{
	auto scene = Scene::create();
	auto layer = MenuScreen::create();
	scene->addChild(layer);
	return scene;
}

bool MenuScreen::init()
{
	if (!ExtLayer::init())
	{
		return false;
	}

	auto rootNode = CSLoader::createNode("MenuScreen.csb");
	addChild(rootNode);

	auto autoMatchBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)(rootNode), "autoMatchBtn"));
	autoMatchBtn->addTouchEventListener(CC_CALLBACK_2(MenuScreen::loadAutoMatchScreen, this));

	auto friendsMatchBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)(rootNode), "friendsMatchBtn"));
	friendsMatchBtn->addTouchEventListener(CC_CALLBACK_2(MenuScreen::loadFriendsMatchScreen, this));
    
    addCustomListeners();
    
	return true;
}

void MenuScreen::onReceiveNetworkData(int type, rapidjson::Document &data)
{
    switch (type)
    {
        case SELECTED_HOST:
        {
            auto scene = MainGame::createScene();
            Director::getInstance()->replaceScene(TransitionFade::create(1.0f, scene));
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
        Network::findMatches();
	}
}

void MenuScreen::loadAutoMatchScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType)
{
	if (eventType == ui::Widget::TouchEventType::ENDED)
	{
        Network::findMatches();
	}
}