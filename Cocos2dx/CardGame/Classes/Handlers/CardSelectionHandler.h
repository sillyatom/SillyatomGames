//
//  CardSelectionHandler.hpp
//  CardGame
//
//  Created by Sillyatom on 01/03/16.
//
//

#ifndef CardSelectionHandler_hpp
#define CardSelectionHandler_hpp

#include <stdio.h>
#include "cocos2d.h"

#include "../GameElements/Card.h"

USING_NS_CC;

class CardSelectionHandler
{
private:
    Card * _activeCard;
    CardSelectionHandler()
    {
        _activeCard = nullptr;
    }
    
public:
    static CardSelectionHandler * getInstance();
    
    void setActiveCard(Card * card);
    Card* getSelectedCard(){ return _activeCard;}
};

#endif /* CardSelectionHandler_hpp */
