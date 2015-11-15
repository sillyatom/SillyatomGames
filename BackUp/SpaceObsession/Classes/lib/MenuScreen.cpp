#include "NewLevelSelectionScreen.h"
#include "MenuScreen.h"
#include "Utility.h"
#include "Game.h"

#include "InAppHandler.h"

#include "GameSaveData.h"
#include "GameSharing.h"
#include "HttpConnection.h"
#include "AudioController.h"
#include "../StoryNarrationLayer.h"

int MenuScreen::signInStatus = -1;

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
#include<jni.h>
extern
"C"
{
	void Java_org_cocos2dx_cpp_AppActivity_signInStatus(JNIEnv*env, jobject thiz, jint value)
	{
		MenuScreen::signInStatus = value;
	}
}
#endif

Scene* MenuScreen::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();

	// 'layer' is an autorelease object
	auto layer = MenuScreen::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

void MenuScreen::addMeteorShower(float dt)
{
	FlyingMeteor * flyingMeteor = FlyingMeteor::create();
	flyingMeteor->setAnchorPoint(Vec2(0.5, 0.5));
	_meteorContainer->addChild(flyingMeteor);
	flyingMeteor->startAnim();	
}

bool MenuScreen::init()
{
	if (!Layer::init())
	{
		return false;
	}

    _purchaseView = nullptr;
    _creditsPopup = nullptr;
    _waitingScreen = nullptr;

    _innerContainer = Sprite::create();
    addChild(_innerContainer);
    
    _outerContainer = Sprite::create();
    addChild(_outerContainer);
    
	AudioController::getInstance()->preloadEffect(SOUND_ASSETS::EFFECT_MENU_SCREEN_ENGINE);

    BlendFunc bf = { GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA };
	Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();

    _bg = Sprite::create("bg/MainScreenBg.jpg");
    _innerContainer->addChild(_bg);
#if(BOX2D_DEBUG_DRAW == 1)
    _bg->setVisible(false);
#endif
    _bg->setAnchorPoint(Vec2(0.0, 0.0));
    float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH)/_bg->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT)/_bg->getContentSize().height);
    _bg->setScale(maxRatio);

	//add bg animations here
	_innerContainer->addChild(BgRainParticles::create());

	//add character image here
	_character = Sprite::create("bg/MainScreenCharacter.png");
	_character->setAnchorPoint(Vec2(0.5, 0.5));
	maxRatio = std::max(Utility::getDevicePositionX(232.0)/_character->getBoundingBox().size.width, Utility::getDevicePositionY(126.0)/_character->getBoundingBox().size.height);
	_character->setPosition(Utility::getDevicePositionX(145.0), Utility::getDevicePositionY(REF_GAME_HEIGHT - 181.0));
	_character->setScale(maxRatio);
	_innerContainer->addChild(_character);

	auto moveUpAnim = (MoveBy::create(1.0, Vec2(0.0, Utility::getDevicePositionY(5.0))));
	auto moveDownAnim = (MoveBy::create(1.0, Vec2(0.0,Utility::getDevicePositionY(-5.0))));

	_character->runAction(RepeatForever::create(Sequence::createWithTwoActions(moveUpAnim, moveDownAnim)));

	//todo: may have to change the hard coded x, y values to percentage later 
	//to run perfectly fine for all resolutions
	{
		vehicleParticle = FirePlistParticle::create();
		vehicleParticle->initWithFile("plist/mainScreenSmoke.plist");
		_character->addChild(vehicleParticle);
		vehicleParticle->setPositionX(Utility::getDevicePositionX(30.0));
		vehicleParticle->setPositionY(Utility::getDevicePositionY(REF_GAME_HEIGHT - 190.5));
		vehicleParticle->setScale(2.0);
	}
	
	{
		vehicleParticle = FirePlistParticle::create();
		vehicleParticle->initWithFile("plist/mainScreenSmoke.plist");
		_character->addChild(vehicleParticle);
		vehicleParticle->setPositionX(Utility::getDevicePositionX(146.0));
		vehicleParticle->setPositionY(Utility::getDevicePositionY(REF_GAME_HEIGHT - 300.0));
		vehicleParticle->setAngle(-157);
		vehicleParticle->setScale(2.0);
	}

	//add cloud effect
	_clearParticle = FirePlistParticle::create();
	_clearParticle->initWithFile("plist/mainScreenEffect.plist");
	_clearParticle->setAnchorPoint(Vec2(0.5, 0.0));
	_clearParticle->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), 0.0);
	_clearParticle->setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(10)));
	_innerContainer->addChild(_clearParticle);
	_clearParticle->setBlendAdditive(true);

	//add text "Tap anywhere to continue"
	auto textField = Label::createWithBMFont("ui/fonts/font.fnt", "Tap anywhere to continue");
	textField->setAnchorPoint(Vec2(0.5, 0.5));
	textField->setPosition(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(15.0)));
    textField->setScale(0.75);
	_innerContainer->addChild(textField);
	textField->setBlendFunc(bf);

	FiniteTimeAction * action1 = FadeTo::create(1.0, 50.0);
	FiniteTimeAction * action2 = FadeTo::create(1.0, 255.0);
	auto sequence = Sequence::create(action1, action2, NULL);
	auto repeat = RepeatForever::create(sequence);
	textField->runAction(repeat);
    
	//for custom events
    {
        auto listener = EventListenerCustom::create(GameEvent::GameEventType, CC_CALLBACK_1(MenuScreen::onEvent, this));
        _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    }
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//    std::string playerId = std::string(GameSharing::getPlayerId());
//    if (playerId.length() > 1)
//    {
//        std::ostringstream oss;
//        oss<<"player_id="<<playerId<<"&player_email="<<"none";
//        HttpConnection::getInstance()->POST(oss.str(), "init data", nullptr);
//    }
#endif

    {
        auto noadsBtn = MenuItemImage::create("ui/btns/noadsbtn.png", "ui/btns/noadsbtn.png", "ui/btns/noadsbtn.png", CC_CALLBACK_1(MenuScreen::menuCallback, this));
        noadsBtn->setAnchorPoint(Vec2(0.5, 0.5));
        noadsBtn->setScale(Utility::getDevicePositionY(47.0)/noadsBtn->getBoundingBox().size.width, Utility::getDevicePositionY(47.0)/noadsBtn->getBoundingBox().size.width);
        noadsBtn->setPosition(Vec2::ZERO);
        noadsBtn->setTag(1);
        
        auto leaderboardBtn = MenuItemImage::create("ui/btns/leaderboardbtn.png", "ui/btns/leaderboardbtn.png", "ui/btns/leaderboardbtn.png", CC_CALLBACK_1(MenuScreen::menuCallback, this));
        leaderboardBtn->setAnchorPoint(Vec2(0.5, 0.5));
        leaderboardBtn->setScale(Utility::getDevicePositionY(47.0)/leaderboardBtn->getBoundingBox().size.width, Utility::getDevicePositionY(47.0)/leaderboardBtn->getBoundingBox().size.width);
        leaderboardBtn->setPosition(noadsBtn->getPositionX(), noadsBtn->getPositionY() - noadsBtn->getBoundingBox().size.height);
        leaderboardBtn->setTag(2);
    
        auto creditsBtn = MenuItemImage::create("ui/btns/creditsbtn.png", "ui/btns/creditsbtn.png", "ui/btns/creditsbtn.png", CC_CALLBACK_1(MenuScreen::menuCallback, this));
        creditsBtn->setAnchorPoint(Vec2(0.5, 0.5));
        creditsBtn->setScale(Utility::getDevicePositionY(47.0)/creditsBtn->getBoundingBox().size.width, Utility::getDevicePositionY(47.0)/creditsBtn->getBoundingBox().size.width);
        creditsBtn->setPosition(leaderboardBtn->getPositionX(), leaderboardBtn->getPositionY() - leaderboardBtn->getBoundingBox().size.height);
        creditsBtn->setTag(3);
        
        auto restoreBtn = MenuItemImage::create("ui/btns/restorebtn.png", "ui/btns/restorebtn.png", "ui/btns/restorebtn.png", CC_CALLBACK_1(MenuScreen::menuCallback, this));
        restoreBtn->setAnchorPoint(Vec2(0.5, 0.5));
        restoreBtn->setScale(Utility::getDevicePositionY(47.0)/restoreBtn->getBoundingBox().size.width, Utility::getDevicePositionY(47.0)/restoreBtn->getBoundingBox().size.width);
        restoreBtn->setPosition(creditsBtn->getPositionX(), creditsBtn->getPositionY() - creditsBtn->getBoundingBox().size.height);
        restoreBtn->setTag(0);
        
        if (GameSaveData::getInstance()->unlockedAds)
        {
            _menu = Menu::create(restoreBtn, leaderboardBtn, creditsBtn, NULL);
        }
        else
        {
            _menu = Menu::create(restoreBtn, noadsBtn, leaderboardBtn, creditsBtn, NULL);
        }
        _menu->setAnchorPoint(Vec2(0.5, 0.5));
        _menu->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH) - noadsBtn->getBoundingBox().size.width,
                           Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.75));
        _innerContainer->addChild(_menu);
    }
	//for touch listeners
	{
		auto listener = EventListenerTouchOneByOne::create();
		listener->setSwallowTouches(true);
		listener->onTouchBegan = CC_CALLBACK_2(MenuScreen::onTouchBegan, this);
		listener->onTouchMoved = CC_CALLBACK_2(MenuScreen::onTouchMoved, this);
		listener->onTouchEnded = CC_CALLBACK_2(MenuScreen::onTouchEnded, this);
		_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	}
    
    _eventDispatcher->addCustomEventListener(GameEvent::GameEventType, CC_CALLBACK_1(MenuScreen::onGameEvent, this));
    
	return true;
}

void MenuScreen::showWaitingScreen(std::string labelString)
{
    if (_waitingScreen == nullptr)
    {
        _waitingScreen = WaitingScreen::create();
        _waitingScreen->construct(labelString);
        _outerContainer->addChild(_waitingScreen);
    }
}

void MenuScreen::clearWaitingScreen()
{
    if (_waitingScreen)
    {
        _waitingScreen->getParent()->removeChild(_waitingScreen);
        _waitingScreen = nullptr;
    }
}

void MenuScreen::onGameEvent(cocos2d::EventCustom *event)
{
    GameEvent * gameEvent = (GameEvent*)event;
    
    if (gameEvent->eventName == GameEvent::InApp_Purchase_Initiated)
    {
        showWaitingScreen("Purchase Initiated . . .");
    }
    else if (gameEvent->eventName == GameEvent::InApp_Product_Request_Initiated)
    {
        showWaitingScreen("Product Request Initiated . . .");
    }
    else if (gameEvent->eventName == GameEvent::InApp_Purchase_Restore_Initiated)
    {
        showWaitingScreen("Product Restore Initiated . . .");
    }
    else if (
             gameEvent->eventName == GameEvent::InApp_Purchase_Succeeded
             || gameEvent->eventName == GameEvent::InApp_Purchase_Failed
             
             || gameEvent->eventName == GameEvent::InApp_Product_Request_Succeeded
             || gameEvent->eventName == GameEvent::InApp_Product_Request_Failed
             
             || gameEvent->eventName == GameEvent::InApp_Purchase_Restore_Succeeded
             || gameEvent->eventName == GameEvent::InApp_Purchase_Restore_Failed
        )
    {
        clearWaitingScreen();
    }
    
    if (gameEvent->eventName == GameEvent::InApp_Product_Request_Failed)
    {
        auto genericPopup = GenericPopup::create();
        auto callbackFunc = CallFunc::create(CC_CALLBACK_0(MenuScreen::clearPurchaseView, this));
        callbackFunc->retain();
        genericPopup->construct("ui/genericpopup.csb", "Request Failed", callbackFunc, callbackFunc);
        _innerContainer->addChild(genericPopup);
    }
    else if (gameEvent->eventName == GameEvent::InApp_Purchase_Succeeded)
    {
        GameSaveData::getInstance()->unlockedAds = 1;
        GameSaveData::getInstance()->saveData();
        clearPurchaseView();
        if (_menu->getChildByTag(1))
        {
            _menu->getChildByTag(1)->setVisible(false);
        }
    }
    else if (gameEvent->eventName == GameEvent::InApp_Purchase_Restore_Succeeded)
    {
        if (gameEvent->identifier == "com.sillyatomgames.voidshots.removeads")
        {
            GameSaveData::getInstance()->unlockedAds = 1;
            GameSaveData::getInstance()->saveData();
            if (_menu->getChildByTag(1))
            {
                _menu->getChildByTag(1)->setVisible(false);
            }
        }
        
        auto genericPopup = GenericPopup::create();
        genericPopup->construct("ui/genericpopup.csb", "Purchase Restored", nullptr, nullptr);
        _innerContainer->addChild(genericPopup);
    }
    else if (gameEvent->eventName == GameEvent::InApp_Purchase_Restore_Failed)
    {
        auto genericPopup = GenericPopup::create();
        genericPopup->construct("ui/genericpopup.csb", "Purchase Failed!!!", nullptr, nullptr);
        _innerContainer->addChild(genericPopup);
    }

}

bool MenuScreen::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
	return true;
}

void MenuScreen::onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event)
{

}

void MenuScreen::runNextScene()
{
	if (vehicleParticle)
	{
		vehicleParticle->stopSystem();
		vehicleParticle->getParent()->removeChild(vehicleParticle);
		vehicleParticle = nullptr;
	}
	if (_clearParticle)
	{
		_clearParticle->stopSystem();
		_clearParticle->getParent()->removeChild(_clearParticle);
		_clearParticle = nullptr;
	}
	if (_character)
	{
		_character->stopAllActions();
		_character->getParent()->removeChild(_character);
		_character = nullptr;
	}
	stopAllActions();
	unscheduleAllSelectors();
	_eventDispatcher->removeAllEventListeners();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	GameSharing::hideFBLike(true);
#endif
	showWorldSelectionScreen();
}

void MenuScreen::addClearScreen()
{
    float delay = 1.0;
	_clearParticle->resetSystem();
	_clearParticle->setEmissionRate(Utility::getDevicePositionY(250.0));
	_clearParticle->setGravity(Vec2(0.0, Utility::getDevicePositionY(50.0)));
	_clearParticle->setScale(3.0);
	_clearParticle->setSpeed(Utility::getDevicePositionY(50.0));
	_clearParticle->setLife(0.1);
	_clearParticle->setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(100.0)));
    _clearParticle->setDuration(delay/2.0);

	auto delayTime = DelayTime::create(delay);
	FiniteTimeAction * func = CallFunc::create(CC_CALLBACK_0(MenuScreen::runNextScene, this));
	runAction(Sequence::createWithTwoActions(delayTime, func));
}

void MenuScreen::onTouchEnded(Touch *touch, Event *unused_event)
{
	auto spaceShipMoveAnim = MoveTo::create(0.5, Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(REF_GAME_HEIGHT/2.0)));
	auto spaceShipScaleAnim = ScaleTo::create(0.5, 0.0, 0.0);

	_character->runAction(spaceShipScaleAnim); 
	_character->runAction(spaceShipMoveAnim);

	AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_MENU_SCREEN_ENGINE);

	auto func1 = DelayTime::create(1.0);
//	CallFunc * func2 = CallFunc::create(CC_CALLBACK_0(MenuScreen::addClearScreen, this));
    
    FiniteTimeAction * func = CallFunc::create(CC_CALLBACK_0(MenuScreen::runNextScene, this));
	runAction(Sequence::createWithTwoActions(func1, func));
}

void MenuScreen::onEvent(cocos2d::EventCustom *event)
{
    CCLOG("triggered");
}

void MenuScreen::changeBtnStatus(float dt)
{
	if (signInStatus == 0)
	{
		_signOutBtn->setVisible(true);
		_signOutBtn->setEnabled(true);
		_signInBtn->setVisible(false);
		_leaderboardBtn->setEnabled(true);
	}
	else if (signInStatus == 1)
	{
		_signInBtn->setVisible(true);
		_signInBtn->setEnabled(true);
		_signOutBtn->setVisible(false);
		_leaderboardBtn->setEnabled(false);
	}
	else if (signInStatus == -1)
	{
		_signOutBtn->setEnabled(false);
		_signInBtn->setEnabled(false);
		_leaderboardBtn->setEnabled(false);
	}
}

void MenuScreen::clearPurchaseView()
{
    if (_purchaseView)
    {
        _purchaseView->getParent()->removeChild(_purchaseView);
        _purchaseView = nullptr;
    }
}

void MenuScreen::menuCallback(Ref * pSender)
{
	switch (dynamic_cast<Node*>(pSender)->getTag())
	{
        case 0:
        {
            InAppHandler::restoreTransactions();
        }
            break;
		case 1:
        {
            CallFunc * func = CallFunc::create(CC_CALLBACK_0(MenuScreen::clearPurchaseView, this));
            func->retain();
            
            //do purchase view
            _purchaseView = PurchaseView::create();
            _purchaseView->construct("ui/noads.csb", func);
            _purchaseView->retain();
            _innerContainer->addChild(_purchaseView);
            float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.75) / _purchaseView->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.75) / _purchaseView->getContentSize().height);
            _purchaseView->getLayout()->setScale(maxRatio);
            
            {
                auto listener = EventListenerCustom::create(ClickEvent::CLICK, CC_CALLBACK_1(MenuScreen::onPurchaseViewCallback, this));
                _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, _purchaseView);
            }
        }
			break;
        case 2:
            GameSharing::openGameCenterLeaderboardsUI(0);
            break;
        case 3:
            //do show credits
            {
                //do purchase view
                _creditsPopup = CreditsPopup::create();
                _creditsPopup->construct("ui/credits.csb");
                _creditsPopup->retain();
                _innerContainer->addChild(_creditsPopup);
                
                float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.75) / _creditsPopup->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.75) / _creditsPopup->getContentSize().height);
                _creditsPopup->getLayout()->setScale(maxRatio);
            }
            break;
		default:
			break;
	}
}

void MenuScreen::onPurchaseViewCallback(cocos2d::EventCustom *event)
{
    if (event->getUserData() == _purchaseView)
    {
        ClickEvent * pEvent = (ClickEvent*)event;
        
        if (pEvent->nodeName == "closebtn")
        {
            CallFunc * func = CallFunc::create(CC_CALLBACK_0(MenuScreen::clearPurchaseView, this));
            Utility::delayedCall(this, func);
        }
        else if (pEvent->nodeName.find("addbtn") != std::string::npos)
        {
            std::string clickIndex(pEvent->nodeName.substr(6, pEvent->nodeName.length()));
            clickIndex = clickIndex.substr(0, 1);
            int selectedIndex = atoi(clickIndex.c_str());
            CC_ASSERT((selectedIndex < 10));
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            InAppHandler::purchaseProduct(selectedIndex);
#endif
        }
    }
}

void MenuScreen::showWorldSelectionScreen()
{
    GameSharing::hideFBLike(true);
    
	Scene * scene;
	scene = NewLevelSelectionScreen::createScene();
	Director::getInstance()->replaceScene(TransitionFade::create(1.0, scene));
}
