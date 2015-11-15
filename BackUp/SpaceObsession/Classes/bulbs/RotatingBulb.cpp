//
//  RotatingBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 07/12/14.
//
//

#include "RotatingBulb.h"
#include "../lib/Utility.h"
#include "Helper.h"

bool RotatingBulb::init()
{
    if (!Bulb::init())
    {
        return false;
    }
    
    _rotationValue = 0.0f;
    _radius = 0.0;
    _canRotate = false;
    _center.x = _center.y = 0.0f;
    _isWave = false;
    
    return true;
}

void RotatingBulb::setCenter(float x, float y)
{
    _center.x = x; _center.y = y;
}

void RotatingBulb::updateWave()
{
    float angle = GetBody()->GetAngle() + CC_DEGREES_TO_RADIANS(1.0);
    float x = _x;
    float y = _y + sin(2.0 * angle);
    
    SetTransform(b2Vec2(x, y), angle);
}

void RotatingBulb::updateRotation()
{
    float angle = GetBody()->GetAngle() + CC_DEGREES_TO_RADIANS(0.2);
    float y = _center.y/PTM_RATIO + ((_radius/PTM_RATIO) * sin(angle));
    float x = _center.x/PTM_RATIO + ((_radius/PTM_RATIO) * cos(angle));
    
    SetTransform(b2Vec2(x, y), angle);
}

void RotatingBulb::addCollisionParticles()
{
    GameEvent event;
    event.eventName = GameEvent::AddParticles;
    event.particleType = e_COLLISION_PARTICLES;
    event.x = GetCCBodyPositionX();
    event.y = GetCCBodyPositionY();
    
    if (getBulbType() == e_GreenBulb || getBulbType() == e_Stonebulb)
    {
        event.startColor = cocos2d::Color4F(_lightColor.x, _lightColor.y, _lightColor.z, 1.0);
    }
    else
    {
        event.startColor = _bulbColors[getBulbType()];
    }
    
    event.destX = GetCCBodyPositionX();
    event.destY = GetCCBodyPositionY();
    _eventDispatcher->dispatchEvent(&event);
}

void RotatingBulb::addExplosionParticle()
{
    GameEvent event;
    event.eventName = GameEvent::AddParticles;
    event.particleType = e_EXPLOSION_PARTICLES;
    event.x = GetCCBodyPositionX();
    event.y = GetCCBodyPositionY();
    
    if (getBulbType() == e_GreenBulb || getBulbType() == e_Stonebulb)
    {
        event.startColor = cocos2d::Color4F(_lightColor.x, _lightColor.y, _lightColor.z, 1.0);
    }
    else
    {
        event.startColor = _bulbColors[getBulbType()];
    }
    
    event.destX = GetCCBodyPositionX();
    event.destY = GetCCBodyPositionY();
    _eventDispatcher->dispatchEvent(&event);
}

void RotatingBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (phySprite->GetObjectId() == e_Player)
    {
        Bulb::hitsCount++;
    }
    
    if (!_isProtected || _protectionCount == 0)
    {
        if (phySprite->GetObjectId() != e_Bulb && getBulbType() != e_MultiplierBulb && phySprite->GetObjectId() != e_Box && phySprite->GetObjectId() != e_MeteorShower && phySprite->GetObjectId() != e_CannonShots)
        {
            addExplosionParticle();
        }
    }
    
    if (phySprite->GetObjectId() != e_CannonShots && getBulbType() != e_DeadBulb)
    {
        addCollisionParticles();
    }
    
    switch (object)
    {
        case e_Bounds_Bottom:
            setIsDead(true);
            break;
        case e_Bulb:
            //if bulb collides with another bulb
			{
                
			}
            break;
        default:
            break;
    }
}
void RotatingBulb::OnUpdate(float dt)
{
    if (_canRotate)
    {
        updateRotation();
        
        if (_isWave)
        {
            updateWave();
        }
    }
    else if (_isWave)
    {
        updateWave();
    }
    Bulb::OnUpdate(dt);
}

void RotatingBulb::setBodyDynamic()
{
    _canRotate = false;
    _isWave = false;
    setDynamicFlag(true);
    b2Vec2 vel = GetBody()->GetLinearVelocity();
    GetBody()->SetLinearVelocity(b2Vec2(vel.x + 1.0, vel.y));
}

void RotatingBulb::OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite *phySprite, b2Contact *contact)
{
    switch (object)
    {
        case e_Bulb:
        {
            RotatingBulb * bulb = (RotatingBulb*)phySprite;
            {
                if (getBulbType() == e_HelpingBumper || getBulbType() == e_Bumper)
                {
                    b2Vec2 velocity = bulb->GetBody()->GetLinearVelocity();
                    velocity.x = velocity.x + velocity.x * 0.2;
                    velocity.y = velocity.y + velocity.y * 0.2;
                    bulb->GetBody()->SetLinearVelocity(velocity);
                }
            }
        }
        break;
        default:
            break;
    }
}

void RotatingBulb::updateScroll(b2Vec2 flag, b2Vec2 delta)
{
	if (_canRotate)
	{
		if (flag.x)
		{
			_center.x -= (delta.x * PTM_RATIO);
		}
		if (flag.y)
		{
			_center.y -= (delta.y * PTM_RATIO);
		}
	}
	if (_isWave)
	{
		if (flag.x)
		{
			_x -= delta.x;
		}
		if (flag.y)
		{
			_y -= delta.y;
		}
	}
}