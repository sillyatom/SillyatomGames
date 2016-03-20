//
//  ReelHandler.cpp
//  CardGame
//
//  Created by Sillyatom on 20/03/16.
//
//

#include "ReelHandler.h"
#include "../Helper/Utility.h"

ReelHandler::ReelHandler()
{
    _spinSpeed = 10.0f;
    _spinAcceleration = 100.0f;
    _spinStopDuration = 2.0f;
}

void ReelHandler::initReels(std::vector<Card*>symbols)
{
    _symbols = symbols;
    int symbolCount = (int)_symbols.size();
    
    _symbolHeight = symbols.at(0)->getBoundingBox().size.height;
    _thresholdY = _symbols.at(symbolCount - 2)->getPositionY();
    _startIndex = symbolCount-1;
    resetReel();
}

void ReelHandler::resetReel()
{
    _reel.clear();
    
    int symbolCount = (int)_symbols.size();
    _endIndex = (_startIndex == 0) ? (symbolCount-1) : (_startIndex - 1);
    _thresholdIndex = symbolCount-1;
    _lastPosY = _symbols.at(_startIndex)->getPositionY() - _symbolHeight;
    
    for (int index = _startIndex; index <= _thresholdIndex; index++)
    {
        _lastPosY -= _symbolHeight;
        Card * symbol = _symbols.at(index);
        symbol->setPositionY(_lastPosY);
        _reel.push_back(symbol);
    }
    
    _lastPosY = _symbols.at(_startIndex)->getPositionY();
    
    for (int index = _endIndex; index >= 0; index--)
    {
        _lastPosY += _symbolHeight;
        Card * symbol = _symbols.at(index);
        symbol->setPositionY(_lastPosY);
        _reel.push_back(symbol);
    }
}

void ReelHandler::spin(float duration)
{
    _spinDuration = duration;
    _spinStopDuration = 0.0f;
    _timeElapsed = 0.0f;
    _isSpinning = true;
}

void ReelHandler::stopSpin()
{
    _isSpinning = false;
    float refHeight = _reel.front()->getParent()->getBoundingBox().size.height;
    for (auto iter = _reel.begin(); iter != _reel.end(); iter++)
    {
        Card* symbol = (*iter);
        if (symbol->getPositionY() > 0.0 && symbol->getPositionY() < refHeight)
        {
            symbol->runAction(MoveTo::create(0.5f, Vec2(symbol->getPositionX(), refHeight * 0.5f)));
            return;
        }
    }
}

void ReelHandler::update(float dt)
{
    if (_isSpinning)
    {
        _timeElapsed += dt;

        if (_timeElapsed <= _spinDuration)
        {
            _spinAcceleration = Utility::SinInterpolate(_timeElapsed, 50.0f, 0.0f, _spinDuration);
        }
        else if (_timeElapsed > _spinDuration && _timeElapsed < _spinDuration * 2.0f)
        {
            _spinStopDuration += dt;
            _spinAcceleration = Utility::SinInterpolate(_spinDuration - _spinStopDuration, 50.0f, 0.0f, _spinDuration);
        }

        if (_timeElapsed >= _spinDuration + _spinStopDuration)
        {
            _timeElapsed = 0.0f;
            _spinStopDuration = 0.0f;
            stopSpin();
        }
        else
        {
            for (auto iter = _reel.begin(); iter != _reel.end();)
            {
                Card* symbol = (*iter);
                float newPos = symbol->getPositionY() - (_spinAcceleration * dt * _spinSpeed);
                symbol->setPositionY(newPos);
                
                if (newPos <= _thresholdY)
                {
                    _lastPosY = _reel.back()->getPositionY() + _symbolHeight;
                    iter = _reel.erase(iter);
                    symbol->setPositionY(_lastPosY);
                    _reel.push_back(symbol);
                }
                else
                {
                    iter++;
                }
            }
        }
    }
}