//
//  OnHostSelectedHost.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::onHostSelected(rapidjson::Document &data)
{
    _hostId = data[NetworkKey::HOST_ID.c_str()].GetString();
    
    //update playerIds
    rapidjson::Value &objects = data[NetworkKey::PLAYERS_ID.c_str()];
    int count = objects.Size();
    
    int index;
    for (index = 0; index < count; index++)
    {
        if (objects[index].GetString() == [[GKLocalPlayer localPlayer]playerID].UTF8String)
        {
            break;
        }
    }
    index--;
    size_t i = 0;
    while (i < count)
    {
        if (index == count)
        {
            index = 0;
        }
        
        _playersId.push_back(objects[index].GetString());
        
        i = _playersId.size();
        index++;
    }
    
    //create players
    createPlayers();
}

