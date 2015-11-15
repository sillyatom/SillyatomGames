//
//  PowerupPanel.cpp
//  MazeDev
//
//  Created by Sillyatom on 20/11/14.
//
//

#include "PowerupPanel.h"
#include "lib/Utility.h"
#include "PickManager.h"
#include "Constants.h"
#include <stdlib.h>

bool PowerupPanel::init()
{
    if (!CSBPopup::init())
    {
        return false;
    }
    
    _selectedIndex = -1;
    
    return true;
}

void PowerupPanel::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    setContentSize(cocos2d::Size(_layout->getContentSize().width,_layout->getContentSize().height));
    _layout->cocos2d::Node::setPosition(0.0, 0.0);
    
    Vec2 vOrigin = Director::getInstance()->getOpenGLView()->getVisibleOrigin();
    Size vSize = Director::getInstance()->getOpenGLView()->getVisibleSize();
    
    setPosition(vOrigin.x + vSize.width - _layout->getContentSize().width / 2.0,
                vOrigin.y + vSize.height - _layout->getContentSize().height / 2.0);
}

void PowerupPanel::updateFromPicks()
{
	std::map<std::string, PickItem*>items = PickManager::getInstance()->getItems();
	std::map<std::string, PickItem*>::iterator iter;
	for (iter = items.begin(); iter != items.end(); iter++)
	{
		int index = iter->second->index;
		std::ostringstream oss;
		oss<<"ballbtn"<<index;

		Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, oss.str()));
		btn->addTouchEventListener(CC_CALLBACK_2(PowerupPanel::touchCallback, this));

		updateCountForIndex(iter->second->index, iter->second->selectedCount - iter->second->usedCount);

		//update image for index
		{
			std::ostringstream ossImg;
			ossImg<<"ball"<<index;

			Widget * ballImage = Helper::seekWidgetByName(_layout, ossImg.str());
			if (ballImage->getChildByName("powerupImg") == nullptr)
			{
				Sprite * img = Sprite::createWithSpriteFrameName(Inventory::getInstance()->getItemByName(iter->second->itemName)->spriteFrameName);
				ballImage->addChild(img);

				img->setName("powerupImg");
				img->setPosition(img->getBoundingBox().size.width/2, img->getBoundingBox().size.height/2);
			}
		}
	}
}

void PowerupPanel::updateCountForIndex(int index, int count)
{
	std::ostringstream oss;
	oss<<"selected"<<index<<"countbg";
	Widget * countBg = Helper::seekWidgetByName(_layout, oss.str());
	TextField * countTxt = static_cast<TextField*>(Helper::seekWidgetByName(countBg, "count"));
	{
		std::ostringstream ossCount;
		ossCount<<count;
		countTxt->setText(ossCount.str());
	}
	if (count == 0)
	{
		std::ostringstream ossImg;
		ossImg<<"ball"<<index;

		Widget * ballImage = Helper::seekWidgetByName(_layout, ossImg.str());
		if (ballImage->getChildByName("powerupImg"))
		{
			ballImage->removeChildByName("powerupImg");
		}

		std::ostringstream oss;
		oss<<"ballbtn"<<index;

		Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, oss.str()));
		btn->setBright(false);
		btn->setEnabled(false);
	}
}

void PowerupPanel::EnablePanel(bool val)
{
	for (int index = 1; index < GameVariables::AVAILABLE_PICKS; index++)
	{
		std::ostringstream oss;
		oss<<"ballbtn"<<index;

		Button * btn = static_cast<Button*>(Helper::seekWidgetByName(_layout, oss.str()));
		if (val)
		{
			PickItem * item = PickManager::getInstance()->getItemWithIndex(index);
			if (item)
			{
				if (item->selectedCount - item->usedCount > 0)
				{
					btn->setBright(val);
					btn->setEnabled(val);
				}
			}
		}
		else
		{
			btn->setBright(val);
			btn->setEnabled(val);
		}
	}

	if (val)
	{
		_layout->setOpacity(255);
	}
	else
	{
		_layout->setOpacity(50);
	}
}

void PowerupPanel::touchCallback(cocos2d::Ref *pSender, Widget::TouchEventType event)
{
	if (event == Widget::TouchEventType::ENDED)
	{
		Node * selectedNode = dynamic_cast<Node*>(pSender);
		std::string nodeName(selectedNode->getName());
		std::string strInt = nodeName.substr(std::string("ballbtn").length(), nodeName.length()-1);
		_selectedIndex = atoi(strInt.c_str());

		PickItem * item = PickManager::getInstance()->getItemWithIndex(_selectedIndex);
		assert(item != nullptr);
		item->usedCount++;

		updateCountForIndex(_selectedIndex, item->selectedCount - item->usedCount);

		CCLOG("selected powerup index %d", _selectedIndex);
		{
			ClickEvent clickEvent(ClickEvent::CLICK);
			clickEvent.setUserData(this);
			clickEvent.tag = selectedNode->getTag();
			clickEvent.nodeName = selectedNode->getName();
			_eventDispatcher->dispatchEvent(&clickEvent);
		}
	}
}

std::string PowerupPanel::getPowerupFromSelectedIndex()
{
	std::string ret("");
	PickItem * item = PickManager::getInstance()->getItemWithIndex(_selectedIndex);
	if (item)
	{
		ret = std::string(item->itemName.c_str());
	}

	return ret;
}