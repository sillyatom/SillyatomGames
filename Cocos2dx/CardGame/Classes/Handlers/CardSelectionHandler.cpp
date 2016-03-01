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
    
    {
        FiniteTimeAction * move = MoveTo::create(0.3f, Vec2(card->getStartPosition().x, card->getStartPosition().y + 10.0f));
        FiniteTimeAction * scale = ScaleTo::create(0.3f, 1.25f);
        card->runAction(move);
        card->runAction(scale);
    }
    
    if (_activeCard != nullptr)
    {
        FiniteTimeAction * move = MoveTo::create(0.3f, _activeCard->getStartPosition());
        FiniteTimeAction * scale = ScaleTo::create(0.3f, 1.0f);
        _activeCard->runAction(move);
        _activeCard->runAction(scale);
    }
    
    _activeCard = card;
}