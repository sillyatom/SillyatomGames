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
    float _timeElapsed;
    float _queueTime;
    Network * _network;
    EventListenerCustom * _customListener;
    
    void onNetworkEvent(cocos2d::EventCustom * event);

protected:
    cocos2d::EventListenerTouchOneByOne * _listener;
    ExtSprite * _gameContainer;
    
    void addTouchListeners();
    void addCustomListeners();
    void removeCustomListeners();
    
    void startUpdate();
    virtual void update(float dt);
    
    virtual void onReceiveNetworkData(int type, rapidjson::Document & data);
    
    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);
    
    void replaceScene(cocos2d::Scene * scene);
public:
    CREATE_FUNC(ExtLayer);
    static cocos2d::Scene * createScene();
    virtual bool init();
    virtual void onExit();
};
#endif /* ExtLayer_hpp */
