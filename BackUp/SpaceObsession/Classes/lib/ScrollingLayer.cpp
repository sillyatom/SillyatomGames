//
//  ScrollingLayer.cpp
//  MazeDev
//
//  Created by Sillyatom on 29/09/14.
//
//
#include "Constants.h"
#include "PhysicsBox.h"
#include "ScrollingLayer.h"

Scene* ScrollingLayer::createScene()
{
    auto scene = Scene::create();
    auto layer = ScrollingLayer::create();
    scene->addChild(layer);
    return scene;
}

bool ScrollingLayer::init()
{
    if (!Layer::init())
    {
        return false;
    }

    _currentRunningIndex = 0;
    _slideNum = -1;
    
    return true;
}

void ScrollingLayer::addSlide(std::string fileName)
{
    Sprite * bg = Sprite::create(fileName);
    bg->setAnchorPoint(Vec2(0.0, 0.0));
    bg->setScaleX(_visibleSize.width/bg->getContentSize().width);
    bg->setScaleY(_visibleSize.height/bg->getContentSize().height);
    addChild(bg);
    float dx = _slideNum * _visibleSize.width;
    float dy = 0;
    bg->setPosition(dx, dy);
    _slides.push_back(bg);
    _slideNum++;
}

void ScrollingLayer::removeSlide()
{
    std::vector<Sprite*>::iterator iter = _slides.begin();
    (*iter)->getParent()->removeChild(*iter, true);
    iter = _slides.erase(iter);
}

void ScrollingLayer::onUpdate(float dt)
{
//    for (std::vector<Sprite*>::iterator iter = _slides.begin(); iter != _slides.end(); iter++)
//    {
//        CCLOG("iter %f ", convertToWorldSpace((*iter)->getPosition()).x);
//    }
//    CCLOG("______________________");
}