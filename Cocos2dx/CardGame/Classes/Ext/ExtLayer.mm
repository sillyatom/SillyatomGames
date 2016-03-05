//
//  ExtLayer.cpp
//  CardGame
//
//  Created by Sillyatom on 01/03/16.
//
//

#include "ExtLayer.h"

cocos2d::Scene * ExtLayer::createScene()
{
    auto scene = cocos2d::Scene::create();
    auto layer = ExtLayer::create();
    scene->addChild(layer);
    return scene;
}

bool ExtLayer::init()
{
    if (!Layer::init())
    {
        return false;
    }
    
    _timeElapsed = 0.0f;
    _queueTime = 0.5f;
    
    _gameContainer = ExtSprite::create();
    addChild(_gameContainer);
    
    _network = Network::getInstance();
    
    return true;
}

void ExtLayer::addCustomListeners()
{
    _customListener = EventListenerCustom::create(NetworkEvent::NETWORKEVENT_TYPES, CC_CALLBACK_1(ExtLayer::onNetworkEvent, this));
    cocos2d::Director::getInstance()->getEventDispatcher()->addEventListenerWithFixedPriority(_customListener, 1);
}

void ExtLayer::removeCustomListeners()
{
    cocos2d::Director::getInstance()->getEventDispatcher()->removeEventListener(_customListener);
    _customListener->release();
}

void ExtLayer::onNetworkEvent(cocos2d::EventCustom * event)
{
    NetworkEvent * nwEvent = (NetworkEvent*)event;
    rapidjson::Document document;
    document.Parse<0>(nwEvent->data.c_str());
    int type = document["api"].GetInt();
    onReceiveNetworkData(type, document);
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
        EventCustom * event = _network->popEvent();
        if (event != nullptr)
        {
            onNetworkEvent(event);
        }
        _timeElapsed = 0.0f;
    }
}

void ExtLayer::replaceScene(cocos2d::Scene *scene)
{
    unscheduleUpdate();
    removeCustomListeners();
    Director::getInstance()->replaceScene(TransitionFade::create(1.0f, scene));
}