#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "ExtSprite.h"
#include "Card.h"

USING_NS_CC;
class Player : public ExtSprite
{
private:
    std::vector<Card*> _cards;
    int _playerIndex;
    std::string _playerName;
    
public:
    std::vector<Card*> getCards(){ return _cards; }
    
    int getPlayerIndex(){ return _playerIndex; }
    void setPlayerIndex(int index){ _playerIndex = index; }
    
    std::string getPlayerName(){ return _playerName; }
    void setPlayerName(std::string name){ _playerName = name; }
    
    void setCards(std::vector<Card*> cards){ _cards = cards; }
    void addCard(Card* card){ _cards.push_back(card);}
    
    CREATE_FUNC(Player);
    virtual bool init();
};
#endif // !_PLAYER_H_
