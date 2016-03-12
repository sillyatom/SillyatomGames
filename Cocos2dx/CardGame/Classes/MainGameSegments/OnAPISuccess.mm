//
//  OnAPISuccess.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::onAPISuccess(int api)
{
    switch(api)
    {
        case SELECTED_HOST:
            dispatchCardsData();
            break;
        case INIT_CARDS_DATA:
            startMatch();
            break;
        case ROUND_RESULT:
            dispatchNextRound();
            break;
    }
}