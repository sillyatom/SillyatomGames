//
//  HttpConnection.h
//  MyCppGame
//
//  Created by Sillyatom on 27/01/15.
//
//

#ifndef __MyCppGame__HttpConnection__
#define __MyCppGame__HttpConnection__

#include "cocos2d.h"
#include "../Constants.h"
#include "network/HttpClient.h"

USING_NS_CC;

class HttpConnection
{
    //void onResponse(network::HttpClient * client, network::HttpResponse * response);
    
public:
    HttpConnection();
    static HttpConnection* getInstance();
    void POST(std::string postData, std::string eventName, const cocos2d::network::ccHttpRequestCallback &callback);
};

#endif /* defined(__MyCppGame__HttpConnection__) */
