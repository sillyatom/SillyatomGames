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
            CCLOG(" ON API SUCCESS : SELECTED HOST");
            dispatchCardsData();
            break;
        case INIT_CARDS_DATA:
            CCLOG(" ON API SUCCESS : INIT CARDS DONE");
            break;
    }
}