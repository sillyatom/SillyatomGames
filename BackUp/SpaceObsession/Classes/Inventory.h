//
//  Inventory.h
//  MazeDev
//
//  Created by Sillyatom on 16/11/14.
//
//

#ifndef __MazeDev__Inventory__
#define __MazeDev__Inventory__

#pragma once
#include "cocos2d.h"

USING_NS_CC;

class InventoryItem
{
private:
    InventoryItem(const InventoryItem& item){};
public:
    InventoryItem():count(0), isUnlocked(false){};
    std::string name;
    std::string spriteFrameName;

	std::string keyToSaveCount;
	std::string keyToSaveIsUnlocked;

    int count;
    bool isUnlocked;
	int unlockAtLevel;
	int unlockAtWorld;
	int cost;
	int unlockAtXp;
};

class Inventory
{
	std::map<std::string, InventoryItem*> _items;
public:
    Inventory();
    static Inventory * getInstance();
    
	void init();
	void refresh();
	InventoryItem * getItemByName(std::string name);
	std::map<std::string, InventoryItem*> getItems(){ return _items; }
	void updateCountForItem(std::string name, int usedCount);
	void removeAllItems();
};

#endif /* defined(__MazeDev__Inventory__) */
