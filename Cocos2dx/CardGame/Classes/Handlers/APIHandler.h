//
//  APIHandler.hpp
//  CardGame
//
//  Created by Sillyatom on 08/03/16.
//
//

#ifndef APIHandler_hpp
#define APIHandler_hpp

#include <stdio.h>
#include "../Network/Network.h"
#include "../Network/API.h"
#include "../Network/NetworkConstants.h"
#include "../GameElements/Player.h"
#include "external/json/document.h"

class APIHandler
{
private:
    int _runningApiId;
    std::vector<API*> _apiList;
    API* getAPIById(int apiId);
    void removeAPIById(int apiId);
public:
    void setRunningApiId(int index){ _runningApiId = index; }
    int getRunningApiId(){ return _runningApiId; }
    
    std::function<void(int)> apiSuccessHandler;
    
    static APIHandler* getInstance();
    void reliableDispatchToAll(API* api);
    void dispatchToPlayer(std::string playerId, API* api);
    void dispatchToPlayerWithData(std::string playerId, NSData* data);
    void onReceiveData(rapidjson::Document &data);
};
#endif /* APIHandler_hpp */
