//
//  PickManager.h
//  MazeDev
//
//  Created by Sillyatom on 18/11/14.
//
//

#ifndef __MazeDev__PickManager__
#define __MazeDev__PickManager__
#pragma once

#include "cocos2d.h"
#include "Constants.h"
#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as outputUSING_NS_CC;

#include "Inventory.h"

class PickItem
{
private:
	PickItem(const PickItem& item){};
public:
    PickItem():itemName(""), index(0), selectedCount(0), usedCount(0){}
    std::string itemName;
    int selectedCount;
    int usedCount;
	int index;
};

class PickManager
{
private:
    rapidjson::Document document;
	std::map<std::string, PickItem*> _items;

public:
	void addPickItemFrom(InventoryItem * invItem);
	void removePickItem(std::string itemName);

	void updateSelectedCountForItem(std::string itemName, int delSelCount);
	void updateUsedCountForItem(std::string itemName, int delUsedCount);
	void updateIndexForItem(std::string itemName, int index);

    PickManager();
    static PickManager * getInstance();
	void resetPicks();

	int getSelectedCountForItem(std::string itemName);
	PickItem * getItemByName(std::string itemName);
	PickItem * getItemWithIndex(int index);
	std::map<std::string, PickItem*> getItems(){ return _items; }
};

#endif /* defined(__MazeDev__PickManager__) */
