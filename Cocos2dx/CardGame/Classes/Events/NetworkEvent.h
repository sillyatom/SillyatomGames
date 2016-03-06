//
//  NetworkEvents.hpp
//  CardGame
//
//  Created by Sillyatom on 04/03/16.
//
//

#ifndef NetworkEvents_hpp
#define NetworkEvents_hpp

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class NetworkEvent : public cocos2d::EventCustom
{
public:
    static const std::string NETWORKEVENT_TYPES;
    static const std::string RECEIVE_DATA;
    
    std::string type;
    int api;
    char* data;
    
    NetworkEvent(int api, const std::string& eventType, const char* eventData);
};

#endif /* NetworkEvents_hpp */
