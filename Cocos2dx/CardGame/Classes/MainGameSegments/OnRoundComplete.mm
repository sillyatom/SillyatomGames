//
//  OnRoundComplete.m
//  CardGame
//
//  Created by Sillyatom on 12/03/16.
//
//

#import <Foundation/Foundation.h>
#include "../Scenes/MainGame.h"

void MainGame::onRoundComplete(int roundNumber, RoundStatus status)
{
    if (_isActivePlayer)
    {
        //if no card has been selected
        if (_cardSelectionHandler->getSelectedCard() == NULL)
        {
            //trigger auto pick
            autoPickCard();
        }
        else
        {
            onDealAnimationComplete(_cardSelectionHandler->getSelectedCard());
        }
    }
}