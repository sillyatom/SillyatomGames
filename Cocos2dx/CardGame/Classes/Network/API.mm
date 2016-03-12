//
//  API.cpp
//  CardGame
//
//  Created by Sillyatom on 08/03/16.
//
//

#include "API.h"
int API::_runningId = 0;

API::API()
{
    apiId = _runningId++;
}

void API::removePlayer(std::string playerId)
{
    for (std::vector<std::string>::iterator iter = activePlayers.begin(); iter != activePlayers.end();)
    {
        if((*iter) == playerId)
        {
            activePlayers.erase(iter);
            return;
        }
        else
        {
            iter++;
        }
    }
}