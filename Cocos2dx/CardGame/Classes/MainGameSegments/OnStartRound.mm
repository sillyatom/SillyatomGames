//
//  OnStartRound.m
//  CardGame
//
//  Created by Sillyatom on 18/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::startRound(int type, rapidjson::Document &data)
{
    _isActivePlayer = isThisActivePlayer();
    _didShout = false;
    int roundNumber = data[NetworkKey::ROUND_ID.c_str()].GetInt();
    _roundHandler->setRoundNumber(roundNumber);
    _roundHandler->playNextRound();
    //acknowledge
    onProcessDataComplete();
}