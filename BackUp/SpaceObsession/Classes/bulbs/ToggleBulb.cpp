//
//  ToggleBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 20/01/15.
//
//

#include "ToggleBulb.h"
#include "../particles/BulbParticle.h"
#include "../lib/Utility.h"

bool ToggleBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("togglebulb");
    _isProtected = true;
    _protectionCount = 2;
    
    return true;
}

void ToggleBulb::onNextRound(cocos2d::Event *event)
{
    _protectionCount = 2;
    if (_particle)
    {
        BulbParticle* particle = (BulbParticle*)_particle;
        particle->resetEmissionRate();
    }
    else
    {
        float addedIntensity = Utility::getDevicePositionY(1.0);
        _lightIntensity = addedIntensity * 2.0;
    }
}

void ToggleBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (_isProtected && object == e_Player)
    {
        _protectionCount--;
        
        if (_protectionCount == 1)
        {
            if (_particle)
            {
                _particle->setEmissionRate(5.0);
            }
            else
            {
                _lightIntensity /= 2.0;
            }
        }
        else if (_protectionCount == 0)
        {
            setCanCount(true);
            setIsDead(true);
        }
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void ToggleBulb::setIsDead(bool val)
{
    _isProtected = false;
    _protectionCount = 0;
    RotatingBulb::setIsDead(val);
}