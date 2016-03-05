//
//  Network.cpp
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#include "Network.h"

static Network instance;
std::mutex mutex;

void Network::pushEvent(NetworkEvent* event)
{
    mutex.lock();
        _events.push_back(event);
    mutex.unlock();
}

NetworkEvent* Network::popEvent()
{
    NetworkEvent * event = NULL;
    
    mutex.lock();
    if (_events.size() > 0)
    {
        event = _events.front();
        _events.erase(_events.begin());
        return event;
    }
    mutex.unlock();
    return event;
}

Network * Network::getInstance()
{
    return &instance;
}
