//
//  PlayerHitResistance.cpp
//  VoidShot
//
//  Created by Sillyatom on 21/04/15.
//
//

#include "PlayerHitResistance.h"

bool PlayerHitResistance::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    return true;
}

void PlayerHitResistance::CreateBody( float x, float y, float radius)
{
    b2BodyDef ballBodydef;
    ballBodydef.type = b2_staticBody;
    ballBodydef.position.Set((x/PTM_RATIO), (y/PTM_RATIO));
    ballBodydef.userData = this;
    ballBodydef.bullet = true;
    b2CircleShape playerShape;
    playerShape.m_radius = radius / PTM_RATIO;
    
    b2FixtureDef ballFixtureDef;
    
    ballFixtureDef.density = 1.0f;
    ballFixtureDef.friction = 0.2f;
    ballFixtureDef.restitution = 0.0;
    ballFixtureDef.shape = &playerShape;
    ballFixtureDef.filter.categoryBits = PLAYER_HELPER_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_PLAYER_HELPER;
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, NULL);
    
    this->setScaleX((radius)/this->getContentSize().width);
    this->setScaleY((radius)/this->getContentSize().height);
}

void PlayerHitResistance::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void PlayerHitResistance::updateRotation()
{
    float angle = GetBody()->GetAngle() + CC_DEGREES_TO_RADIANS(4.0);
    float y = _center.y/PTM_RATIO + ((_radius/PTM_RATIO) * sin(angle));
    float x = _center.x/PTM_RATIO + ((_radius/PTM_RATIO) * cos(angle));
    
    SetTransform(b2Vec2(x, y), angle);
}
