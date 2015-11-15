//
//  LevelSelectionPopup.cpp
//  MyCppGame
//
//  Created by Sillyatom on 17/02/15.
//
//

#include "LevelSelectionPopup.h"
#include "../Constants.h"
#include "../Helper.h"

bool LevelSelectionPopup::init()
{
    if (!CSBPopup::init())
    {
        return false;
    }
    
    return true;
}

void LevelSelectionPopup::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    _btnsHolder = Helper::seekWidgetByName(_layout, "scrollView");
	_linesHolder = Helper::seekWidgetByName(_layout, "bglines");
    
    _btnsHolder->addCCSEventListener(CC_CALLBACK_2(LevelSelectionPopup::scrollCallback, this));
    
    for (int index = 1; index <= NUM_LEVELS; index++)
    {
        std::ostringstream oss;
        oss<<"l"<<index;
        Button * btn = static_cast<Button*>(_btnsHolder->getChildByName(oss.str()));
        if (btn == nullptr)
        {
            break;
        }
        btn->setTag(index);
        btn->addTouchEventListener(CC_CALLBACK_2(LevelSelectionPopup::touchCallback, this));
    }
}

LevelSelectionPopup::~LevelSelectionPopup()
{
    _eventDispatcher->removeAllEventListeners();
}

void LevelSelectionPopup::scrollCallback(cocos2d::Ref *pSender, int val)
{
    ui::ScrollView * scrollView = (ui::ScrollView*)(pSender);
    if (_scrollCallFunc)
    {
        (_mTarget->*_scrollCallFunc)(scrollView->getInnerContainer());
    }
}
