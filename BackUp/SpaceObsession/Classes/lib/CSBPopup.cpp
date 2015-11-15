//
//  CSBPopup.cpp
//  MazeDev
//
//  Created by Sillyatom on 16/11/14.
//
//

#include "CSBPopup.h"
#include "Utility.h"
#include "Constants.h"

bool CSBPopup::init()
{
    if (!Layer::init())
    {
        return false;
    }
    
    _canClick = true;
    
    setAnchorPoint(Vec2(0.5, 0.5));
    
    //add event listener
    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    listener->onTouchBegan = CC_CALLBACK_2(CSBPopup::onTouchBegan, this);
    listener->onTouchEnded = CC_CALLBACK_2(CSBPopup::onTouchEnded, this);
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}

void CSBPopup::onExit()
{
    _layout->getParent()->removeChild(_layout);
    _layout = nullptr;
    
    Node::onExit();
}

void CSBPopup::removeChild(Node* child, bool cleanup)
{
    Node::removeChild(child, cleanup);
}

void CSBPopup::construct(std::string fileName)
{
    _layout = static_cast<cocos2d::ui::Layout*>(cocostudio::GUIReader::getInstance()->widgetFromBinaryFile(std::string(fileName).c_str()));
    addChild(_layout);
    _layout->setAnchorPoint(Vec2(0.5, 0.5));
    setContentSize(Size(_layout->getContentSize().width, _layout->getContentSize().height));
    _layout->setPosition(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5), Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5)));
}

void CSBPopup::scrollCallback(cocos2d::Ref *pSender, int val)
{
}

void CSBPopup::touchCallback(cocos2d::Ref *pSender, Widget::TouchEventType event)
{
    if (_canClick && event == Widget::TouchEventType::ENDED)
    {
        _canClick = false;    
        Node * selectedNode = dynamic_cast<Node*>(pSender);
        
        ClickEvent clickEvent(ClickEvent::CLICK);
        clickEvent.setUserData(this);
        clickEvent.tag = selectedNode->getTag();
        clickEvent.nodeName = selectedNode->getName();
        _eventDispatcher->dispatchEvent(&clickEvent);
    }
}

bool CSBPopup::onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event)
{
    return true;
}

void CSBPopup::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event)
{
    
}