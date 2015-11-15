//
//  BlackHole.cpp
//  MyCppGame
//
//  Created by Sillyatom on 07/01/15.
//
//

#include "BlackHole.h"
#include "../Helper.h"
#include "../lib/Utility.h"
#include "../balls/ExplosionBall.h"
BlackHole::~BlackHole()
{
    for (auto iter = _affectedBulbs.begin(); iter != _affectedBulbs.end();)
    {
        (*iter)->setIsDead(true);
        iter = _affectedBulbs.erase(iter);
    }
    
}
bool BlackHole::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("blackhole");
    
    return true;
}

void BlackHole::CreateBody( float x, float y, float radius)
{
    _y = y/PTM_RATIO;
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
    ballFixtureDef.shape = &playerShape;
    ballFixtureDef.filter.categoryBits = BULB_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_BULB;
    
    b2MassData mass;
    mass.mass = 2000.0;
    mass.I = 0.0;
    mass.center = b2Vec2((radius*0.25f)/PTM_RATIO, (radius*0.25f)/PTM_RATIO);
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, &mass);
    GetBody()->SetGravityScale(0.0);
    
    this->setScaleX((radius*2)/this->getContentSize().width);
    this->setScaleY((radius*2)/this->getContentSize().height);
}

void BlackHole::blastNeighbours()
{
    //explode code here
    float blastRadius = 150.0 / PTM_RATIO;
    b2Vec2 center(GetBody()->GetWorldCenter());
    
    //find all bodies with fixtures in blast radius AABB
    MyQueryCallback queryCallback; //see "World querying topic"
    b2AABB aabb;
    aabb.lowerBound = center - b2Vec2( blastRadius, blastRadius );
    aabb.upperBound = center + b2Vec2( blastRadius, blastRadius );
    PhysicsEnvironment::getWorld()->QueryAABB( &queryCallback, aabb );
    
    //check which of these bodies have their center of mass within the blast radius
    for (int i = 0; i < queryCallback.foundBodies.size(); i++)
    {
        b2Body* body = queryCallback.foundBodies[i];
        b2Vec2 bodyCom = body->GetWorldCenter();
        
        //ignore bodies outside the blast range
        if ( (bodyCom - center).Length() >= blastRadius )
            continue;
        
        PhysicsSprite * sprite = (PhysicsSprite*)(body->GetUserData());
        
        if (sprite->GetObjectId() == e_Bulb && sprite != this && !sprite->getIsDead())
        {
            RotatingBulb * bulb = (RotatingBulb*)sprite;
            _affectedBulbs.pushBack(bulb);
        }
    }
    
    for (auto iter = _affectedBulbs.begin(); iter != _affectedBulbs.end(); iter++)
    {
        RotatingBulb * bulb = (*iter);
        bulb->setCanRotate(true);
        float angle = atan2f((GetCCBodyPositionY() - bulb->GetCCBodyPositionY()), (GetCCBodyPositionX() - bulb->GetCCBodyPositionX()));
        b2Vec2 distanceVec = b2Vec2(GetCCBodyPositionX() - bulb->GetCCBodyPositionX(), GetCCBodyPositionY() - bulb->GetCCBodyPositionY());
        float distance = distanceVec.Length();
        bulb->setRadius(distance);
        bulb->setCenter(GetCCBodyPositionX(), GetCCBodyPositionY());
        bulb->SetTransform(bulb->GetBody()->GetPosition(), angle);
        bulb->OnUpdate(0.0);
                    CCLOG("distance%f ", distance);
    }
}

void BlackHole::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void BlackHole::onStartUpdate()
{
    blastNeighbours();
}

void BlackHole::OnUpdate(float dt)
{
    if (_affectedBulbs.size())
    {
        for (auto iter = _affectedBulbs.begin(); iter != _affectedBulbs.end(); )
        {
            RotatingBulb * bulb = (*iter);
            bulb->setRadius(bulb->getRadius() - 0.1);
            if (bulb->getRadius() <= 0.0)
            {
                bulb->setIsDead(true);
                iter = _affectedBulbs.erase(iter);
            }
            else
            {
                iter++;
            }
        }
    }
    RotatingBulb::OnUpdate(dt);
    
}