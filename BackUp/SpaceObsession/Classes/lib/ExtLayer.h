#ifndef _EXT_LAYER_H_
#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "HUD.h"
#include "ScrollingLayer.h"
#include "PhysicsEnvironment.h"
#include "LoadingScreen.h"

USING_NS_CC;

class ExtLayer : public cocos2d::LayerColor
{
    b2World * _world;
    int _gameStartCountDown;
   
    Label * _label;
    
public:
	~ExtLayer();
	CREATE_FUNC(ExtLayer);
	static cocos2d::Scene * createScene();
    
	virtual bool init();

	void addShaderProgram(GLProgram * program);
	bool getIsCleaned(){ return _isCleaned; };
    void setIsCleaned(bool value){ _isCleaned = value; };
    Vec2 getVisibleOrigin(){ return visibleOrigin; };
    Size getVisibleSize(){ return visibleSize; };
   
	virtual void visit(
		Renderer *renderer,
		const Mat4& parentTransform,
		uint32_t parentFlags);
    
    virtual void draw(Renderer* renderer, const Mat4 &transform, uint32_t flags);
    
protected:
    bool _isCleaned;
    
    RenderTexture* renderTexture;
	LoadingScreen * _loadingScreen;
	Sprite* rendTexSprite;

	Size visibleSize;
	Vec2 visibleOrigin;

    HUD * _hud;
    PhysicsEnvironment * _physxEnv;
    ScrollingLayer * _scrollingBG;
    
    Sprite * _shaderExcludeContainer;
    Sprite * _otherExcludeContainer;
    Sprite * _gameContainer;
    Sprite * _controlsContainer;
    
    void addContainer();
	void addLoadingScreen();
	virtual void onAddLoadingScreen(){};
	void removeLoadingScreen();
	virtual void onRemoveLoadingScreen(){};

    void addGameStartTimer();
    void startGameTimer();
    virtual void closeGame();
    virtual void resetGame();
    virtual void onUpdate(float dt);
    virtual void onGameStartTickComplete();
    virtual void onStartGameTimer(float dt);
    virtual void closeLevel();
    
    void addPhysics();
	virtual void callOnceBeforeUpdate(){};
	void startUpdate();
    void gameStartTick(float dt);
    void destroyAll();
};
#endif
