//
//  ExtLayer.hpp
//  CardGame
//
//  Created by Sillyatom on 01/03/16.
//
//

#ifndef ExtLayer_hpp
#define ExtLayer_hpp

#include <stdio.h>
#include "cocostudio/CocoStudio.h"
#include "ExtSprite.h"
#include "cocos2d.h"
#include "cocosGUI.h"
#include "../Network/NetworkConstants.h"
#include "../Network/Network.h"
#include "../Events/NetworkEvent.h"

#include "external/json/document.h"
//#include "external/json/writer.h"
//#include "external/json/stringbuffer.h"

class ExtLayer : public cocos2d::Layer
{
private:
    APILayer _layer;
    
    float _timeElapsed;
    float _queueTime;
    bool _paused;
    
    Network * _network;
    
protected:
    cocos2d::EventListenerTouchOneByOne * _listener;
    ExtSprite * _gameContainer;
    
    void pauseUpdate(){ _paused = true; }
    void resumeUpdate(){ _paused = false; }
    
    void addTouchListeners();
    
    void startUpdate();
    virtual void update(float dt);
    
    virtual void onReceiveNetworkData(int type, rapidjson::Document & data);
    
    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);
    
    void replaceScene(cocos2d::Scene * scene);
    virtual bool initWithData(APILayer layer);

public:
    static cocos2d::Scene * createScene();
    virtual void onExit();
};
#endif /* ExtLayer_hpp */
