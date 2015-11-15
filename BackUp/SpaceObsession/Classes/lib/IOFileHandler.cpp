#include "IOFileHandler.h"

IOFileHandler* IOFileHandler::getInstance()
{
	static IOFileHandler instance;
	return &instance;
}

void IOFileHandler::init()
{
}

std::ifstream * IOFileHandler::getLoadDataFile()
{
	std::string path(FileUtils::getInstance()->getWritablePath());
	//fileName : gamedata.dat
	std::ostringstream oss;
	oss << path << "gamedata.dat";
//	CCLOG(" file read path %s ", oss.str().c_str());
	_loadDataFile = std::ifstream(oss.str().c_str(), std::ios::binary);

	return &_loadDataFile;
}

std::ofstream* IOFileHandler::getSaveDataFile()
{
	std::string path(FileUtils::getInstance()->getWritablePath());
	//fileName : gamedata.dat
	std::ostringstream oss;
	oss << path << "gamedata.dat";
//	CCLOG(" file write path %s ", oss.str().c_str());
	_saveDataFile.open(oss.str().c_str(), std::ios::binary | std::ios::out);
	return  &_saveDataFile;
}

void IOFileHandler::closeFiles()
{
    _loadDataFile.close();
    _saveDataFile.close();
}