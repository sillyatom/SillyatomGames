//
//  ExtLayer.cpp
//  CardGame
//
//  Created by Sillyatom on 01/03/16.
//
//

#include "ExtLayer.h"
#include "../Constants/GameConstants.h"
#include <typeinfo>

cocos2d::Scene * ExtLayer::createScene()
{
    auto scene = cocos2d::Scene::create();
    auto layer = ExtLayer::create();
    scene->addChild(layer);
    return scene;
}

bool ExtLayer::initWithData(APILayer layer)
{
    if (!Layer::init())
    {
        return false;
    }

    _layer = layer;
    
    _timeElapsed = 0.0f;
    _queueTime = 0.5f;
    
    _gameContainer = ExtSprite::create();
    addChild(_gameContainer);
    
    _network = Network::getInstance();

    startUpdate();
    
    return true;
}

void ExtLayer::onReceiveNetworkData(int type, rapidjson::Document &data)
{
    
}

void ExtLayer::addTouchListeners()
{
    _listener = cocos2d::EventListenerTouchOneByOne::create();
    _listener->onTouchBegan = CC_CALLBACK_2(ExtLayer::onTouchBegan, this);
    _listener->onTouchEnded = CC_CALLBACK_2(ExtLayer::onTouchEnded, this);
    _listener->onTouchMoved = CC_CALLBACK_2(ExtLayer::onTouchMoved, this);
    _listener->onTouchCancelled = CC_CALLBACK_2(ExtLayer::onTouchCancelled, this);
    
    cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(_listener, this);
}

bool ExtLayer::onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event)
{
    return false;
}

void ExtLayer::onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void ExtLayer::onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void ExtLayer::onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event)
{
    
}

void ExtLayer::startUpdate()
{
    scheduleUpdate();
}

void ExtLayer::update(float dt)
{
    _timeElapsed += dt;
    
    if (_timeElapsed >= _queueTime)
    {
        NetworkEvent * event = _network->popEvent(_layer);
        if (event != nullptr)
        {
            rapidjson::Document document;
            document.Parse<0>(event->data);
            int type = document["api"].GetInt();
            onReceiveNetworkData(type, document);
            delete event;
        }
        _timeElapsed = 0.0f;
    }
}

void ExtLayer::replaceScene(cocos2d::Scene *scene)
{
    unscheduleUpdate();
    Director::getInstance()->replaceScene(TransitionFade::create(1.0f, scene));
}

void ExtLayer::onExit()
{
}