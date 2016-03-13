//
//  DispatchCardsData.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::dispatchCardsData()
{
    //create json data and send to respective players
    API * api = new API();
    api->apiType = INIT_CARDS_DATA;
    api->activePlayers = _playersIdExcludingThis;
    api->setExecuteOnReceive(false);
    
    int len = _dealer->getDeckSize();
    for (int index = 0; index < len; index++)
    {
        _players.at((index%_numPlayers))->addCard(_dealer->removeCard());
    }
    
    NSMutableDictionary *dict = [[NSMutableDictionary alloc]init];
    [dict setValue:[NSNumber numberWithInt:INIT_CARDS_DATA] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::API.c_str()]];
    [dict setValue:[NSNumber numberWithInt:api->apiId] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::API_ID.c_str()]];
    [dict setValue:[[NSString alloc]initWithUTF8String:NetworkKey::HOST.c_str()] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::SENDER.c_str()]];
    [dict setValue:[[NSString alloc]initWithString:[[GKLocalPlayer localPlayer]playerID]] forKey:[[NSString alloc]initWithUTF8String:NetworkKey::PLAYER_ID.c_str()]];

    for (auto player : _players)
    {
        NSString * playerId = [NSString stringWithUTF8String:player->getPlayerId().c_str()];
        NSMutableArray * cards = [[NSMutableArray alloc]init];
        
        for (auto card : player->getCards())
        {
            std::string cardNumber = (card->getCardValue() + card->getCardType());
            [cards addObject:[NSString stringWithUTF8String:cardNumber.c_str()]];
        }
        
        [dict setValue:cards forKey:playerId];
    }
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    
    api->data = data;
    _apiHandler->reliableDispatchToAll(api);
    
    float delay = playDistributeCards();
    pauseProcessEvents();
    Utility::delayedCall(this, CallFunc::create(CC_CALLBACK_0(MainGame::onDistributeCards, this)), delay);
}
