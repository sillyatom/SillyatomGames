//
//  NewLevelSelectionScreen.h
//  MyCppGame
//
//  Created by Sillyatom on 17/02/15.
//
//

#ifndef __MyCppGame__NewLevelSelectionScreen__
#define __MyCppGame__NewLevelSelectionScreen__
#pragma once
#include "cocos2d.h"
#include "Game.h"
#include "popups/LevelSelectionPopup.h"
#include "cocostudio/CocoStudio.h"
#include "ui/cocosGui.h"

USING_NS_CC;

class LevelObject
{
public:
    int lightIndex;
    Button * btn;
    int index;
};

class NewLevelSelectionScreen : public ExtLayer
{
	static const int MAX_LIGHT_INDEX = 10;
    
    int _unlockedLevel;
    
    Sprite * _marker;
    Sprite * _meteorContainer;
    LevelSelectionPopup * _popup;
    void onLevelSelectionCallback(EventCustom * event);
#if(ENABLE_SHADERS == 1)
    static GLProgramState * glProgramState;
#endif
    std::vector<LevelObject*> _levelObjects;
    
    //for bg animations
    void addMeteorShower(float dt);
    
    void initLevelObjects();
    void checkBounds();
    
    void onControlCallback(cocos2d::Ref *sender);
    void createMainMenuScreen();
    
    Menu * _menu;
    Widget * _innerContainer;
    Widget * _layer1;
    Widget * _layer2;
    
public:
    ~NewLevelSelectionScreen();
    #if(ENABLE_SHADERS == 1)
    int _activeLights[MAX_LIGHT_INDEX][1];
    int chooseLightIndex();
    void removeLightIndex(int val);
    void resetLightAtIndex(int index);
    void resetLights();
    void updateLights();
    void updateLight(int index, Vec2 pos, Vec3 lightColor);
#endif
    void createGameScene();
    LevelSelectionPopup * getPopup(){ return _popup; }
    static cocos2d::Scene* createScene();
    CREATE_FUNC(NewLevelSelectionScreen);
    virtual bool init();

    virtual void onUpdate(float dt);
    virtual void destroyAll();
    
    virtual void visit(
                       Renderer *renderer,
                       const Mat4& parentTransform,
                       uint32_t parentFlags);
	virtual void onEnter();
	virtual void onEnterTransitionDidFinish();
    void update(float dt);
protected:

	virtual void onRemoveLoadingScreen();

};

#endif /* defined(__MyCppGame__NewLevelSelectionScreen__) */
