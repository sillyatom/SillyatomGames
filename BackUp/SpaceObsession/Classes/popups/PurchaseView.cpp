//
//  PurchaseView.cpp
//  MyCppGame
//
//  Created by Sillyatom on 24/01/15.
//
//

#include "PurchaseView.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../PlayerData.h"
#include "../lib/GameSaveData.h"
#include "../lib/Utility.h"
#include "GenericPopup.h"
#include "../lib/InAppHandler.h"

void PurchaseView::onExit()
{
    if (_clearCallFunc)
    {
        _clearCallFunc->release();
        _clearCallFunc = NULL;
    }
    
    CSBPopup::onExit();
}

void PurchaseView::construct(std::string fileName, CallFunc * clearCallFunc)
{
    _purchaseContent["com.sillyatomgames.voidshots.removeads"] = 500000;
//    _purchaseContent["com.sillyatomstudios.liteshots.mediumenergypack"] = 200000;
//    _purchaseContent["com.sillyatomstudios.liteshots.smallenergypack"] = 50000;

    CSBPopup::construct(fileName);
    
    _clearCallFunc = clearCallFunc;
    
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "closebtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(PurchaseView::touchCallback, this));
    }

    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    InAppHandler::getProductsList(this);
#endif
}

void PurchaseView::initView()
{
    Widget * itemView = Helper::seekWidgetByName(_layout, "noads");
    
    for (int index = 1;;index++)
    {
        std::ostringstream oss;
        oss<<"holder"<<index;
        Widget * holder = Helper::seekWidgetByName(itemView, oss.str().c_str());
        if (holder)
        {
            holder->setVisible(false);
        }
        else
        {
            break;
        }
    }
}

void PurchaseView::activate(bool val)
{
    Widget * itemView = Helper::seekWidgetByName(_layout, "noads");
    
    for (int index = 1;;index++)
    {
        std::ostringstream oss;
        oss<<"holder"<<index;
        Widget * holder = Helper::seekWidgetByName(itemView, oss.str().c_str());
        if (holder)
        {
            oss<<"addbtn";
            Button * addBtn = static_cast<Button*>(Helper::seekWidgetByName(holder, oss.str()));
            addBtn->setEnabled(val);
            addBtn->setBright(val);
            {
                Button * btn = static_cast<Button*>(Helper::seekWidgetByName(holder, oss.str()));
                btn->addTouchEventListener(CC_CALLBACK_2(PurchaseView::touchCallback, this));
            }
        }
        else
        {
            break;
        }
    }
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "closebtn"));
        btn->setEnabled(val);
        btn->setBright(val);
    }
}

void PurchaseView::enable(bool val)
{
    Widget * itemView = Helper::seekWidgetByName(_layout, "noads");
    
    for (int index = 1;;index++)
    {
        std::ostringstream oss;
        oss<<"holder"<<index;
        Widget * holder = Helper::seekWidgetByName(itemView, oss.str().c_str());
        if (holder)
        {
            holder->setVisible(val);
            oss<<"addbtn";
            Button * addBtn = static_cast<Button*>(Helper::seekWidgetByName(holder, oss.str()));
            addBtn->setEnabled(val);
            addBtn->setBright(val);
            {
                Button * btn = static_cast<Button*>(Helper::seekWidgetByName(holder, oss.str()));
                btn->addTouchEventListener(CC_CALLBACK_2(PurchaseView::touchCallback, this));
            }
        }
        else
        {
            break;
        }
    }
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "closebtn"));
        btn->setEnabled(val);
        btn->setBright(val);
    }
}

void PurchaseView::touchCallback(cocos2d::Ref *pSender, Widget::TouchEventType event)
{
    if (event == Widget::TouchEventType::ENDED)
    {
        Widget * selectedNode = dynamic_cast<Widget*>(pSender);
        
        ClickEvent clickEvent(ClickEvent::CLICK);
        clickEvent.setUserData(this);
        clickEvent.tag = selectedNode->getTag();
        clickEvent.isActive = (selectedNode->isBright());
        clickEvent.nodeName = selectedNode->getName();
        _eventDispatcher->dispatchEvent(&clickEvent);
    }
}

void PurchaseView::updateHoldersView()
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    std::vector<ProductDetails*> list = InAppHandler::getInstance()->_productList;
    Widget * itemView = Helper::seekWidgetByName(_layout, "noads");
    int index = 1;
    
    for (auto iter = list.begin(); iter != list.end(); iter++)
    {
        std::ostringstream oss; oss<<"holder"<<index;
        Widget * holder = Helper::seekWidgetByName(itemView, oss.str().c_str());
        if (holder)
        {
            {
                ui::TextBMFont * desc = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(holder, "description"));
                desc->setString((*iter)->desc);
            }
            {
                ui::TextBMFont * cost = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(holder, "cost"));
                std::ostringstream ossCost;
                ossCost<<(*iter)->cost;
                cost->setString(ossCost.str());
            }
        }
        else
        {
            break;
        }

        index++;
    }
#endif
}

void PurchaseView::onProductRequestSuccess()
{
    updateHoldersView();
}

void PurchaseView::onProductRequestFailed()
{
    
}

void PurchaseView::onPurchaseSuccess(std::string identifier)
{
    //TODO
    //update save data
    GameSaveData::getInstance()->unlockedAds = 1;
    GameSaveData::getInstance()->saveData();
    
    runAction(_clearCallFunc);
}

void PurchaseView::onPurchaseFailed()
{
    activate(true);
    
    GenericPopup * popup = GenericPopup::create();
    popup->construct(std::string("ui/genericpopup.csb"), std::string("Purchase Failed!!!"), NULL, NULL);
    getParent()->addChild(popup);
}