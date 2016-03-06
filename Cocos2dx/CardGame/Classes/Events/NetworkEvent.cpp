//
//  NetworkEvents.cpp
//  CardGame
//
//  Created by Sillyatom on 04/03/16.
//
//

#include "NetworkEvent.h"

const std::string NetworkEvent::NETWORKEVENT_TYPES = "NETWORKEVENT_TYPES";
const std::string NetworkEvent::RECEIVE_DATA = "RECEIVE_DATA";

NetworkEvent::NetworkEvent(int apiType, const std::string& eventType, const char* eventData):cocos2d::EventCustom(NETWORKEVENT_TYPES)
{
    api = apiType;
    type = eventType;
    size_t length = strlen(eventData);
    data = (char*)malloc(length+1);
    memset(data, '\0', length+1);
    memcpy(data, eventData, length);
}