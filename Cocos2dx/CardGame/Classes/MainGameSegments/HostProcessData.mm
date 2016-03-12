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
    
    onProcessHostDataComplete(type, data);
}

void MainGame::onProcessHostDataComplete(int type, rapidjson::Document &data)
{
    
}