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

Card* Player::removeCardWithValue(std::string cardValue)
{
    Card* card = NULL;
    for (auto iter = _cards.begin(); iter != _cards.end();)
    {
        card = (*iter);
        if ((*iter)->getValue() == cardValue)
        {
            _cards.erase(iter);
            break;
        }
        else
        {
            iter++;
        }
    }
    
    return card;
}

void Player::addEarnedCard(Card *card, float animDelay)
{
    _cards.insert(_cards.begin(), card);
    card->moveToPosition(getCardPosition(), animDelay);
}

void Player::resetReel()
{
    _reelHandler.initReels(_cards);
}

void Player::update(float dt)
{
    _reelHandler.update(dt);
    ExtSprite::update(dt);
}

void Player::spinReel()
{
    _reelHandler.spin(2.0f);
}