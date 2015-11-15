#include "HUD.h"
#include "lib/Utility.h"
#include "Constants.h"
#include "lib/AudioController.h"

HUD::~HUD()
{
	removeAllChildrenWithCleanup(true);
}

int HUD::getHitsLeft()
{
	return _hitsLeft;
}

void HUD::setHitsLeft(int val)
{
	_hitsLeft = val;
	updateHitsLeft();
}

void HUD::playMoveIn()
{
    
}

void HUD::moveOut()
{
    
}

void HUD::setUpUI()
{
	Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();

	Color3B fontColor;
#if (ENABLE_SHADERS == 1)
	fontColor = Color3B(255, 255, 255);
#else
	fontColor = Color3B(0, 0, 0);
#endif

	{
		_container = Sprite::create();
		addChild(_container);
		_container->setAnchorPoint(Vec2(0.5, 0.5));
		_container->setContentSize(Size(Utility::getDevicePositionX(REF_GAME_WIDTH), Utility::getDevicePositionY(50.0)));
		_container->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5), Utility::getDevicePositionY(REF_GAME_HEIGHT - 25.0));
	}

	{
		_energyText = Label::createWithBMFont("fonts/font.fnt", "Stars Collected");
		_energyText->setAnchorPoint(Vec2(0.5, 0.5));
		_energyText->setColor(fontColor);
		_energyText->setAnchorPoint(Vec2(0.0, 0.5));
		_energyText->setScale(Utility::getDevicePositionX(0.2));
		_energyText->setPosition(Utility::getDevicePositionX(10.0), Utility::getDevicePositionY(32.0));
		_container->addChild(_energyText);

		_energyCountText = Label::createWithBMFont("fonts/font.fnt", "0");
		_energyCountText->setAnchorPoint(Vec2(0.5, 0.5));
		_energyCountText->setColor(fontColor);
		_energyCountText->setScale(Utility::getDevicePositionX(0.3));
		_energyCountText->setPosition(_energyText->getPositionX() + _energyText->getBoundingBox().size.width * 0.25, Utility::getDevicePositionY(5.0));
		_container->addChild(_energyCountText);
	}

	{
		_hitsLeftText = Label::createWithBMFont("fonts/font.fnt", "Hits Left");
		_hitsLeftText->setAnchorPoint(Vec2(0.5, 0.5));
		_hitsLeftText->setScale(Utility::getDevicePositionX(0.2));
		_hitsLeftText->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH - 5.0) - _hitsLeftText->getBoundingBox().size.width * 0.5, Utility::getDevicePositionY(32.0));
		_container->addChild(_hitsLeftText);

		_hitCountText = Label::createWithBMFont("fonts/font.fnt", "0");
		_hitCountText->setAnchorPoint(Vec2(1.0, 0.5));
		_hitCountText->setColor(fontColor);
		_hitCountText->setScale(Utility::getDevicePositionX(0.3));
		_hitCountText->setPosition(_hitsLeftText->getPositionX() + _hitsLeftText->getBoundingBox().size.width * 0.25, Utility::getDevicePositionY(5.0));
		_container->addChild(_hitCountText);
	}

	if (_isTimerMode)
	{
		_timerStarts = false;

		_timeLeftText = Label::createWithBMFont("fonts/font.fnt", "Time Left");
		_timeLeftText->setAnchorPoint(Vec2(0.5, 0.5));
		_timeLeftText->setScale(Utility::getDevicePositionX(0.2));

		_timeLeftText->setPosition(_hitsLeftText->getPositionX() - _hitsLeftText->getBoundingBox().size.width * 2.0, Utility::getDevicePositionY(32.0));
		_container->addChild(_timeLeftText);

		_timerCountText = Label::createWithBMFont("fonts/font.fnt", "0");
		_timerCountText->setAnchorPoint(Vec2(1.0, 0.5));
		_timerCountText->setColor(fontColor);
		_timerCountText->setScale(Utility::getDevicePositionX(0.3));
		_timerCountText->setPosition(_timeLeftText->getPositionX() + _timeLeftText->getBoundingBox().size.width * 0.5, Utility::getDevicePositionY(5.0));
		_container->addChild(_timerCountText);
	}

	{
		auto listener = EventListenerCustom::create(GameEvent::NextRound, CC_CALLBACK_1(HUD::onNextRound, this));
		_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
	}
    
    _timeOver = nullptr;
    _timeOverAnimationStarts = false;
    setEnergy(0);
}

bool HUD::init()
{
	if (! Sprite::init())
	{
		return false;
	}
    
	_isTimerMode = false;
    _multiplier = 1;
    _energyCollected = 0;

	return true;
}

void HUD::onNextRound(cocos2d::Event *event)
{
    _multiplier = 1;
}

void HUD::setTime(int seconds)
{
	_levelTime = seconds;
	updateTimeLabel();
}

void HUD::updateHitsLeft()
{
	if (_hitsLeft >= 0)
	{
		std::ostringstream osstream;
		osstream << _hitsLeft;
		_hitCountText->setString(osstream.str().c_str());
	}
	else
	{
		assert(_hitsLeft > -1);
	}
}

void HUD::updateTimeLabel()
{
	std::ostringstream osstream;
	osstream << _levelTime;
	_timerCountText->setString(osstream.str().c_str());
}

void HUD::updateEnergyLabel()
{
    std::ostringstream osstream;
    osstream << _energyCollected << " / "<<_totalStars;
    _energyCountText->setString(osstream.str().c_str());
}

void HUD::startTimerMode()
{
	_timerStarts = true;
	schedule(schedule_selector(HUD::updateLevelTime), 1.0, _levelTime, 0.0);
}

void HUD::playTimeOverAnimation()
{
    if (!_timeOverAnimationStarts)
    {
        _timeOverAnimationStarts = true;
    
        _timeOver = Sprite::create("misc/timeOver.png");
        getParent()->addChild(_timeOver);
        
        float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH) / _timeOver->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT) / _timeOver->getContentSize().height);
        _timeOver->setScale(maxRatio);
        _timeOver->setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5), Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5));
        
        auto fadeOut = FadeTo::create(0.5, 0);
        auto fadeIn = FadeTo::create(0.5, 255);
        
        _timeOver->runAction(Sequence::create(fadeOut, fadeIn, fadeOut, fadeIn,
                                              fadeOut, fadeIn,
                                              NULL));
        
        AudioController::getInstance()->playEffect(SOUND_ASSETS::EFFECT_TIMER_BLAST);
    }
}

void HUD::updateLevelTime(float dt)
{
	_levelTime--;
	if (_levelTime >= 0)
	{
		updateTimeLabel();
        
        if (_levelTime <= 3)
        {
            playTimeOverAnimation();
        }
	}
	else
	{
        stopTimer();
	}
}

void HUD::stopTimer()
{
    unschedule(schedule_selector(HUD::updateLevelTime));
    if (_timeOver)
    {
        _timeOver->stopAllActions();
        _timeOver->unscheduleAllCallbacks();
        _timeOver->getParent()->removeChild(_timeOver);
        _timeOver = nullptr;
    }
}

void HUD::destroyAll()
{
    stopTimer();
    
    if (_timeOver)
    {
        _timeOver->stopAllActions();
        _timeOver->unscheduleAllCallbacks();
        _timeOver->getParent()->removeChild(_timeOver);
        _timeOver = nullptr;
    }
}