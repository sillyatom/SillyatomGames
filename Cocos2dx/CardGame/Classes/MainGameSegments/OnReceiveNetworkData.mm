//
//  OnReceiveNetworkData.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::onReceiveNetworkData(int type, rapidjson::Document &data)
{
    NSLog(@"[ MainGame OnReceiveNetworkData ] Type : %d",type);
    
    std::string sender = data[NetworkKey::SENDER.c_str()].GetString();
    
    if (Network::isHost)
    {
        if ( sender == NetworkKey::HOST)
        {
            _apiHandler->onReceiveData(data);
        }
        else
        {
            processHostData(type, data);
        }
    }
    else
    {
        processData(type, data);
    }
}

