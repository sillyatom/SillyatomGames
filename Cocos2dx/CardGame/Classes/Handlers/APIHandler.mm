//
//  APIHandler.cpp
//  CardGame
//
//  Created by Sillyatom on 08/03/16.
//
//

#include "APIHandler.h"
#include "../../proj.ios_mac/GameKitHelper/GameKitHelper.h"

APIHandler* APIHandler::getInstance()
{
    static APIHandler * instance = new APIHandler();
    return instance;
}

void APIHandler::dispatchToAll(API* api)
{
    _apiList.push_back(api);
    [[GameKitHelper sharedGameKitHelper]sendDataToAll:api->data];
}

void APIHandler::onReceiveData(int type, rapidjson::Document &data)
{
    int apiId = data["apiId"].GetInt();
    API* api = getAPIById(apiId);
    
    if (api != NULL)
    {
        api->removePlayer(data[NetworkKey::PLAYER_ID.c_str()].GetString());
        if (api->isRequestComplete())
        {
            removeAPIById(apiId);
            apiSuccessHandler(type);
        }
    }
}

API* APIHandler::getAPIById(int apiId)
{
    for (auto api : _apiList)
    {
        if (api->apiId == apiId)
        {
            return api;
        }
    }
    return NULL;
}

void APIHandler::removeAPIById(int apiId)
{
    for (std::vector<API*>::iterator iter = _apiList.begin(); iter != _apiList.end();)
    {
        if ((*iter)->apiId == apiId)
        {
            _apiList.erase(iter);
            return;
        }
    }
}