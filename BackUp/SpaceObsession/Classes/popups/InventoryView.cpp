//
//  InventoryView.cpp
//  MazeDev
//
//  Created by Sillyatom on 19/11/14.
//
//

#include "InventoryView.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../PlayerData.h"

#include "../lib/Utility.h"

void InventoryView::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    setContentSize(Size(_layout->getContentSize().width, _layout->getContentSize().height));

	updateViewFromInventoryData();
    updateHud();
    
    PlayerData * playerData = PlayerData::getInstance();
    updateEnergyAccumulated(playerData->getEnergy());
    
    auto listener = EventListenerCustom::create(GameEvent::GameEventType, CC_CALLBACK_1(InventoryView::onGameEvent, this));
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
}

void InventoryView::onGameEvent(cocos2d::EventCustom *event)
{
    GameEvent * gameEvent = (GameEvent*)event;
    if (gameEvent->eventName == GameEvent::UpdatePurchasedEnergy)
    {
        updateEnergyAccumulated(PlayerData::getInstance()->getEnergy());
    }
}

void InventoryView::updateHud()
{
    Widget * panel = Helper::seekWidgetByName(_layout, "hudPanel");
    TextField * txtField = static_cast<TextField*>(Helper::seekWidgetByName(panel, "energyAccumulated"));
    txtField->setText("0");
}

void InventoryView::updateEnergyAccumulated(double val)
{
    std::ostringstream oss;
    oss<<val;
    Widget * panel = Helper::seekWidgetByName(_layout, "hudPanel");
    TextField * txtField = static_cast<TextField*>(Helper::seekWidgetByName(panel, "energyAccumulated"));
    txtField->setText(oss.str().c_str());
}

void InventoryView::updateItemScrollView()
{
	//update scrollview
	std::map<std::string, InventoryItem*> invItems = Inventory::getInstance()->getItems();
	std::map<std::string, InventoryItem*>::iterator iter = invItems.begin();

	for (iter = invItems.begin(); iter != invItems.end(); iter++)
	{
		updateScrollViewForItem(iter->second);
	}
}

void InventoryView::updateViewFromInventoryData()
{
	//update scrollview
	updateItemScrollView();

	//update selection view
	updateSelectionView();

	//add btn listeners to add item
	std::map<std::string, InventoryItem*> invItems = Inventory::getInstance()->getItems();
	std::map<std::string, InventoryItem*>::iterator iter = invItems.begin();

	for (iter = invItems.begin(); iter != invItems.end(); iter++)
	{
		Widget * holder = Helper::seekWidgetByName(_layout, iter->second->name+"holder");
        
        if (!holder)
        {
            CCLOG("%s doesnt exist", iter->second->name.c_str());
            continue;
        }
        
        TextField * energyCount = static_cast<TextField*>(Helper::seekWidgetByName(holder, "energyCount"));
        std::ostringstream oss;
        oss<<iter->second->cost;
        
        energyCount->setText(oss.str().c_str());
        
		Button * addBtn = static_cast<Button*>(Helper::seekWidgetByName(holder, iter->second->name+"addbtn"));
		if (iter->second->isUnlocked)
		{
			addBtn->addTouchEventListener(CC_CALLBACK_2(InventoryView::touchCallback, this));
		}
		else
		{
			addBtn->setBright(false);
			addBtn->setEnabled(false);
		}
	}

	//add btn listeners to selected item
	Widget * panel = Helper::seekWidgetByName(_layout, "selectedpanel");
    if (panel)
    {
        for (int index = 1; index <= GameVariables::AVAILABLE_PICKS; index++)
        {
            std::ostringstream oss;
            oss<<"selected"<<index;

            Button * btn = static_cast<Button*>(Helper::seekWidgetByName(panel, oss.str()));
            btn->addTouchEventListener(CC_CALLBACK_2(InventoryView::touchCallback, this));
        }
    }

    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "closebtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(InventoryView::touchCallback, this));
    }
    {
        Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, "purchaseBtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(InventoryView::touchCallback, this));
    }
}

void InventoryView::updateSelectionView()
{
	//update scrollview
	std::map<std::string, PickItem*> items = PickManager::getInstance()->getItems();

	std::map<std::string, PickItem*>::iterator iter = items.begin();

	for (iter = items.begin(); iter != items.end(); iter++)
	{
		updateSelectedViewForItem(iter->second);
	}
}

void InventoryView::updateSelectedViewForItem(PickItem * item)
{
	Widget * panel = Helper::seekWidgetByName(_layout, "selectedpanel");
	
	std::ostringstream oss;
	oss<<"selected"<<item->index;

	//update image
	Widget * image = Helper::seekWidgetByName(panel, oss.str()+"image");
	if (image->getChildByName("powerupImg") == nullptr)
	{
		Sprite * img = Sprite::createWithSpriteFrameName(Inventory::getInstance()->getItemByName(item->itemName)->spriteFrameName);
		image->addChild(img);
		img->setName("powerupImg");
		img->setPosition(img->getBoundingBox().size.width/2, img->getBoundingBox().size.height/2);
	}

	//update count
	{
		std::ostringstream ossCountBg;
		ossCountBg<<"selected"<<item->index<<"countbg";
		Widget * countImg = Helper::seekWidgetByName(panel, ossCountBg.str());

		TextField * countTextField = (TextField*)countImg->getChildByName("count");
		{
			std::ostringstream oss;
			oss<<item->selectedCount;
			countTextField->setText(oss.str());
		}

		if (item->selectedCount == 0)
		{
			if (image->getChildByName("powerupImg"))
			{
				image->removeChildByName("powerupImg");
			}
			item->index = -1;

			PickManager::getInstance()->removePickItem(item->itemName);
		}
	}
}

void InventoryView::addImage(std::string frameName, Widget * parent)
{
	Sprite * img = Sprite::createWithSpriteFrameName(frameName);
	parent->addChild(img);
	img->setPosition(img->getBoundingBox().size.width/2, img->getBoundingBox().size.height/2);
}

void InventoryView::updateScrollViewForItem(InventoryItem * item)
{
	//get holder
	Widget * holder = Helper::seekWidgetByName(_layout, item->name+"holder");

    if (!holder) return;
    
	//update count
	Widget * countBg = Helper::seekWidgetByName(holder, "countbg");
	TextField * countTxt = (TextField*)countBg->getChildByName("count");

	//get selected count
	int selectedCount = PickManager::getInstance()->getSelectedCountForItem(item->name);
	int count = item->count - selectedCount;

	std::ostringstream oss;
	oss<<count;

	countTxt->setText(oss.str());
}

void InventoryView::touchCallback(cocos2d::Ref *pSender, Widget::TouchEventType event)
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

int InventoryView::getNewIndexForSelectedPowerup()
{
	Widget * panel = Helper::seekWidgetByName(_layout, "selectedpanel");
	for (int index = 1; index <= GameVariables::AVAILABLE_PICKS; index++)
	{
		std::ostringstream oss;
		oss<<"selected"<<index<<"image";

		Widget * image = Helper::seekWidgetByName(panel, oss.str());
		if (image->getChildByName("powerupImg") == nullptr)
		{
			return index;
		}
	}

	return -1;
}