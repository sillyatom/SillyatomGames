//
//  OnRoundResult.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::onRoundResult(int type, rapidjson::Document &data)
{
    NSLog(@" [ onRoundResult (%d) ] received by %s ",data[NetworkKey::ROUND_ID.c_str()].GetInt(),[[GKLocalPlayer localPlayer]alias].UTF8String);
    //get the round id
    _roundHandler->setRoundNumber(data[NetworkKey::ROUND_ID.c_str()].GetInt());
    _roundHandler->setNextActivePlayer(data[NetworkKey::NEXT_ROUND_PLAYER.c_str()].GetString());
    
    Player * player = getPlayerById(data[NetworkKey::PLAYER_ID.c_str()].GetString());
    std::string cardValue = data[NetworkKey::CARD_VALUE_TYPE.c_str()].GetString();
    Card * card = player->removeCardWithValue(cardValue);
    _dealer->dealCard(card, CallFunc::create([=]()
    {
        int earnedStartIndex = _data[NetworkKey::EARNED_LENGTH_START_INDEX.c_str()].GetInt();
        if (earnedStartIndex >= 0)
        {
            std::vector<Card*> matches = _dealer->removeMatchesFromIndex(earnedStartIndex);
            float delay = 0.0f;
            for (auto matchedCard : matches)
            {
                player->addEarnedCard(matchedCard, delay);
                delay += GameConstants::DEAL_ANIM_TIME;
            }
        
            Utility::delayedCall(this, CallFunc::create([=]()
            {
                //acknowledge
                onProcessDataComplete();
            }), delay);
        }
        else
        {
            //on failed to shout
            //distributed cards
            float delay = 0.0f;
            for (auto player : _players)
            {
                const rapidjson::Value& cards = _data[player->getPlayerId().c_str()];
                if (!cards.IsNull())
                {
                    int length = (int)cards.Size();
                    for (int i = 0; i < length; i++)
                    {
                        std::string sCard = cards[i].GetString();
                        Card * card = _dealer->removeCardWithValue(sCard);
                        player->addEarnedCard(card, delay);
                        delay += GameConstants::DEAL_ANIM_TIME;
                    }
                }
            }
            Utility::delayedCall(this, CallFunc::create([=]()
                                                        {
                                                            //acknowledge
                                                            onProcessDataComplete();
                                                        }), delay);
        }
    }));
}