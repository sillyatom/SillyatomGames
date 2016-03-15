//
//  OnReceiveCardsData.m
//  CardGame
//
//  Created by Sillyatom on 16/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

float MainGame::updateCardsData(int type, rapidjson::Document &data)
{
    for (auto player : _players)
    {
        const rapidjson::Value& cards = data[player->getPlayerId().c_str()];
        
        int length = (int)cards.Size();
        for (int i = 0; i < length; i++)
        {
            std::string card = cards[i].GetString();
            player->addCard(_dealer->removeCardWithValue(card));
        }
    }
    
    //distribute card animation
    float delay = playDistributeCards();
    pauseProcessEvents();
    
    Utility::delayedCall(this, CallFunc::create([=]()
                                                {
                                                    //acknowledge
                                                    onProcessDataComplete();
                                                    onDistributeCards();
                                                }), delay);
    return delay;
}
