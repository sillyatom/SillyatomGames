//
//  GreenBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 29/11/14.
//
//

#include "GreenBulb.h"

bool GreenBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("greenbulb");
    
    return true;
}

void GreenBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void GreenBulb::OnUpdate(float dt)
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