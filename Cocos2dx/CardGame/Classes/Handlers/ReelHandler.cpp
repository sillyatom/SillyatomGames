//
//  ReelHandler.cpp
//  CardGame
//
//  Created by Sillyatom on 20/03/16.
//
//

#include "ReelHandler.h"
#include "CardSelectionHandler.h"
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
    _reel = symbols;
    int symbolCount = (int)_reel.size();
    _parentHeight = _reel.front()->getParent()->getBoundingBox().size.height;
    _symbolHeight = symbols.at(0)->getBoundingBox().size.height;
    _thresholdY = _reel.at(symbolCount - 2)->getPositionY();
    _startIndex = symbolCount-1;
    resetReel();
}

void ReelHandler::resetReel()
{
    int symbolCount = (int)_reel.size();
    _endIndex = (_startIndex == 0) ? (symbolCount-1) : (_startIndex - 1);
    _thresholdIndex = symbolCount-1;
    _lastPosY = _parentHeight * 0.5f;
    
    for (int index = _startIndex; index <= _thresholdIndex; index++)
    {
        Card * symbol = _reel.at(index);
        symbol->setPositionY(_lastPosY);
        _lastPosY -= _symbolHeight;
    }
    
    _lastPosY = _reel.at(_startIndex)->getPositionY();
    
    for (int index = _endIndex; index >= 0; index--)
    {
        _lastPosY += _symbolHeight;
        Card * symbol = _reel.at(index);
        symbol->setPositionY(_lastPosY);
    }
}

void ReelHandler::spin(float duration)
{
    resetReel();
    
    _spinDuration = duration;
    _spinStopDuration = 0.0f;
    _timeElapsed = 0.0f;
    _isSpinning = true;
    _canUpdate = true;
}

void ReelHandler::stopSpin()
{
    _canUpdate = false;
    float refHeight = _reel.front()->getParent()->getBoundingBox().size.height;
    Card* symbolBefore = NULL;
    
    int reelSize = (int)_reel.size();
    
    for (int index = 0; index < reelSize; index++)
    {
        Card* symbol = _reel.at(index);
        if (symbol->getPositionY() > 0.0 && symbol->getPositionY() < refHeight)
        {
            symbol->runAction(MoveTo::create(0.5f, Vec2(symbol->getPositionX(), refHeight * 0.5f)));
            _startIndex = index;
            //if the next symbol is not the end
            if (index+1 != reelSize)
            {
                index++;
            }
            else
            {
                index = 0;
            }
            //take the next symbol
            symbolBefore = _reel.at(index);
            symbolBefore->runAction(MoveTo::create(0.5f, Vec2(symbolBefore->getPositionX(), refHeight + (refHeight * 0.5f))));
            Utility::delayedCall(symbol, CallFunc::create([=]()
            {
                _isSpinning = false;
                CardSelectionHandler::getInstance()->setActiveCard(_reel.at(_startIndex));
            }), 0.5f);
            
            return;
        }
    }
}

void ReelHandler::update(float dt)
{
    if (_canUpdate && _isSpinning)
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