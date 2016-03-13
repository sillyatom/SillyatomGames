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
    std::string sender = data[NetworkKey::SENDER.c_str()].GetString();

    if (Network::isHost)
    {
        if ( sender == NetworkKey::HOST)
        {
            _apiHandler->onReceiveData(data);
        }
        else
        {
            processData(type, data);
        }
    }
    else
    {
        if ( strcmp(sender.c_str(), [[GKLocalPlayer localPlayer]playerID].UTF8String) == 0)
        {
            _apiHandler->onReceiveData(data);
        }
        else
        {
            processData(type, data);
        }
    }
}

