//
//  DispatchRoundComplete.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::dispatchRoundComplete()
{
    _isActivePlayer = false;
    
    API * api = new API();
    api->apiType = ROUND_RESULT;
    api->activePlayers = _playersIdExcludingThis;
    
    Card* card = _cardSelectionHandler->getSelectedCard();
    
    std::string nextPlayerId = (*_playersIdExcludingThis.begin()).c_str();
    NSMutableDictionary * dict = [[NSMutableDictionary alloc]initWithObjectsAndKeys:
                                  [[NSString alloc]initWithUTF8String: (Network::isHost) ? NetworkKey::HOST.c_str() : [[GKLocalPlayer localPlayer]playerID].UTF8String], [[NSString alloc]initWithUTF8String:NetworkKey::SENDER.c_str()],
                                  [NSNumber numberWithInt:api->apiType], [[NSString alloc]initWithUTF8String:NetworkKey::API.c_str()],
                                  [NSNumber numberWithInt:_roundHandler->getRoundNumber()], [[NSString alloc]initWithUTF8String:NetworkKey::ROUND_ID.c_str()],
                                  [NSNumber numberWithInt:api->apiId], [[NSString alloc]initWithUTF8String:NetworkKey::API_ID.c_str()],
                                  [[NSString alloc]initWithUTF8String:nextPlayerId.c_str()], [[NSString alloc]initWithUTF8String:NetworkKey::NEXT_ROUND_PLAYER.c_str()],
                                  [[NSString alloc]initWithString:[[GKLocalPlayer localPlayer]playerID]], [[NSString alloc]initWithUTF8String:NetworkKey::PLAYER_ID.c_str()],
                                  [[NSString alloc]initWithUTF8String:card->getValue().c_str()], [[NSString alloc]initWithUTF8String:NetworkKey::CARD_VALUE_TYPE.c_str()],
                                  nil];
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    NSLog(@" [ on dispatch RoundComplete ] %d by %s ",_roundHandler->getRoundNumber(), [[GKLocalPlayer localPlayer]alias].UTF8String);
    
    _cardSelectionHandler->setActiveCard(NULL);
    api->data = data;
    _apiHandler->reliableDispatchToAll(api);
}