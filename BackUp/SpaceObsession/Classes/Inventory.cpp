//
//  Inventory.cpp
//  MazeDev
//
//  Created by Sillyatom on 16/11/14.
//
//

#include "Inventory.h"
#include "Constants.h"
#include "lib/Utility.h"
#include "Helper.h"
#include "PlayerData.h"

Inventory::Inventory()
{

}

void Inventory::init()
{
    //initialize powerup id's
    
    std::string jsonFileName = "json/powerupConfig.json";
    std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
    rapidjson::Document document;
    document.Parse<0>(jsonData.c_str());
    
    const rapidjson::Value& powerups = document["powerups"];
    const rapidjson::Value& powerupsData = document["powerupdata"];
	const rapidjson::Value& powerupsAsset = document["powerupAsset"];
	const rapidjson::Value& powerupsCost = document["cost"];

    int length = GameHelper::Helper::getJsonArrayLength(powerups);
    
	std::string KEY_COUNT("_count");
	std::string KEY_IS_UNLOCKED("_is_unlocked");

	//initialize from json file
	for (int index = 0; index < length; index++)
	{
		InventoryItem * item = new InventoryItem();
		item->name = std::string(powerups[rapidjson::SizeType(index)].GetString());

		//Keys to save and retrieve
		item->keyToSaveCount = std::string((item->name + KEY_COUNT));
		item->keyToSaveIsUnlocked = std::string((item->name + KEY_IS_UNLOCKED));

		item->spriteFrameName = std::string(powerupsAsset[item->name.c_str()].GetString());
		item->cost = powerupsCost[item->name.c_str()].GetInt();

		const rapidjson::Value& powerupData = powerupsData[item->name.c_str()];
		item->unlockAtLevel = powerupData[rapidjson::SizeType(2)].GetInt();
		item->unlockAtWorld = powerupData[rapidjson::SizeType(1)].GetInt();
		item->unlockAtXp = powerupData[rapidjson::SizeType(3)].GetInt();

		_items[item->name] = item;
		CCLOG("Initializing Powerup : %s ",item->name.c_str());
	}
    
    //for debugging update some value
    
    PlayerData * playerData = PlayerData::getInstance();
	for (int index = 0; index < length; index++)
	{
		std::string itemName = std::string(powerups[rapidjson::SizeType(index)].GetString());
		InventoryItem * item = _items[itemName];

		//count
		playerData->setValueForKey(item->keyToSaveCount, 4);

		//is unlocked
		playerData->setValueForKey(item->keyToSaveIsUnlocked, 1);
	}
    refresh();
}

void Inventory::refresh()
{
	std::string jsonFileName = "json/powerupConfig.json";
	std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
	rapidjson::Document document;
	document.Parse<0>(jsonData.c_str());

	const rapidjson::Value& powerups = document["powerups"];
	int length = GameHelper::Helper::getJsonArrayLength(powerups);

	PlayerData * playerData = PlayerData::getInstance();

	//update from user defaults
	for (int index = 0; index < length; index++)
	{
		std::string itemName = std::string(powerups[rapidjson::SizeType(index)].GetString());
		InventoryItem * item = _items[itemName];

		//count
		item->count = playerData->getValueForKey(item->keyToSaveCount);

		//is unlocked
		item->isUnlocked = playerData->getValueForKey(item->keyToSaveIsUnlocked);
	}

}
Inventory * Inventory::getInstance()
{
    static Inventory * instance = new Inventory();
    return instance;
}

InventoryItem* Inventory::getItemByName(std::string itemName)
{
	std::map<std::string, InventoryItem*>::iterator iter = _items.find(itemName);
	if (iter != _items.end())
	{
		return iter->second;
	}
	return nullptr;
}

void Inventory::updateCountForItem(std::string name, int usedCount)
{
	InventoryItem * item = getItemByName(name);
	item->count -= usedCount;

	PlayerData::getInstance()->setValueForKey(item->keyToSaveCount, item->count);
}

void Inventory::removeAllItems()
{
	std::map<std::string, InventoryItem*>::iterator iter;
	for (iter = _items.begin(); iter != _items.end(); )
	{
		iter = _items.erase(iter);
	}

	_items.clear();
}