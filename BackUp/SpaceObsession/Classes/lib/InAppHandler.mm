//
//  InAppHandler.cpp
//  MyCppGame
//
//  Created by Sillyatom on 14/01/15.
//
//

#include "InAppHandler.h"
#include "../../proj.ios_mac/ios/RageIAPHelper.h"

InAppHandler::InAppHandler()
{
}

InAppHandler* InAppHandler::getInstance()
{
    static InAppHandler * instance = new InAppHandler();
    return instance;
}

void InAppHandler::getProductsList(PurchaseView* target)
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Product_Request_Initiated;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
    
    [RageIAPHelper getProductDetails:getInstance()];
}

void InAppHandler::onProductRequestSuccess()
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Product_Request_Succeeded;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);

    CCLOG("InappHandler prdts req succeed");
}

void InAppHandler::onProductRequestFailed()
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Product_Request_Failed;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);

    CCLOG("InappHandler prdt req failed");
}

void InAppHandler::resetPurchaseList()
{
    for (auto iter = getInstance()->_productList.begin(); iter != getInstance()->_productList.end(); )
    {
        iter = getInstance()->_productList.erase(iter);
    }
}

void InAppHandler::purchaseProduct(int index)
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Purchase_Initiated;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
    
    [RageIAPHelper purchaseProduct:index];
}

void InAppHandler::restoreTransactions()
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Purchase_Restore_Initiated;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);

    [RageIAPHelper restoreTransactions];
}

void InAppHandler::provideContentForIdentifier(std::string identifier)
{
    CCLOG("provide content for purchased identifier %s ", identifier.c_str());
    GameEvent event;
    event.eventName = GameEvent::InApp_Purchase_Restore_Succeeded;
    event.identifier = identifier;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
}

void InAppHandler::onPurchaseSuccess(std::string identifier)
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Purchase_Succeeded;
    event.identifier = identifier;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
}

void InAppHandler::onPurchaseFailed()
{
    GameEvent event;
    event.eventName = GameEvent::InApp_Purchase_Failed;
    Director::getInstance()->getEventDispatcher()->dispatchEvent(&event);
}