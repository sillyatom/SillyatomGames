//
//  PurchaseView.h
//  MyCppGame
//
//  Created by Sillyatom on 24/01/15.
//
//

#ifndef __MyCppGame__PurchaseView__
#define __MyCppGame__PurchaseView__

#include "../lib/CSBPopup.h"

USING_NS_CC;
using namespace ui;

class PurchaseView : public CSBPopup
{
    std::map<std::string, double> _purchaseContent;

    CallFunc * _clearCallFunc;
    
    void initView();
    
public:
    CREATE_FUNC(PurchaseView);
    virtual void onExit();
    virtual void construct(std::string fileName, CallFunc * clearCallFunc);
    virtual void touchCallback(Ref * node, Widget::TouchEventType event);
    void updateHoldersView();
    
    void onProductRequestSuccess();
    void onProductRequestFailed();
    
    void onPurchaseSuccess(std::string identifier);
    void onPurchaseFailed();
    
    void enable(bool val);
    void activate(bool val);
};

#endif /* defined(__MyCppGame__PurchaseView__) */
