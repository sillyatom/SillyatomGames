#include "Player.h"

bool Player::init()
{
    if (!ExtSprite::init())
    {
        return false;
    }
    
    return true;
}