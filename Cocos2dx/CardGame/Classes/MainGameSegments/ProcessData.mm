//
//  ProcessData.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::processData(int type, rapidjson::Document &data)
{
    //update API id
    API::setRunningId(data[NetworkKey::API_ID.c_str()].GetInt());
    switch (type)
    {
        case SELECTED_HOST:
        {
            onHostSelected(type, data);
        }
        break;
            
        case INIT_CARDS_DATA:
        {
            updateCardsData(type, data);
        }
        break;
            
        case ROUND_RESULT:
        {
            onRoundResult(type, data);
        }
        break;
            
        case NEXT_ROUND:
        {
            startRound(type, data);
        }
        break;
            
        default:
            break;
    }
}

void MainGame::onProcessDataComplete()
{
    _apiHandler->dispatchToPlayerWithData(_data[NetworkKey::PLAYER_ID.c_str()].GetString(), getAcknowledgementData(_data));
}