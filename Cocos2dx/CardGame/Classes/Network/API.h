//
//  API.hpp
//  CardGame
//
//  Created by Sillyatom on 08/03/16.
//
//

#ifndef API_hpp
#define API_hpp

#include <stdio.h>
#include "../GameElements/Player.h"
class API
{
    static int _runningId;
    bool _executeOnReceive;
public:
    API();
    int apiId;
    int apiType;
    
    static int getRunningId(){ return _runningId; }
    static void setRunningId(int val){ _runningId = val; }
    
    bool getExecuteOnReceive(){ return _executeOnReceive; }
    void setExecuteOnReceive(bool val){ _executeOnReceive = val; }
    
    NSData * data;
    std::vector<std::string> activePlayers;
    
    bool isRequestComplete(){ return (activePlayers.size() <= 0);}
    void removePlayer(std::string playerId);
};
#endif /* API_hpp */
