//
//  CannonShots.cpp
//  MyCppGame
//
//  Created by Sillyatom on 08/01/15.
//
//

#include "CannonShots.h"
#include "Helper.h"
#include "lib/Utility.h"
#include "balls/ExplosionBall.h"

bool CannonShots::init()
{
    if (!PhysicsSprite::init())
    {
        return false;
    }
    _particle = nullptr;
    _speed = 10.0;
    _speed = Utility::getDevicePositionX(_speed);
    return true;
}

void CannonShots::CreateBody( float x, float y, float radius)
{
    _rawWidth = radius;
    _rawHeight = radius;
    b2BodyDef ballBodydef;
    ballBodydef.type = b2_dynamicBody;
    ballBodydef.position.Set((x/PTM_RATIO), (y/PTM_RATIO));
    ballBodydef.userData = this;
    ballBodydef.bullet = true;
    
    b2CircleShape playerShape;
    playerShape.m_radius = radius / PTM_RATIO;
    
    b2FixtureDef ballFixtureDef;
    
    ballFixtureDef.density = 1.0f;
    ballFixtureDef.friction = 0.2f;
    ballFixtureDef.restitution = BULB_RESTITUTION;
    ballFixtureDef.isSensor = false;
    ballFixtureDef.shape = &playerShape;
    ballFixtureDef.filter.categoryBits = CANNON_SHOTS_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_CANNON_SHOTS;
    
    b2MassData mass;
    mass.mass = 5.0;
    mass.I = 0.0;
    mass.center = b2Vec2((radius*0.25f)/PTM_RATIO, (radius*0.25f)/PTM_RATIO);
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, &mass);

    GetBody()->SetGravityScale(0.0);
    
    this->setScaleX((radius*2)/this->getContentSize().width);
    this->setScaleY((radius*2)/this->getContentSize().height);
}

void CannonShots::removeChild(Node* child, bool cleanup)
{
    PhysicsSprite::removeChild(child, cleanup);
    if (_particle)
    {
        _particle->getParent()->removeChild(_particle);
        _particle = nullptr;
    }
}

void CannonShots::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    setIsDead(true);
    if (object == e_Player)
    {
        GameEvent event;
        event.eventName = GameEvent::PauseControl;
        _eventDispatcher->dispatchEvent(&event);
    }
    PhysicsSprite::CollidesWith(object, phySprite, contact);
}

void CannonShots::OnUpdate(float dt)
{
    float xPos = GetCCBodyPositionX();
    float yPos = GetCCBodyPositionY();
    
    b2Vec2 idealLocation((xPos+(_direction.x * _speed)), (yPos+(_direction.y * _speed)));
    b2Vec2 finalVel((idealLocation.x - xPos), (idealLocation.y - yPos));
    GetBody()->SetLinearVelocity(finalVel);

    if (_particle)
    {
        _particle->setPosition(GetCCBodyPosition());
    }

    PhysicsSprite::OnUpdate(dt);
}