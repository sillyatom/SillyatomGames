//
//  BulbSwapper.cpp
//  MazeDev
//
//  Created by Sillyatom on 30/11/14.
//
//

#include "BulbSwapper.h"

bool BulbSwapper::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_BulbSwapper;
    _bulbCanDieOnCollide = false;
    
    _bulb1 = nullptr;
    _bulb2 = nullptr;
    
    _ballName = "bulbswapper";
    return true;
}

void BulbSwapper::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        case e_Bulb:
        {
            Bulb * bulb = (Bulb*)phySprite;
            if (_bulb1 == nullptr)
            {
                _bulb1 = bulb;
            }
            else if (_bulb2 == nullptr)
            {
                _bulb2 = bulb;
            }
        }
        default:
            break;
    }
    Ball::CollidesWith(object, phySprite, contact);
}

void BulbSwapper::swapBulbs()
{
    if (_bulb1 && _bulb2)
    {
        float x = _bulb1->GetBody()->GetPosition().x;
        float y = _bulb1->GetBody()->GetPosition().y;
        
        _bulb1->GetBody()->SetTransform(_bulb2->GetBody()->GetPosition(), _bulb1->GetBody()->GetAngle());
        _bulb2->GetBody()->SetTransform(b2Vec2(x, y), _bulb2->GetBody()->GetAngle());
        
        _bulb1 = nullptr;
        _bulb2 = nullptr;
    }
}

void BulbSwapper::OnUpdate(float dt)
{
    Ball::OnUpdate(dt);
    swapBulbs();
}

void BulbSwapper::setIsDead(bool val)
{
    Ball::setIsDead(val);

    _bulb1 = nullptr;
    _bulb2 = nullptr;
}