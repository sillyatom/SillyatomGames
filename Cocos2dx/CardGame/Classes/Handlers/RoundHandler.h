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
    STARTED = 1,
    SUCCESS = 2
}RoundStatus;

class RoundHandler : public ExtSprite
{
private:
    int _currentRound;
    std::string _nextActivePlayer;
    RoundStatus _status;
    
    RoundHandler();
    void startRoundTimer();
    void stopRoundTimer();

    void onRoundTimerTick(float dt);
public:
    std::function<void(int, RoundStatus)> onRoundComplete;
    static RoundHandler * getInstance();

    virtual bool init();
    void stopRound();
    void startRound(int roundNumber);
    void playNextRound();
    
    std::string getNextActivePlayer(){ return _nextActivePlayer; }
    void setNextActivePlayer(std::string playerId){ _nextActivePlayer = playerId; }
    
    int getRoundNumber(){ return _currentRound; }
    void setRoundNumber(int val){ _currentRound = val; }
    
    RoundStatus getRoundStatus(){ return _status; }
    void setRoundStatus(RoundStatus val){ _status = val; }
};
#endif /* RoundHandler_hpp */
