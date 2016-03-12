//
//  OnRoundResult.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::onRoundResult(rapidjson::Document &data)
{
    NSLog(@" [ onRoundResult (%d) ] received by %s ",data[NetworkKey::ROUND_ID.c_str()].GetInt(),[[GKLocalPlayer localPlayer]alias].UTF8String);
    //get the round id
    _roundHandler->setRoundNumber(data[NetworkKey::ROUND_ID.c_str()].GetInt());
    _roundHandler->setNextActivePlayer(data[NetworkKey::NEXT_ROUND_PLAYER.c_str()].GetString());
    
    Player * player = getPlayerById(data[NetworkKey::PLAYER_ID.c_str()].GetString());
    std::string cardValue = data[NetworkKey::CARD_VALUE_TYPE.c_str()].GetString();
    Card * card = player->removeCardWithValue(cardValue);
    _dealer->dealCard(card);
}