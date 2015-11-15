#include "LoadingScreen.h"
#include "Utility.h"
#include "../Constants.h"
#include "AnimationHandler.h"

Scene* LoadingScreen::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = LoadingScreen::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

bool LoadingScreen::init()
{
	if (!Layer::init())
	{
		return false;
	}

	//add screen
	auto bg = Sprite::create("bg/loadingscreenbg.jpg");
	bg->setAnchorPoint(Vec2(0.0, 0.0));
	float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH) / bg->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT) / bg->getContentSize().height);
	bg->setScale(maxRatio);
	addChild(bg);

	//add loading animation
	std::string file = "anim_planet_moon_";
	auto img = Sprite::createWithSpriteFrameName(file + "01.png");
	float width = Utility::getDevicePositionX(70.0);
	float height = width;
	addChild(img);

	img->setAnchorPoint(Vec2(0.5, 0.5));
	img->setScaleX(width / img->getContentSize().width);
	img->setScaleY(height / img->getContentSize().height);
	img->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5), Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5));

	//loading text
	auto label = Label::createWithBMFont("fonts/font.fnt", "Loading . . .");
	label->setAnchorPoint(Vec2(0.5, 0.5));
	label->setScale(0.6);
	label->setPosition(img->getPositionX(), img->getPositionY() - img->getBoundingBox().size.height * 0.5 - label->getBoundingBox().size.height * 0.5);
	addChild(label);

	//add animation here
	Action * action = AnimationHandler::getInstance()->createActionFromPList("spritesheets/animations", 1, 10, file, 0.15f, true);
	img->runAction(action);

	//add event listener
	auto listener = EventListenerTouchOneByOne::create();
	listener->setSwallowTouches(true);
	listener->onTouchBegan = CC_CALLBACK_2(LoadingScreen::onTouchBegan, this);
	listener->onTouchEnded = CC_CALLBACK_2(LoadingScreen::onTouchEnded, this);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);

	return true;
}

bool LoadingScreen::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
	return true;
}

void LoadingScreen::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{

}