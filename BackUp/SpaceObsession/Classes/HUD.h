#ifndef _HUD_H_
#define _HUD_H_

#include "cocos2d.h"
#include "particles/HudEnergyParticle.h"

USING_NS_CC;

class HUD : public Sprite
{   
	Label * _hitCountText;
    Label * _energyCountText;
	Label * _hitsLeftText;
	Label * _energyText;
	Label * _timerCountText;
	Label * _timeLeftText;

	Sprite * _container;
    Sprite * _timeOver;
    
	bool _timerStarts;
    bool _timeOverAnimationStarts;
    
    int _hitsLeft;
	int _levelTime;
    int _totalStars;
	unsigned int _energyCollected;
    int _multiplier;
    
	float _totalShowerBalls;
	float _removedShowerBalls;

	void addFireShowerTextAnim();
	void onNextRound(cocos2d::Event *event);

    void playTimeOverAnimation();
	bool _isTimerMode;

public:
	virtual bool init();
	void setUpUI();

	~HUD();
	CREATE_FUNC(HUD);

	void setIsTimerMode(bool val){ _isTimerMode = val; }
	bool getIsTimerMode(){ return _isTimerMode;  }

    void moveOut();
    void playMoveIn();

    void setTotalStars(int val){ _totalStars = val; }
    int getTotalStars(){ return _totalStars; }
    void updateEnergyLabel();
    void setEnergy(int val){ _energyCollected += (val * _multiplier); updateEnergyLabel();}
    unsigned int getEnergy(){ return _energyCollected; }

	int getHitsLeft();
	void setHitsLeft(int val);
	void updateHitsLeft();
    
	void startTimerMode();
	void setTime(int seconds);
	void updateTimeLabel();
	int getTimeLeft(){ return _levelTime; }
	void updateLevelTime(float dt);
    
    void destroyAll();
    void stopTimer();
	bool isLevelTimeStarts(){ return _timerStarts; }
};
#endif
