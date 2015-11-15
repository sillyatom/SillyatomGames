#ifndef _MENU_SCREEN_H_
#define _MENU_SCREEN_H_

#include "cocos2d.h"

#include "../particles/FirePlistParticle.h"
#include "../particles/BgRainParticles.h"

#include "../popups/PurchaseView.h"
#include "../popups/CreditsPopup.h"

#include "WaitingScreen.h"

USING_NS_CC;

class MenuScreen : public cocos2d::Layer
{
	void menuCallback(Ref * pSender);
	MenuItemImage * _leaderboardBtn;
	MenuItemImage * _signInBtn;
	MenuItemImage * _signOutBtn;

	FirePlistParticle * _clearParticle;
	Sprite * _bg;
	Sprite * _character;
	Sprite * _meteorContainer;
    
    Sprite * _innerContainer;
    Sprite * _outerContainer;
    
	void runNextScene();
	void addClearScreen();
	void changeBtnStatus(float dt);
    void clearPurchaseView();
    void onPurchaseViewCallback(cocos2d::EventCustom *event);
    void showWorldSelectionScreen();
    void onGameEvent(EventCustom* event);
    
	FirePlistParticle * vehicleParticle;

    Menu * _menu;
    
    CreditsPopup * _creditsPopup;
    PurchaseView * _purchaseView;
    WaitingScreen * _waitingScreen;
    
    void showWaitingScreen(std::string labelString);
    void clearWaitingScreen();
    
public:
	static int signInStatus;

	static cocos2d::Scene* createScene();

	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();  

	// implement the "static create()" method manually
	CREATE_FUNC(MenuScreen);
	void loadGame();
    void onEvent(cocos2d::EventCustom *event);

	//for bg animations
	void addMeteorShower(float dt);

	//for touch controls
	virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
	virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
	virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    
};
#endif
