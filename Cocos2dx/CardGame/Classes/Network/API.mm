//
//  API.cpp
//  CardGame
//
//  Created by Sillyatom on 08/03/16.
//
//

#include "API.h"
int API::index = 0;

API::API()
{
    apiId = index++;
}

void API::removePlayer(std::string playerId)
{
    for (std::vector<Player*>::iterator iter = activePlayers.begin(); iter != activePlayers.end();)
    {
        if((*iter)->getPlayerId() == playerId)
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