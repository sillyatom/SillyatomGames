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
    std::vector<API*> _apiList;
    API* getAPIById(int apiId);
    void removeAPIById(int apiId);
public:
    std::function<void(NetworkAPI)> apiSuccessHandler;
    static APIHandler* getInstance();
    void dispatchToAll(API* api);
    void onReceiveData(int type, rapidjson::Document &data);
};
#endif /* APIHandler_hpp */
