#include "StoryNarrationLayer.h"
#include "Constants.h"
#include "lib/Utility.h"
#include "lib/AudioController.h"
#include "lib/MenuScreen.h"
#include "lib/GameSaveData.h"

Scene * StoryNarrationLayer::createScene()
{
	auto scene = Scene::create();

	auto layer = StoryNarrationLayer::create();

	scene->addChild(layer);

	return scene;                     
}
                                                                                              
bool StoryNarrationLayer::init()                     
{
	if (!Layer::init())                              
	{
		return false;
	}
    return true;
}

void StoryNarrationLayer::showMenuScreen()
{
	AudioController::getInstance()->stopBG(true);

    GameSaveData::getInstance()->isFirstRun = 0;
    GameSaveData::getInstance()->saveData();
    
	Scene * scene;
	scene = MenuScreen::createScene();
	Director::getInstance()->replaceScene(TransitionFade::create(1.0, scene));
}

void StoryNarrationLayer::onEnter()
{
    AudioController::getInstance()->preloadAndPlayBg(SOUND_ASSETS::INTRO_ANIM);
    _popup = StoryPopup::create();
    _popup->construct(std::string("ui/story.csb"));
    _popup->retain();
    addChild(_popup);
    
    float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH) / _popup->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT) / _popup->getContentSize().height);
    _popup->getLayout()->setScale(maxRatio);
    
    auto func = CallFunc::create(CC_CALLBACK_0(StoryNarrationLayer::showMenuScreen, this));
    func->retain();
    _popup->play(func);
    Layer::onEnter();
}