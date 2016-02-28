#include "MainScreen.h"
#include "MenuScreen.h"

cocos2d::Scene * MainScreen::createScene()
{
	auto scene = Scene::create();
	auto layer = MainScreen::create();
	scene->addChild(layer);
	return scene;
}

bool MainScreen::init()
{
	if (!Layer::init())
	{
		return false;
	}

	auto rootNode = CSLoader::createNode("MainScreen.csb");
	addChild(rootNode);
	auto playBtn = static_cast<ui::Button*>(rootNode->getChildByName("playBtn"));
	playBtn->addTouchEventListener(CC_CALLBACK_2(MainScreen::loadMenuScreen, this));
	return true;
}

void MainScreen::loadMenuScreen(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType)
{
	if (eventType == ui::Widget::TouchEventType::ENDED)
	{
		auto scene = MenuScreen::createScene();
		Director::getInstance()->replaceScene(TransitionFade::create(1.0f, scene));
	}
}