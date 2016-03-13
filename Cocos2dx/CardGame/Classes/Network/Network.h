//
//  Network.hpp
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#ifndef Network_hpp
#define Network_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "../Events/NetworkEvent.h"
#include "../Constants/GameConstants.h"

USING_NS_CC;

class NetworkKey
{
public:
    static const std::string API;
    static const std::string API_ID;
    static const std::string SENDER;
    static const std::string HOST;
    static const std::string ACTIVE_PLAYERS;
    static const std::string HOST_ID;
    static const std::string ROUND_ID;
    static const std::string PLAYER_ID;
    static const std::string PLAYERS_ID;
    static const std::string CARD_VALUE_TYPE;
    static const std::string CARD_VALUE;
    static const std::string CARD_TYPE;
    static const std::string NEXT_ROUND_PLAYER;
    static const std::string EARNED_LENGTH_START_INDEX;
};
class Network
{
private:
    std::vector<NetworkEvent*> _events;
    bool canPop(int layer, int apiLayer);
public:
    void pushEvent(NetworkEvent* event);
    NetworkEvent* popEvent(int layer);
    static Network * getInstance();
    static bool isHost;
    static void findMatches();
};

#endif /* Network_hpp */
