//
//  HttpConnection.cpp
//  MyCppGame
//
//  Created by Sillyatom on 27/01/15.
//
//

#include "HttpConnection.h"

HttpConnection::HttpConnection()
{

}

HttpConnection* HttpConnection::getInstance()
{
    static HttpConnection* instance = new HttpConnection();
    return instance;
}

void HttpConnection::POST(std::string postData, std::string eventName, const cocos2d::network::ccHttpRequestCallback &callback)
{
    return;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    CCLOG(" http post %s data %s",eventName.c_str(), postData.c_str());
    cocos2d::network::HttpRequest* request = new cocos2d::network::HttpRequest();
    request->setUrl("http://www.sillyatomgames.com/funlites/index.php");
    request->setRequestType(cocos2d::network::HttpRequest::Type::POST);
    
    if (callback != nullptr)
    {
        request->setResponseCallback(callback);
    }

    // write the post data
    request->setRequestData(postData.c_str(), postData.length());
    
    request->setTag(eventName.c_str());
    cocos2d::network::HttpClient::getInstance()->send(request);
    request->release();
#endif
}