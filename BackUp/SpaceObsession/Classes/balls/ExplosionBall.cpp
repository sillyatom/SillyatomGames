//
//  ExplosionBall.cpp
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#include "ExplosionBall.h"
#include "Constants.h"
#include "../lib/Utility.h"
#include "../bulbs/CosmicBulb.h"

bool ExplosionBall::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    _ballType = e_GravityBall;
    _ballName = "explosionball";
    return true;
}

void ExplosionBall::applyBlastImpulse(b2Body* body, b2Vec2 blastCenter, b2Vec2 applyPoint, float blastPower)
{
    b2Vec2 blastDir = applyPoint - blastCenter;
    float distance = blastDir.Normalize();
    //ignore bodies exactly at the blast point - blast direction is undefined
    if ( distance == 0 )
        return;
    float invDistance = 1 / distance;
    float impulseMag = blastPower * invDistance * invDistance;
    GetBody()->ApplyLinearImpulse( impulseMag * blastDir, applyPoint, true );
}

void ExplosionBall::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
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
        
        if (sprite->GetObjectId() == e_Bulb)
        {
            RotatingBulb * bulb = (RotatingBulb*)sprite;
            if (bulb->getBulbType() == e_CosmicBulb)
            {
                CosmicBulb * cosmic = (CosmicBulb*)bulb;
                cosmic->blastNeighbours();
            }
            else
            {
                bulb->addCollisionParticles();
                bulb->setCanCount(true);
                bulb->setIsDead(true);
            }
        }
        setIsDead(true);
        //applyBlastImpulse(body, center, bodyCom, blastPower );
    }
    
    Ball::CollidesWith(object, phySprite, contact);
}
