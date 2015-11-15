#include "AudioController.h"

AudioController* AudioController::getInstance()
{
	static AudioController instance;
	return &instance;
}

void AudioController::preloadBG(const std::string fileName)
{
	auto iter = std::find(_loadedBgFiles.begin(), _loadedBgFiles.end(), fileName);
	if (iter == _loadedBgFiles.end())
	{
		_loadedBgFiles.push_back(fileName);
		std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
		SimpleAudioEngine::getInstance()->preloadBackgroundMusic(fileName.c_str());
	}
}

void AudioController::preloadEffect(const std::string fileName)
{
	auto iter = std::find(_loadedEffectsFiles.begin(), _loadedEffectsFiles.end(), fileName);
	if (iter == _loadedEffectsFiles.end())
	{
		_loadedEffectsFiles.push_back(fileName);
		std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
		SimpleAudioEngine::getInstance()->preloadEffect(fileName.c_str());
	}
}

void AudioController::playEffect(const std::string fileName, bool loop, float pitch, float pan, float gain)
{
	std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
	SimpleAudioEngine::getInstance()->playEffect(fileName.c_str());
}

void AudioController::playBG(const std::string fileName, bool loop)
{
	//if requested the same file, just return
	if (strcmp(_currentBG.c_str(), fileName.c_str()) == 0)
	{
		return;
	}
	else if (SimpleAudioEngine::getInstance()->isBackgroundMusicPlaying())
	{
		stopBG(true);
	}

	_currentBG = fileName;
	std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
	SimpleAudioEngine::getInstance()->playBackgroundMusic(fileName.c_str(), loop);
}

void AudioController::stopBG(bool releaseData)
{
	SimpleAudioEngine::getInstance()->stopBackgroundMusic(releaseData);
	if (releaseData)
	{
		auto iter = std::find(_loadedBgFiles.begin(), _loadedBgFiles.end(), _currentBG);
		if (iter != _loadedBgFiles.end())
		{
			_loadedBgFiles.erase(iter);
		}
	}
	_currentBG = "";
}

void AudioController::stopAllEffects()
{
    SimpleAudioEngine::getInstance()->stopAllEffects();    
}

void AudioController::stopAll()
{
	SimpleAudioEngine::getInstance()->stopBackgroundMusic(true);
	SimpleAudioEngine::getInstance()->stopAllEffects(); 
}

void AudioController::unloadAllBg()
{
	for (auto iter = _loadedBgFiles.begin(); iter != _loadedBgFiles.end();)
	{
		iter = _loadedBgFiles.erase(iter);
	}
}

void AudioController::unloadAllEffects()
{
	SimpleAudioEngine::getInstance()->stopAllEffects();
	auto engine = SimpleAudioEngine::getInstance();
	for (auto iter = _loadedEffectsFiles.begin(); iter != _loadedEffectsFiles.end();)
	{
		std::string fileName = (*iter);
		std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
		engine->unloadEffect(fileName.c_str());
		iter = _loadedEffectsFiles.erase(iter);
	}
}

void AudioController::preloadAndPlayBg(const std::string fileName, bool loop)
{
	auto iter = std::find(_loadedBgFiles.begin(), _loadedBgFiles.end(), fileName);
	if (iter != _loadedBgFiles.end())
	{
		playBG(fileName, loop);
	}
	else
	{
		preloadBG(fileName);
		playBG(fileName, loop);
	}
}

void AudioController::preloadAndPlayEffect(const std::string fileName, bool loop, float pitch, float pan, float gain)
{
	auto iter = std::find(_loadedEffectsFiles.begin(), _loadedEffectsFiles.end(), fileName);
	if (iter != _loadedEffectsFiles.end())
	{
		playEffect(fileName, loop, pitch, pan, gain);
	}
	else
	{
		preloadEffect(fileName);
		playEffect(fileName, loop, pitch, pan, gain);
	}
}

void AudioController::step(Interpolate * interpolate, Vec2 value)
{
	SimpleAudioEngine::getInstance()->setBackgroundMusicVolume(value.x);
}