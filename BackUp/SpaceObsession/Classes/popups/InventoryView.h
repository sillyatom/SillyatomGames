//
//  InventoryView.h
//  MazeDev
//
//  Created by Sillyatom on 19/11/14.
//
//

#ifndef __MazeDev__InventoryView__
#define __MazeDev__InventoryView__

#include "../PickManager.h"
#include "../lib/CSBPopup.h"
#include "../Inventory.h"

USING_NS_CC;
using namespace ui;

class InventoryView : public CSBPopup
{
    void updateHud();
	void updateViewFromInventoryData();
	void addImage(std::string frameName, Widget * parent);
public:
    CREATE_FUNC(InventoryView);
    virtual void construct(std::string fileName);
    virtual void touchCallback(Ref * node, Widget::TouchEventType event);

    void updateEnergyAccumulated(double val);
	int getNewIndexForSelectedPowerup();
	int isSlotAvailable(){ return getNewIndexForSelectedPowerup(); }

	void updateSelectionView();
	void updateItemScrollView();

	void updateSelectedViewForItem(PickItem * item);
	void updateScrollViewForItem(InventoryItem * item);
    
    void onGameEvent(cocos2d::EventCustom *event);    
};
#endif /* defined(__MazeDev__InventoryView__) */
