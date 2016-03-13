//
//  DispatchHostId.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::dispatchHostId()
{
    API * api = new API();
    api->apiType = SELECTED_HOST;
    api->activePlayers = _playersIdExcludingThis;
    
    NSMutableArray * playerIds = [[NSMutableArray alloc]init];
    for (auto playerId : _playersId)
    {
        [playerIds addObject:[[NSString alloc]initWithUTF8String:playerId.c_str()]];
    }
    NSMutableDictionary * dict = [[NSMutableDictionary alloc]initWithObjectsAndKeys:
                                  [[NSString alloc]initWithUTF8String:NetworkKey::HOST.c_str()], [[NSString alloc]initWithUTF8String:NetworkKey::SENDER.c_str()],
                                  [NSNumber numberWithInt:api->apiType], [[NSString alloc]initWithUTF8String:NetworkKey::API.c_str()],
                                  [NSNumber numberWithInt:api->apiId], [[NSString alloc]initWithUTF8String:NetworkKey::API_ID.c_str()],
                                  [[NSArray alloc]initWithArray:playerIds], [[NSString alloc]initWithUTF8String:NetworkKey::PLAYERS_ID.c_str()],
                                  [[NSString alloc]initWithString:[[GKLocalPlayer localPlayer]playerID]], [[NSString alloc]initWithUTF8String:NetworkKey::HOST_ID.c_str()],
                                  [[NSString alloc]initWithString:[[GKLocalPlayer localPlayer]playerID]], [[NSString alloc]initWithUTF8String:NetworkKey::PLAYER_ID.c_str()],

                                  nil];
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    
    api->data = data;
    _apiHandler->reliableDispatchToAll(api);
}