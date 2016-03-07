#include "Player.h"

bool Player::init()
{
    if (!ExtSprite::init())
    {
        return false;
    }
    
    return true;
}

Card* Player::getCard()
{
    Card* card = NULL;
    if (_cards.size() > 0)
    {
        card = _cards.front();
        _cards.erase(_cards.begin());
    }
    return card;
}

Card* Player::getCardWithValue(std::string cardValue)
{
    for (auto card : getCards())
    {
        if (card->getValue() == cardValue)
        {
            return card;
        }
    }
    
    return NULL;
}