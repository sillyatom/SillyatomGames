//
//  PlayerData.h
//  MazeDev
//
//  Created by Sillyatom on 16/11/14.
//
//

#ifndef __MazeDev__PlayerData__
#define __MazeDev__PlayerData__

#pragma once

#include "cocos2d.h"
#include "Constants.h"
#include "Inventory.h"

#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as outputUSING_NS_CC;

class PlayerData
{
private:

	double energy;
	int lastUnlockedLevel;

public:
	static std::string KEY_FOR_ENERGY;
	static std::string KEY_FOR_LAST_UNLOCKED_LEVEL;

    PlayerData();
    
    static PlayerData * getInstance();

    void setValueForKey(std::string key, int val);
    int getValueForKey(std::string key);

    void setDoubleValueForKey(std::string key, double val);
    double getDoubleValueForKey(std::string key);

	void updateEnergy(double val);
	double getEnergy(){ return energy; }

	void updateLastUnlockedLevel(int val);
    int getLastUnlockedLevel(){ return (lastUnlockedLevel == 0) ? 1 : lastUnlockedLevel; }
};
#endif /* defined(__MazeDev__PlayerData__) */
