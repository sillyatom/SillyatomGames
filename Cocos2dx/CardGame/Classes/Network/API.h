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
    static int index;
public:
    API();
    int apiId;
    int apiType;

    NSData * data;

    std::vector<Player*> activePlayers;
    
    bool isRequestComplete(){ return (activePlayers.size() <= 0);}
    void removePlayer(std::string playerId);
};
#endif /* API_hpp */
