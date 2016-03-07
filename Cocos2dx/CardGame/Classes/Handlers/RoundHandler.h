//
//  RoundHandler.hpp
//  CardGame
//
//  Created by Sillyatom on 07/03/16.
//
//

#ifndef RoundHandler_hpp
#define RoundHandler_hpp

#include <stdio.h>
#include "../Ext/ExtSprite.h"

USING_NS_CC;

typedef enum
{
    COMPLETED = 0,
    SUCCESS = 1,
    FAILED = 2,
    CANCELLED = 3
}RoundStatus;

class RoundHandler : public ExtSprite
{
private:
    int _currentRound;
        
    RoundHandler();
    void startRoundTimer();
    void onRoundTimerTick(float dt);
public:
    std::function<void(int, RoundStatus)> onRoundComplete;
    static RoundHandler * getInstance();

    virtual bool init();
    void stopRoundTimer();

    void startRound(int roundNumber);
    void playNextRound(int roundNumber);
};
#endif /* RoundHandler_hpp */
