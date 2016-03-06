//
//  Network.cpp
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#include "Network.h"

static Network instance;

void Network::pushEvent(NetworkEvent* event)
{
    _events.push_back(event);
}

NetworkEvent* Network::popEvent(int layer)
{
    NetworkEvent * event = NULL;
    
    for (std::vector<NetworkEvent*>::iterator iter = _events.begin(); iter != _events.end();)
    {
        if (canPop(layer, (*iter)->api))
        {
            event = (*iter);
            iter = _events.erase(iter);
            break;
        }
        else
        {
            iter++;
        }
    }
    return event;
}

bool Network::canPop(int layer, int apiType)
{
    std::vector<NetworkAPI> layerApi = GameConstants::layerApiMap[(APILayer)layer];
    for (auto api : layerApi)
    {
        if (apiType == api)
        {
            return true;
        }
    }
    return false;
}

Network * Network::getInstance()
{
    return &instance;
}