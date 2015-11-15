#ifndef _MY_CPP_GAME_AUDIO_CONTROLLER_H_
#define _MY_CPP_GAME_AUDIO_CONTROLLER_H_
#include "cocos2d.h"
#include "SimpleAudioEngine.h"
#include "InterpolateHelper.h"
using namespace CocosDenshion;
USING_NS_CC;

class AudioController : public IInterpolate
{
private:
std::string _currentBG;
SimpleAudioEngine * engineRef;
std::vector<std::string> _loadedBgFiles;
std::vector<std::string> _loadedEffectsFiles;
InterpolateHelper * _interpolate;

public:
	static AudioController* getInstance();
	void preloadAndPlayBg(const std::string fileName, bool loop = true);
	void preloadAndPlayEffect(const std::string fileName, bool loop = false, float pitch = 1.0, float pan = 0.0, float gain = 1.0);
	void preloadBG(const std::string fileName);
	void preloadEffect(const std::string fileName);
	void playEffect(const std::string fileName, bool loop = false, float pitch = 1.0, float pan = 0.0, float gain = 1.0);
	void playBG(const std::string fileName, bool loop = true);
	void unloadAllEffects();
	void unloadAllBg();
	void stopBG(bool releaseData);
	void stopAll();
    void stopAllEffects();

	virtual void step(Interpolate * interpolate, Vec2 value);
protected:
};

#endif