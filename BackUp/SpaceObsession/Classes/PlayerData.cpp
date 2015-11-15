//
//  PlayerData.cpp
//  MazeDev
//
//  Created by Sillyatom on 16/11/14.
//
//

#include "PlayerData.h"
#include "Constants.h"
#include "Helper.h"

std::string PlayerData::KEY_FOR_ENERGY("KEY_ENERGY");
std::string PlayerData::KEY_FOR_LAST_UNLOCKED_LEVEL("KEY_LAST_UNLOCKED_LEVEL");

PlayerData::PlayerData()
{
    energy = getDoubleValueForKey(KEY_FOR_ENERGY);
	lastUnlockedLevel = getValueForKey(KEY_FOR_LAST_UNLOCKED_LEVEL);
}

PlayerData * PlayerData::getInstance()
{
    static PlayerData * instance = new PlayerData();
    return instance;
}

void PlayerData::setValueForKey(std::string key, int val)
{
    UserDefault::getInstance()->setIntegerForKey(key.c_str(), val);
	UserDefault::getInstance()->flush();
}

int PlayerData::getValueForKey(std::string key)
{
    return UserDefault::getInstance()->getIntegerForKey(key.c_str());
}

void PlayerData::setDoubleValueForKey(std::string key, double val)
{
    UserDefault::getInstance()->setDoubleForKey(key.c_str(), val);
	UserDefault::getInstance()->flush();
}

double PlayerData::getDoubleValueForKey(std::string key)
{
    return UserDefault::getInstance()->getDoubleForKey(key.c_str());
}

void PlayerData::updateEnergy(double val)
{
	energy += val;
	setDoubleValueForKey(KEY_FOR_ENERGY, energy);
}

void PlayerData::updateLastUnlockedLevel(int val)
{
	lastUnlockedLevel = val;
	setValueForKey(KEY_FOR_LAST_UNLOCKED_LEVEL, lastUnlockedLevel);
}