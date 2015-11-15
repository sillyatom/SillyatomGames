//
//  CreditsPopup.cpp
//  VoidShot
//
//  Created by Sillyatom on 29/04/15.
//
//

#include "CreditsPopup.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../lib/Utility.h"

void CreditsPopup::construct(std::string fileName)
{
    _clearParticle = FirePlistParticle::create();
    _clearParticle->initWithFile("plist/mainScreenEffect.plist");
    _clearParticle->setAnchorPoint(Vec2(0.5, 0.0));
    _clearParticle->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), 0.0);
    _clearParticle->setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(10)));
    addChild(_clearParticle);
    _clearParticle->setBlendAdditive(true);
    
    _clearParticle->setScale(3.0);
    _clearParticle->setPosVar(Vec2(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(100.0)));
    
    CSBPopup::construct(fileName);
    scheduleUpdate();
    
    _scrollView = Helper::seekWidgetByName(_layout, "scrollview");
    
    auto closeBtn = MenuItemImage::create("ui/btns/noadsbtn.png", "ui/btns/noadsbtn.png", "ui/btns/noadsbtn.png", CC_CALLBACK_1(CreditsPopup::menuCallback, this));
    closeBtn->setAnchorPoint(Vec2(0.5, 0.5));
    closeBtn->setScale(Utility::getDevicePositionY(40.0)/closeBtn->getBoundingBox().size.width, Utility::getDevicePositionY(40.0)/closeBtn->getBoundingBox().size.width);
    closeBtn->setPosition(Vec2::ZERO);
    closeBtn->setTag(1);
    
    auto _menu = Menu::create(closeBtn, NULL);
    _menu->setAnchorPoint(Vec2(0.5, 0.5));
    _menu->setPosition(- Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5) + closeBtn->getBoundingBox().size.width,
                       - Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5) + closeBtn->getBoundingBox().size.height);
    addChild(_menu);
}

void CreditsPopup::menuCallback(cocos2d::Ref *pSender)
{
    switch (dynamic_cast<Node*>(pSender)->getTag())
    {
        case 1:
        {
            CallFunc * func = CallFunc::create(CC_CALLBACK_0(CreditsPopup::removePopup, this));
            Utility::delayedCall(this, func);
        }
            break;
        default:
            break;
    }
}

void CreditsPopup::removePopup()
{
    if (_clearParticle)
    {
        _clearParticle->stopSystem();
        _clearParticle->getParent()->removeChild(_clearParticle);
        _clearParticle = nullptr;
    }
    getParent()->removeChild(this);
}

void CreditsPopup::update(float dt)
{
    _scrollView->setPositionY(_scrollView->getPositionY() + 0.25);
    
    if (_scrollView->getPositionY() > getBoundingBox().size.height + Utility::getDevicePositionY(REF_GAME_HEIGHT))
    {
        _scrollView->setPositionY(0.0);
    }
}