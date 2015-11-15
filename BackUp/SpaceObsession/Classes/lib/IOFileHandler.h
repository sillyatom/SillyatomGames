#ifndef _MY_CPP_GAME_IO_FILE_HANDLER_
#define _MY_CPP_GAME_IO_FILE_HANDLER_

#include "cocos2d.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>

USING_NS_CC;

class IOFileHandler
{
private:
	std::ofstream _saveDataFile;
	std::ifstream _loadDataFile;

public:
	static IOFileHandler* getInstance();
	void init();
    void closeFiles();
	std::ofstream * getSaveDataFile();
	std::ifstream * getLoadDataFile();
protected:
};
#endif