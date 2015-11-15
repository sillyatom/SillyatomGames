//
//  StoneBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#include "StoneBulb.h"
bool StoneBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("stonebulb");
    CCLOG(" bulb name %s", _bulbName.c_str());
    _isProtected = true;
    
    return true;
}

void StoneBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (_isProtected && object == e_Player)
    {
        _protectionCount--;
        
        _lightIntensity /= 2.0f;
        
        if (_protectionCount == 0)
        {
            setCanCount(true);
            setIsDead(true);
        }
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void StoneBulb::setIsDead(bool val)
{
    _isProtected = false;
    _protectionCount = 0;
    RotatingBulb::setIsDead(val);
}

void StoneBulb::OnUpdate(float dt)
{
	RotatingBulb::OnUpdate(dt);
	if (!_pauseUpdate && !_isDead)
	{
		assert(_body);

		this->setPosition(GetCCBodyPosition());
		this->setRotation(0.0);
		//this->setRotation(-1 * CC_RADIANS_TO_DEGREES( _body->GetAngle()));
	}
}