//
//  FireBall.cpp
//  MazeDev
//
//  Created by Sillyatom on 26/11/14.
//
//

#include "FireBall.h"

bool FireBall::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_FireBall;
    _ballName = "fireball";
    return true;
}

void FireBall::CreateBody( float x, float y, float radius)
{
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
    ballFixtureDef.restitution = 0.6f;
    ballFixtureDef.isSensor = false;
    ballFixtureDef.shape = &playerShape;
    ballFixtureDef.filter.categoryBits = PLAYER_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_PLAYER;
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, NULL);
    
    this->setScaleX((radius*2)/this->getContentSize().width);
    this->setScaleY((radius*2)/this->getContentSize().height);
}

void FireBall::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        default:
            break;
    }
    Ball::CollidesWith(object, phySprite, contact);
}