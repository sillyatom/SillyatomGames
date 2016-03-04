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

class ExtLayer : public cocos2d::Layer
{
private:
    void onNetworkEvent(cocos2d::EventCustom * event);

protected:
    cocos2d::EventListenerTouchOneByOne * _listener;
    ExtSprite * _gameContainer;
    
    void addTouchListeners();
    void addCustomListeners();
    
    virtual void onReceiveNetworkData(int type, rapidjson::Document & data);
    
    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);
    
public:
    CREATE_FUNC(ExtLayer);
    static cocos2d::Scene * createScene();
    virtual bool init();
};
#endif /* ExtLayer_hpp */
