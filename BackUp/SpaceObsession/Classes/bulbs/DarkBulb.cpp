//
//  DarkBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 05/01/15.
//
//

#include "DarkBulb.h"
#include "../balls/ExplosionBall.h"

bool DarkBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("darkbulb");
    _isProtected = true;
    
    return true;
}

void DarkBulb::blastNeighbours()
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
        
        if (sprite->GetObjectId() == e_Bulb && !sprite->getIsDead())
        {
            Bulb * bulb = (Bulb*)sprite;
            if (bulb != this)
            {
                _affectedBulbs.pushBack(bulb);
            }
        }
    }
    
    for (auto iter = _affectedBulbs.begin(); iter != _affectedBulbs.end(); iter++)
    {
        GameEvent event;
        event.eventName = GameEvent::AddParticles;
        event.particleType = e_DARK_PARTICLES;
        event.x = GetCCBodyPositionX();
        event.y = GetCCBodyPositionY();
        event.startColor = Color4F(1.0, 0.0, 1.0, 1.0);
        event.destX = (*iter)->GetCCBodyPositionX();
        event.destY = (*iter)->GetCCBodyPositionY();
        event.angle = atan2f((event.destY - GetCCBodyPositionY()), (event.destX - GetCCBodyPositionX()));
        event.angle = CC_RADIANS_TO_DEGREES(event.angle);
        Vec2 distance = Vec2((event.destX - GetCCBodyPositionX()), (event.destY - GetCCBodyPositionY()));
        _eventDispatcher->dispatchEvent(&event);
    }

}

void DarkBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (_isProtected && object == e_Player)
    {
        _protectionCount--;
        
        _lightIntensity /= 2.0f;
        
        if (_protectionCount == 0)
        {
            _isProtected = false;
            setIsDead(true);
        }
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void DarkBulb::onStartUpdate()
{
    blastNeighbours();
}