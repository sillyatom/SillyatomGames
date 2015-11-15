//
//  InAppHandler.h
//  MyCppGame
//
//  Created by Sillyatom on 14/01/15.
//
//

#ifndef __MyCppGame__InAppHandler__
#define __MyCppGame__InAppHandler__

#include "cocos2d.h"
#include <vector>
#include "../Constants.h"
#include "../popups/PurchaseView.h"

USING_NS_CC;

struct ProductDetails
{
    std::string title;
    std::string desc;
    float cost;
};

class InAppHandler
{
private:

public:
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    InAppHandler();
    
    std::vector<ProductDetails*> _productList;
    
    static InAppHandler * getInstance();
    static void getProductsList(PurchaseView * target);
    static void productsReceived();
    static void onProductRequestSuccess();
    static void onProductRequestFailed();
    static void resetPurchaseList();
    
    static void purchaseProduct(int index);
    static void restoreTransactions();
    void provideContentForIdentifier(std::string identifier);
    
    void onPurchaseSuccess(std::string identifier);
    void onPurchaseFailed();
#endif
};
#endif /* defined(__MyCppGame__InAppHandler__) */
