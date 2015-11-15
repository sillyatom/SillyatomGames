#include "GameSaveData.h"
#include "IOFileHandler.h"
#include "Constants.h"

GameSaveData::GameSaveData()
{
    levelUnlocked = 0;
    unlockedAds = 0;
    isFirstRun = 1;
    totalScore = 0;
    totalStarsCollected = 0;
    _emptyBytes = 0;
    
    _saveDataVersion = 1;
}

GameSaveData* GameSaveData::getInstance()
{
	static GameSaveData instance;
	return &instance;
}

void GameSaveData::loadData()
{
	std::ifstream * dataFile = IOFileHandler::getInstance()->getLoadDataFile();
    
    dataFile->read((char*)&_saveDataVersion, sizeof(_saveDataVersion));
    
    dataFile->read((char*)&_emptyBytes, sizeof(_emptyBytes));
    dataFile->read((char*)&_emptyBytes, sizeof(_emptyBytes));
    dataFile->read((char*)&_emptyBytes, sizeof(_emptyBytes));
    dataFile->read((char*)&_emptyBytes, sizeof(_emptyBytes));
    
	dataFile->read((char*)&levelUnlocked, sizeof(levelUnlocked));
    dataFile->read((char*)&isFirstRun, sizeof(isFirstRun));
    dataFile->read((char*)&unlockedAds, sizeof(unlockedAds));
    dataFile->read((char*)&totalScore, sizeof(totalScore));
    dataFile->read((char*)&totalStarsCollected, sizeof(totalStarsCollected));
    
	dataFile->close();
}

void GameSaveData::saveData()
{
	std::ofstream * dataFile = IOFileHandler::getInstance()->getSaveDataFile();
    
    dataFile->write((char*)&_saveDataVersion, sizeof(_saveDataVersion));
    
    dataFile->write((char*)&_emptyBytes, sizeof(_emptyBytes));
    dataFile->write((char*)&_emptyBytes, sizeof(_emptyBytes));
    dataFile->write((char*)&_emptyBytes, sizeof(_emptyBytes));
    dataFile->write((char*)&_emptyBytes, sizeof(_emptyBytes));

    dataFile->write((char*)&levelUnlocked, sizeof(levelUnlocked));
    dataFile->write((char*)&isFirstRun, sizeof(isFirstRun));
    dataFile->write((char*)&unlockedAds, sizeof(unlockedAds));
    dataFile->write((char*)&totalScore, sizeof(totalScore));
    dataFile->write((char*)&totalStarsCollected, sizeof(totalStarsCollected));
    
	dataFile->close();
}

void GameSaveData::close()
{
    IOFileHandler::getInstance()->closeFiles();
}