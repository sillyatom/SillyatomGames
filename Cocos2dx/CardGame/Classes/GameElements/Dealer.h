#ifndef _DEALER_H_
#define _DEALER_H_

#include "cocos2d.h"
#include "ExtSprite.h"
#include "Card.h"

USING_NS_CC;

class Dealer : public ExtSprite
{
private:
	std::vector<Card*> _deck;
    Vec2 _deckStartPos;
    int _lastMatchStartIndex;

	void initDeck();
public:
    CREATE_FUNC(Dealer);
    
    void dealCard(Card * card, CallFunc * callback = NULL);
    void onDealAnimationComplete();
    
    bool hasMatch();
    
    std::vector<Card*> getMatchedData();
    std::vector<Card*> removeMatches();
    std::vector<Card*> removeMatchesFromIndex(int index);
    
    Card * removeCard();
    int getMatchingIndex();
    
    std::vector<Card*>::iterator removeCardAt(std::vector<Card*>::iterator iter);
    Card * removeCardWithValue(std::string value);
    
    virtual bool init();
	
    void resetDeck();
	void shuffleDeck();
    
    int getDeckSize(){ return (int)_deck.size(); }
    
    Vec2 getDeckStartPos(){ return _deckStartPos; }
    void setDeckStartPos(Vec2 pos){ _deckStartPos = pos; }
    
    std::vector<Card*> getDeck(){ return _deck; }
    std::function<void(Card*)>onDealCard;
    
    int getLastMatchIndex(){ return _lastMatchStartIndex; }
    void setLastMatchIndex(int val){ _lastMatchStartIndex = val; }
};

#endif