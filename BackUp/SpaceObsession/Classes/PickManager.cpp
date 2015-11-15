//
//  PickManager.cpp
//  MazeDev
//
//  Created by Sillyatom on 18/11/14.
//
//

#include "PickManager.h"
#include "Helper.h"

PickManager::PickManager()
{
    std::string jsonFileName = "json/powerupConfig.json";
    std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
    document.Parse<0>(jsonData.c_str());
}

PickManager * PickManager::getInstance()
{
    static PickManager * instance = new PickManager();
    return instance;
}

void PickManager::resetPicks()
{
	std::map<std::string, PickItem*>::iterator iter = _items.begin();

	for (iter = _items.begin(); iter != _items.end(); )
	{
		delete iter->second;
		iter = _items.erase(iter);
	}
}

void PickManager::addPickItemFrom(InventoryItem * invItem)
{
	PickItem * item = new PickItem();
	item->itemName = std::string(invItem->name);
	item->selectedCount = 0;
	item->usedCount = 0;
	_items[std::string(item->itemName)] = item;
}

void PickManager::removePickItem(std::string itemName)
{
	std::map<std::string, PickItem*>::iterator iter = _items.begin();

	for (iter = _items.begin(); iter != _items.end(); )
	{
		if (iter->first == itemName)
		{
			delete iter->second;
			iter = _items.erase(iter);
			break;
		}
		else
		{
			iter++;
		}
	}
}

void PickManager::updateSelectedCountForItem(std::string itemName, int delSelCount)
{
	PickItem * item = getItemByName(itemName);
	item->selectedCount += delSelCount;
}

void PickManager::updateUsedCountForItem(std::string itemName, int delUsedCount)
{
	PickItem * item = getItemByName(itemName);
	item->usedCount += delUsedCount;
}

void PickManager::updateIndexForItem(std::string itemName, int index)
{
	PickItem * item = getItemByName(itemName);
	item->index = index;
}

int PickManager::getSelectedCountForItem(std::string itemName)
{
	PickItem * item = getItemByName(itemName);

	if (item == nullptr)
	{
		return 0;
	}

	return item->selectedCount;
}

PickItem* PickManager::getItemWithIndex(int index)
{
	std::map<std::string, PickItem*>::iterator iter = _items.begin();

	for (iter = _items.begin(); iter != _items.end(); iter++)
	{
		if (iter->second->index == index)
		{
			return iter->second;
		}
	}

	return nullptr;
}

PickItem* PickManager::getItemByName(std::string itemName)
{
	std::map<std::string, PickItem*>::iterator iter = _items.find(itemName);
	if (iter != _items.end())
	{
		return iter->second;
	}
	return nullptr;
}