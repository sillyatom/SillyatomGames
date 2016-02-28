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
	void initDeck();
public:
	CREATE_FUNC(Dealer);
	virtual bool init();
	void resetDeck();
	void shuffleDeck();
};

#endif