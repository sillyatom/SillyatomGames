#pragma once
#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "../Handlers/ReelHandler.h"
#include "ExtSprite.h"
#include "Card.h"

USING_NS_CC;
class Player : public ExtSprite
{
private:
    std::vector<Card*> _cards;
    int _playerIndex;
    std::string _playerName;
    std::string _playerId;
    Vec2 _cardRefPosition;
    ReelHandler _reelHandler;
public:
    std::vector<Card*> getCards(){ return _cards; }

    Vec2 getCardPosition(){ return _cardRefPosition; }
    void setCardPosition(Vec2 position){ _cardRefPosition = position; }
    
    void addEarnedCard(Card * card, float animDelay = 0.0f);
    
    int getPlayerIndex(){ return _playerIndex; }
    void setPlayerIndex(int index){ _playerIndex = index; }
    
    std::string getPlayerName(){ return _playerName; }
    void setPlayerName(std::string name){ _playerName = name; }
    
    std::string getPlayerId(){return _playerId;}
    void setPlayerId(std::string playerId){ _playerId = playerId;}
    
    void setCards(std::vector<Card*> cards){ _cards = cards; }
    void addCard(Card* card){ _cards.push_back(card);}
    
    void resetReel();
    void spinReel();
    
    Card* removeCardWithValue(std::string cardValue);
    Card* getCard();
    
    CREATE_FUNC(Player);
    virtual bool init();
    virtual void update(float dt);
    
    bool isSpinning(){ return _reelHandler.getIsSpinning(); }
};
#endif // !_PLAYER_H_
