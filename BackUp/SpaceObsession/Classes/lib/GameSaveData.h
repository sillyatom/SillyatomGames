#ifndef _MY_CPP_GAME_GAME_SAVE_DATA_H_
#define _MY_CPP_GAME_GAME_SAVE_DATA_H_

class GameSaveData
{
private:
    int _emptyBytes;
    int _saveDataVersion;
public:
    GameSaveData();
	static GameSaveData* getInstance();

    unsigned int isFirstRun;
    unsigned long totalScore;
    unsigned long totalStarsCollected;
	unsigned int levelUnlocked;
    unsigned int unlockedAds;
    
	void loadData();
	void saveData();
    void close();
protected:
};
#endif