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

void APIHandler::reliableDispatchToAll(API* api)
{
    _apiList.push_back(api);
    [[GameKitHelper sharedGameKitHelper]sendDataToAll:api->data];
}

void APIHandler::dispatchToPlayer(std::string playerId, API *api)
{
    [[GameKitHelper sharedGameKitHelper] sendDataToPlayer:[[NSString alloc]initWithUTF8String:playerId.c_str()] data:api->data];
}

void APIHandler::dispatchToPlayerWithData(std::string playerId, NSData *data)
{
    [[GameKitHelper sharedGameKitHelper] sendDataToPlayer:[[NSString alloc]initWithUTF8String:playerId.c_str()] data:data];
}

void APIHandler::onReceiveData(rapidjson::Document &data)
{
    int apiId = data[NetworkKey::API_ID.c_str()].GetInt();
    API* api = getAPIById(apiId);
    int apiType = api->apiType;
    NSLog(@" [ API HANDLER ] on receive acknowlegement for apiId %d ", apiId);

    if (api != NULL)
    {
        api->removePlayer(data[NetworkKey::PLAYER_ID.c_str()].GetString());
        if (api->isRequestComplete())
            
        {
            removeAPIById(apiId);
            apiSuccessHandler(apiType);
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