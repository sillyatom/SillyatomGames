//
//  Network.cpp
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#include "Network.h"


const std::string NetworkKey::API = "api";
const std::string NetworkKey::API_ID = "apiId";
const std::string NetworkKey::HOST = "host";
const std::string NetworkKey::ROUND_ID = "roundId";
const std::string NetworkKey::SENDER = "sender";
const std::string NetworkKey::HOST_ID = "hostId";
const std::string NetworkKey::PLAYER_ID = "playerId";
const std::string NetworkKey::PLAYERS_ID = "playerIds";
const std::string NetworkKey::ACTIVE_PLAYERS = "activePlayers";
const std::string NetworkKey::CARD_VALUE = "cardValue";
const std::string NetworkKey::CARD_TYPE = "cardType";
const std::string NetworkKey::CARD_VALUE_TYPE = "cardValueType";
const std::string NetworkKey::NEXT_ROUND_PLAYER = "nextRoundPLayer";

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