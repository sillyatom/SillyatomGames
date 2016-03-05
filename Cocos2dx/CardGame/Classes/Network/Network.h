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
USING_NS_CC;

class Network
{
private:
    std::vector<NetworkEvent*> _events;
public:
    void pushEvent(NetworkEvent* event);
    NetworkEvent* popEvent();
    static Network * getInstance();
    static bool isHost;
    static void findMatches();
};

#endif /* Network_hpp */
