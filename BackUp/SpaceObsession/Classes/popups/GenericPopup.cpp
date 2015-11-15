//
//  GenericPopup.cpp
//  MyCppGame
//
//  Created by Sillyatom on 25/01/15.
//
//

#include "GenericPopup.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../lib/Utility.h"

void GenericPopup::construct(std::string fileName, std::string desc, CallFunc * okCallback, CallFunc * cancelCallback)
{
    _okCallback = okCallback;
    _cancelCallback = cancelCallback;
    
    CSBPopup::construct(fileName);
    
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "okbtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(GenericPopup::touchCallback, this));
    }
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "cancelbtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(GenericPopup::touchCallback, this));
    }

    {
		ui::TextBMFont * description = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "description"));
        description->setString(std::string(desc));
    }
}

void GenericPopup::touchCallback(cocos2d::Ref *pSender, Widget::TouchEventType event)
{
    if (event == Widget::TouchEventType::ENDED)
    {
        Widget * selectedNode = dynamic_cast<Widget*>(pSender);
        
        if (selectedNode->getName() == "okbtn")
        {
            if (_okCallback)
            {
                runAction(_okCallback);
            }
        }
        else
        {
            if (_cancelCallback)
            {
                runAction(_cancelCallback);
            }
        }
    }
}