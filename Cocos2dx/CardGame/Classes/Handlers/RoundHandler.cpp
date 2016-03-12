//
//  RoundHandler.cpp
//  CardGame
//
//  Created by Sillyatom on 07/03/16.
//
//

#include "RoundHandler.h"
#include "../Constants/GameConstants.h"
RoundHandler::RoundHandler()
{
    _currentRound = 0;
}

RoundHandler* RoundHandler::getInstance()
{
    static RoundHandler * instance;
    if (instance == NULL)
    {
        instance = new RoundHandler();
        if (instance->init())
        {
            instance->autorelease();
            return instance;
        }
    }
    CC_SAFE_DELETE(instance);
    return NULL;
}

bool RoundHandler::init()
{
    if (ExtSprite::init())
    {
        return true;
    }
    
    return false;
}

void RoundHandler::startRound(int roundNumber)
{
    _currentRound = roundNumber;
    startRoundTimer();
}

void RoundHandler::playNextRound(int roundNumber)
{
    _currentRound++;
    startRoundTimer();
}

void RoundHandler::startRoundTimer()
{
    schedule(schedule_selector(RoundHandler::onRoundTimerTick), 1.0f, GameConstants::ROUND_TIME, 0.0f);
}

void RoundHandler::onRoundTimerTick(float dt)
{
    static int tickCount = 0;
    ++tickCount;
    
    if (tickCount == GameConstants::ROUND_TIME)
    {
        tickCount = 0;
        stopRoundTimer();
    }
}

void RoundHandler::stopRoundTimer()
{
    unschedule(schedule_selector(RoundHandler::onRoundTimerTick));
    onRoundComplete(_currentRound, COMPLETED);
}