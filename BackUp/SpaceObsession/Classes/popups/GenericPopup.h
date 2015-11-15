//
//  GenericPopup.h
//  MyCppGame
//
//  Created by Sillyatom on 25/01/15.
//
//

#ifndef __MyCppGame__GenericPopup__
#define __MyCppGame__GenericPopup__

#include "../lib/CSBPopup.h"

USING_NS_CC;
using namespace ui;

class GenericPopup : public CSBPopup
{
private:
    CallFunc * _okCallback;
    CallFunc * _cancelCallback;
    
public:
    CREATE_FUNC(GenericPopup);
    virtual void construct(std::string fileName, std::string desc, CallFunc * okCallback, CallFunc * cancelCallback);
    virtual void touchCallback(Ref * node, Widget::TouchEventType event);
};

#endif /* defined(__MyCppGame__GenericPopup__) */
