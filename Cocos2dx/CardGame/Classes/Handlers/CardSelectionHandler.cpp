//
//  CardSelectionHandler.cpp
//  CardGame
//
//  Created by Sillyatom on 01/03/16.
//
//

#include "CardSelectionHandler.h"

CardSelectionHandler * CardSelectionHandler::getInstance()
{
    static CardSelectionHandler * handler = new CardSelectionHandler();
    return handler;
}

void CardSelectionHandler::setActiveCard(Card * card)
{
    if (_activeCard == card)
    {
        return;
    }
    
    _activeCard = card;
}