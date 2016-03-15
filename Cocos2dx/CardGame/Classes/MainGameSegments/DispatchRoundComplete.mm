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
    
    //if failed to shout
    //distribute cards to players
    NSMutableDictionary* extraDict = nil;
    
    if (_dealer->hasMatch())
    {
        if (!_didShout)
        {
            extraDict = [[NSMutableDictionary alloc]init];
            std::vector<Card*> matches = _dealer->getMatchedData();
            std::map<std::string, std::vector<Card*>> distCards;
            int numPlayers = (int)_playersExcludingThis.size();
            int cardCount = (int)matches.size();
            for (int index = 0; index < cardCount; index++)
            {
                std::string playerId = _playersExcludingThis.at(index % numPlayers)->getPlayerId();
                Card * card = matches.back();
                matches.pop_back();
                distCards[playerId].push_back(card);
            }
            for (auto iter = distCards.begin(); iter != distCards.end(); iter++)
            {
                std::string playerId = iter->first;
                std::vector<Card*> cards = iter->second;
                NSMutableArray * nsCards = [[NSMutableArray alloc]init];
                for (auto card : cards)
                {
                    [nsCards addObject:[[NSString alloc]initWithUTF8String:card->getValue().c_str()]];
                }
                [extraDict setObject:nsCards forKey:[[NSString alloc]initWithUTF8String:playerId.c_str()]];
            }
            
            for (auto iter = distCards.begin(); iter != distCards.end(); iter++)
            {
                std::string playerId = iter->first;
                Player * player = getPlayerById(playerId);
                std::vector<Card*> cards = iter->second;
                for (auto card : cards)
                {
                    player->addEarnedCard(_dealer->removeCardWithValue(card->getValue()));
                    //need to add a delay callback and process data further
                }
            }

        }
    }
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
                                  [NSNumber numberWithInt:_dealer->getLastMatchIndex()], [[NSString alloc]initWithUTF8String:NetworkKey::EARNED_LENGTH_START_INDEX.c_str()],
                                  nil];
    if (extraDict != nil)
    {
        [dict addEntriesFromDictionary:extraDict];
    }
    
    NSError * error;
    NSData * data = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    NSLog(@" [ on dispatch RoundComplete ] %d by %s ",_roundHandler->getRoundNumber(), [[GKLocalPlayer localPlayer]alias].UTF8String);
    
    _cardSelectionHandler->setActiveCard(NULL);
    api->data = data;
    _apiHandler->reliableDispatchToAll(api);
}