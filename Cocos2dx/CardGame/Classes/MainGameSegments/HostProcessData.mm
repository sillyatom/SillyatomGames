//
//  HostProcessData.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::processHostData(int type, rapidjson::Document &data)
{
    //update API id
    API::setRunningId(data[NetworkKey::API_ID.c_str()].GetInt());
    
    switch (type)
    {
        case NEXT_ROUND:
        {
            startRound(data);
        }
        break;
            
        case ROUND_RESULT:
        {
            onRoundResult(data);
        }
        break;
            
        default:
            break;
    }
    onProcessHostDataComplete(type, data);
}

void MainGame::onProcessHostDataComplete(int type, rapidjson::Document &data)
{
    _apiHandler->dispatchToPlayerWithData(data[NetworkKey::PLAYER_ID.c_str()].GetString(), getAcknowledgementData(data));
}