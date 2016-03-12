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
            onHostSelected(data);
        }
            break;
            
        case INIT_CARDS_DATA:
        {
            updateCardsData(data);
        }
            break;
            
        default:
            break;
    }
    
    onProcessDataComplete(type, data);
}

void MainGame::onProcessDataComplete(int type, rapidjson::Document &data)
{
    CCLOG("[ onProcessDataComplete ] for type %d ",type);
    _apiHandler->dispatchToPlayerWithData(_hostId, getAcknowledgementData(data));
}