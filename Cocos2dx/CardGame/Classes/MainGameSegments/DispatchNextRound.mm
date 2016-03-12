//
//  DispatchNextRound.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::dispatchNextRound()
{
    std::string nextPlayerId = (*_playersIdExcludingThis.begin()).c_str();
    
    API * api = new API();
    api->apiType = NEXT_ROUND;
    api->activePlayers.push_back(nextPlayerId);
    
    NSMutableDictionary * dict = [[NSMutableDictionary alloc]initWithObjectsAndKeys:
                                  [[NSString alloc]initWithUTF8String: (Network::isHost) ? NetworkKey::HOST.c_str() : [[GKLocalPlayer localPlayer]playerID].UTF8String], [[NSString alloc]initWithUTF8String:NetworkKey::SENDER.c_str()],
                                  [NSNumber numberWithInt:api->apiType], [[NSString alloc]initWithUTF8String:NetworkKey::API.c_str()],
                                  [NSNumber numberWithInt:_roundHandler->getRoundNumber()], [[NSString alloc]initWithUTF8String:NetworkKey::ROUND_ID.c_str()],
                                  [NSNumber numberWithInt:api->apiId], [[NSString alloc]initWithUTF8String:NetworkKey::API_ID.c_str()],
                                  [[NSString alloc]initWithUTF8String:nextPlayerId.c_str()], [[NSString alloc]initWithUTF8String:NetworkKey::NEXT_ROUND_PLAYER.c_str()],
                                  [[NSString alloc]initWithString:[[GKLocalPlayer localPlayer]playerID]], [[NSString alloc]initWithUTF8String:NetworkKey::PLAYER_ID.c_str()],
                                  nil];
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    
    api->data = data;
    _apiHandler->reliableDispatchToPlayer(nextPlayerId, api);
}