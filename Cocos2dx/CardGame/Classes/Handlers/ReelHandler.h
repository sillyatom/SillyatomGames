//
//  ReelHandler.hpp
//  CardGame
//
//  Created by Sillyatom on 20/03/16.
//
//

#ifndef ReelHandler_hpp
#define ReelHandler_hpp

#include <stdio.h>
#include "../GameElements/Card.h"

class ReelHandler
{
    std::vector<Card*> _symbols;
    std::vector<Card*> _reel;

    int _startIndex;
    int _endIndex;
    int _thresholdIndex;
    
    float _spinSpeed;
    float _spinAcceleration;
    
    float _symbolHeight;
    float _parentHeight;
    float _spinDuration;
    float _spinStopDuration;
    float _timeElapsed;
    float _thresholdY;
    float _lastPosY;
    
    bool _isSpinning;
    bool _canUpdate;
    
    void stopSpin();
public:
    ReelHandler();
    void update(float dt);
    void initReels(std::vector<Card*>symbols);
    void resetReel();
    void spin(float duration);
    bool getIsSpinning(){ return _isSpinning; }
};
#endif /* ReelHandler_hpp */
