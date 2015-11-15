#ifndef _GAME_H_
#pragma once
#include "cocos2d.h"

#include "Helper.h"
#include "lib/ExtLayer.h"
#include "ParseLevelElements.h"
#include "network/HttpClient.h"

#include "Bulb.h"
#include "bulbs/RotatingBulb.h"
#include "balls/Ball.h"
#include "Helper.h"
#include "PhysicsBox.h"
#include "FillBlocks.h"
#include "ArcElement.h"
#include "CannonShots.h"

#include "lib/Utility.h"
#include "lib/ConfigFile.h"
#include "lib/AnimationHandler.h"

#include "Constants.h"
#include "popups/LevelIntro.h"
#include "popups/LevelOutro.h"
#include "Inventory.h"
#include "popups/InventoryView.h"
#include "popups/PurchaseView.h"
#include "popups/GenericPopup.h"
#include "PowerupPanel.h"
#include "NewLevelSelectionScreen.h"
#include "CollectedBulbPanel.h"
#include "MeteorShower.h"
#include "PickManager.h"

#include "particles/BgRainParticles.h"
#include "particles/CountReductionParticle.h"
#include "particles/CosmicBulbParticle.h"
#include "particles/BulbParticle.h"
#include "particles/DarkParticle.h"
#include "particles/FireRectParticle.h"
#include "particles/DeadBulbParticles.h"
#include "particles/ExplodeParticle.h"
#include "particles/PlatformParticles.h"
#include "particles/StarAnimBgParticle.h"
#include "particles/FirePlistParticle.h"
#include "particles/MeteorPlistParticle.h"

#include "animations/FireShowerAnim.h"
#include "animations/FlyingText.h"
#include "animations/MultiplierAnim.h"
#include "animations/FlyingMeteor.h"
#include "animations/FlyingMeteorHandler.h"
#include "animations/RoundEndAnim.h"
#include "animations/OnUpdateHandler.h"
#include "animations/MovingPlanets.h"

#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output
#include "../cocos2d/external/json/stringbuffer.h" 

#include "CSBLayer/ScrollingBG.h"

USING_NS_CC;

using namespace ui;

enum ENUM_LEVEL_STATUS
{
	e_FAIL = 0,
	e_WIN = 1,
	e_RETRY = 2,
	e_NONE
};

class Game : public ExtLayer
{
private:
	const float SCROLL_SPEED_1 = -6.0;
	const float SCROLL_SPEED_2 = -3.0;
	const float SCROLL_SPEED_3 = -1.0;

	float _scrollFactor;

	Sprite * bg;
	Sprite * _wave1;
	Sprite * _wave2;
	Sprite * _particleLayer;
	Sprite * _layer1;
	Sprite * _layer2;
	Sprite * _layer3;
	Menu * _menu;

	FirePlistParticle * _smokeParticle;
	FirePlistParticle * _spaceParticle;

	Label * _tapLabel;
	
    float _lightIntensity;
	float _playerLightIntensity;
	
    int _depthOrder;
    int _newLevelNum;
    
	bool _isTimerMode;
	bool _needMarker;
	
    bool _canApplyForce;
	bool _zoomTriggered;

	Vec2 _playerPosition;
	b2Vec2 _playerLastPosition;

	Vec2 _worldXLimits;
	Vec2 _worldYLimits;

	//popups
	LevelIntro * _levelIntro;
	GenericPopup * _genericPopup;

	//animations
	AnimationHandler * _animHandler;

	//game elements
	BgRainParticles * _bgparticle;
	
    //config file
    ConfigFile * _configFile;
    
	bool _canShoot;
	bool _pauseControl;

	std::string _selectedBall;

	void moveIn();
	void moveOut();
	void moveMenuOut();
	void moveMenuIn();
	void playLevelStartAnim();
	void removeTouchListener();
	void addTouchListener();
	void addForce(cocos2d::Touch *touch);
	void addForceAnim(cocos2d::Touch *touch, Vec2 unitVec);
    
    void onCollideWithCannonShot();
    void releaseControl(float dt);
    
	void checkLightBounds();
	void updateMarkersPosition(b2Vec2 delta);
	void updateLayerScroll(b2Vec2 delta);
	void updatePhysicsObjectScroll(b2Vec2 flag, b2Vec2 delta);
	void createBgSetting(const rapidjson::Value& obj);

	void dummyLoadingScreenStay();
	void showGenericPopup(std::string desc, CallFunc * okFunc, CallFunc * cancelFunc);
	void clearGenericPopup();
	void gotoMainMenu();
	void closeGenericPopWithAnim();
	void popupStartAnim(CSBPopup * popup);
	void popupCloseAnim(CSBPopup * popup, CallFunc * func, CallFunc * func1 = nullptr);

	BulbParticle* addBulbParticle(float x, float y, Color4F startColor);
	DeadBulbParticles* addDeadBulbParticle(float x, float y, Color4F startColor);
	CosmicBulbParticle* addCosmicBulbParticle(float x, float y, Color4F startColor);

	cocos2d::Vec3 _availableBulbColors[7];
	std::vector<cocos2d::Vec3> _remainingBulbColors;

	void ResetTimeScale();
	cocos2d::Vec3 chooseColorForBulb();
	void addBgAnimation(); //rotating planets and moving meteors
	void shootBall();
	void addCollisionParticles(Color4F color, float x, float y);
	void addExplosionParticles(Color4F color, float x, float y);
	void onBuildLevel();
	void checkAndClose();
	void ShowLevelSelectionScreen();
	void loadNextLevel();
	void RestartLevel();

	void onNextRound();
	void addPlayer(float x, float y, float radius, b2Vec2 velocity);
	void createPlayer(std::string selectedBall, float x, float y, float radius, b2Vec2 velocity);
	void createMeteorShot(std::string selectedBall, float x, float y, float radius, b2Vec2 velocity);
	void updateBulbsSensor(bool val);
	void createMeteorShower(const rapidjson::Value & object);

	void addWall(float x, float y, float width, float height, ENUM_OBJECT enumObj);
	void setPlayersToDead();
	void removePlayers();
	void removeDynamicObjects();
	void removeBulbs();
	Vec2 getBallPosition();

	void addBgParticles();
	void addReductionCountParticles(float x, float y, cocos2d::Color4F startColor, Vec2 endPosition, CallFunc * func = nullptr);
	void addCosmicBlastParticles(float x, float y, cocos2d::Color4F startColor, Vec2 endPosition);
	void addDarkParticles(float x, float y, cocos2d::Color4F startColor, Vec2 endPosition, float angle);

#if (ENABLE_SHADERS == 1)
	static GLProgramState * glProgramState;
	void initLayerShader();
	int _activeLights[15][15];
	int chooseLightIndex();
	void removeLightIndex(PhysicsSprite* object);
	void reduceLightIntensity();
	void resetLightAtIndex(int index);
	void resetLights();
	void updateLights();
#endif

	void addControlsBtn();
	void ExtractLevelFromFile();
	void addShowerMeter();
	void ExtractObjectFromFile(int worldNum, int slideNum);
	void removePlayer(Ball * player);
	void onEventCallback(EventCustom * event);

	void onHttpResponse(network::HttpClient * client, network::HttpResponse * response);
	void onControlCallback(Ref * sender);
	void updateBulbColor(PhysicsSprite* bulb);
	void CreateCannonShots(float x, float y, float radius, Point direction);

public:
	~Game();
	static cocos2d::Scene* createScene();
	CREATE_FUNC(Game);
	virtual bool init();
	virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
	virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);

	virtual void onEnter();
	virtual void onEnterTransitionDidFinish();

	bool isZoomTriggered(){ return _zoomTriggered; };
	void doZoom(Bulb* bulb);
	void doZoomOut();

#if (ENABLE_SHADERS == 1)
	static void updateLight(PhysicsSprite* obj, Vec2 pos);
#endif

	virtual void onLevelOutroCallback(EventCustom * event);
	virtual void onLevelIntroCallback(EventCustom * event);

	std::vector<Bulb*> getBulbs(){ return _bulbs; }
	virtual	void draw(cocos2d::Renderer* renderer, const cocos2d::Mat4 &transform, uint32_t flags);

protected:
	virtual void onDraw(const cocos2d::Mat4 &transform, uint32_t flags);

	std::vector<PhysicsSprite*> _dynamicObjects;
    std::vector<CannonShots*> _cannonShotObjects;
    
	std::vector<Bulb*> _bulbs;
	std::vector<Ball*> _players;

	virtual void callOnceBeforeUpdate();

	LevelOutro * _levelOutro;

	bool _forceCloseLevel;
	ENUM_LEVEL_STATUS _levelStatus;   // 1 - win, 0 - fail

	void addLightToObject(PhysicsSprite * object);
	virtual void showLevelIntro(std::string fileName);
	virtual void showLevelOutro();
	virtual void showLevelOutroFail();
    
	virtual void clearLevelIntro();
	virtual void clearLevelOutro();

	virtual void closeLevel();
	virtual void destroyAll();
	virtual void onUpdate(float dt);
	virtual void onStartGameTimer(float dt);
	virtual void onGameStartTickComplete();

	virtual void BuildLevel(rapidjson::Document& document);

	virtual RotatingBulb* CreateBulb(const rapidjson::Value& obj);

	virtual void CreateRectBulb(const rapidjson::Value& obj, ENUM_BULB_TYPE enumId);
	virtual void CreateRect(const rapidjson::Value& obj, bool isGravityBar = false);
	virtual void CreateCannon(const rapidjson::Value& obj);

	virtual void CreateMovingRect(const rapidjson::Value& obj);

	void checkEndGameCondition();
	void updateElements(float dt);
	bool noDynamicBulbs();
	int bulbsLeft(ENUM_BULB_TYPE e_type);

	void onCollidesRedBulb(cocos2d::EventCustom *event);
	void onGameEvent(cocos2d::EventCustom *event);
};
#endif
