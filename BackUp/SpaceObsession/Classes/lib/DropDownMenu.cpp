//
//  DropDownMenu.cpp
//  MazeDev
//
//  Created by Sillyatom on 13/11/14.
//
//

#include "DropDownMenu.h"
#include "Utility.h"
#include "Constants.h"

bool DropDownMenu::init()
{
    if (!Layer::init())
    {
        return false;
    }
    
    _selectedTag = 1;
    _isDropped = false;
    
    return true;
}

void DropDownMenu::addItem(std::string fileName)
{
    //auto btn = MenuItemImage::create((fileName + "_normal.png"), (fileName + "_selected.png"), (fileName + "_disabled.png"),
      //                                 CC_CALLBACK_1(DropDownMenu::onClickCallback, this));
    auto btn = MenuItemImage::create((fileName + ".png"), (fileName + ".png"), (fileName + ".png"),
                                     CC_CALLBACK_1(DropDownMenu::onClickCallback, this));
    btn->setAnchorPoint(Vec2(0.5, 0.0));
    btn->setScaleX(Utility::getDevicePositionX(20)/btn->getContentSize().width);
    btn->setScaleY(Utility::getDevicePositionY(20)/btn->getContentSize().height);
   
    _menuItems.pushBack(btn);
    int size = _menuItems.size();
     btn->setTag(size);
}

void DropDownMenu::onClickCallback(cocos2d::Ref *pSender)
{
    int tag = dynamic_cast<Node*>(pSender)->getTag();
    if (!_isDropped)
    {
        dropMenu(_selectedTag);
    }
    else
    {
        ClickEvent event(ClickEvent::CLICK);
        event.setUserData(this);
        event.tag = tag;
        _selectedTag = tag;
        CCLOG("tag : %d", _selectedTag);
        _eventDispatcher->dispatchEvent(&event);
        reAlign(_selectedTag);
    }
}

void DropDownMenu::reAlign(int tag)
{
    _isDropped = false;
    int index = 1;
    for (cocos2d::Vector<MenuItem*>::iterator iter = _menuItems.begin(); iter != _menuItems.end(); iter++)
    {
        if ((*iter)->getTag() == tag)
        {
            (*iter)->setPosition(0.0, 0.0);
        }
        else
        {
            (*iter)->setPosition(0, -index * Utility::getDevicePositionY(22));
            (*iter)->setVisible(false);
            index++;
        }
    }
}

void DropDownMenu::dropMenu(int tag)
{
    _isDropped = true;
    int index = 1;
    for (cocos2d::Vector<MenuItem*>::iterator iter = _menuItems.begin(); iter != _menuItems.end(); iter++)
    {
        if ((*iter)->getTag() == tag)
        {
            (*iter)->setPosition(0.0, 0.0);
        }
        else
        {
            (*iter)->setPosition(0, -index * Utility::getDevicePositionY(22));
            (*iter)->setVisible(true);
            index++;
        }
    }
}

void DropDownMenu::construct()
{
    _menu = Menu::createWithArray(_menuItems);
    _menu->setPosition(Vec2::ZERO);
    addChild(_menu);
    
    reAlign(1);
}