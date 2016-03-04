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

class NetworkEvents : public cocos2d::EventCustom
{
public:
    static const std::string NETWORKEVENT_TYPES;
    static const std::string RECEIVE_DATA;
    
    std::string type;
    std::string data;
    
    NetworkEvents(const std::string& eventType, const std::string& eventData):cocos2d::EventCustom(NETWORKEVENT_TYPES)
    {
        type = eventType;
        data = eventData;
    }
};

#endif /* NetworkEvents_hpp */
