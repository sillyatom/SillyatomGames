//
//  CosmicBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 28/12/14.
//
//

#include "CosmicBulb.h"
#include "../balls/ExplosionBall.h"
#include "../particles/CountReductionParticle.h"
#include "../lib/Utility.h"
#include "../Helper.h"
#include "../Constants.h"

bool CosmicBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    _isProtected = true;
    _bulbName = std::string("cosmicbulb");
    _animTriggered = false;
    
    return true;
}

void CosmicBulb::blastNeighbours()
{
    _protectionCount = 0;
    _isProtected = false;
    
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
            
            if (bulb != this && bulb->getBulbType() != e_Bumper && bulb->getBulbType() != e_HelpingBumper && !bulb->getIsMarkedForRemove())
            {
                bulb->setIsMarkedForRemove(true);
                _affectedBulbs.pushBack(bulb);
            }
            else
            {
                setIsMarkedForRemove(true);
            }
        }
    }
    
    if (_affectedBulbs.size() == 0)
    {
        setIsDead(true);
    }
}

void CosmicBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (object == e_Player)
    {
        Ball * ball = (Ball*)phySprite;
        if (ball->getBallType() == e_BulbSwapper)
        {
            return;
        }
        if (_isProtected && _protectionCount != 0)
        {
            _protectionCount--;

            _particle->setEmissionRate(_particle->getEmissionRate() / (COSMIC_BULB_PROTECTION_COUNT - _protectionCount));

            if (_protectionCount == 0)
            {
                blastNeighbours();
            }
        }
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void CosmicBulb::triggerAnim()
{
    _animTriggered = true;
    
    for (auto iter = _affectedBulbs.begin(); iter != _affectedBulbs.end(); iter++)
    {
        GameEvent event;
        event.eventName = GameEvent::AddParticles;
        event.particleType = e_COSMIC_BLAST_PARTICLES;
        event.x = GetCCBodyPositionX();
        event.y = GetCCBodyPositionY();
        event.startColor = Color4F(1.0, 1.0, 1.0, 1.0);
        event.destX = (*iter)->GetCCBodyPositionX();
        event.destY = (*iter)->GetCCBodyPositionY();
        
        _eventDispatcher->dispatchEvent(&event);
    }
    
    cocos2d::Vector<FiniteTimeAction*> _actions;
    {
        FiniteTimeAction * action = DelayTime::create(1.0);
        _actions.pushBack(action);
    }
    {
        CallFunc * func = CallFunc::create(CC_CALLBACK_0(CosmicBulb::clearAffectedBulbs, this));
        _actions.pushBack(func);
    }
    runAction(Sequence::create(_actions));
}

void CosmicBulb::clearAffectedBulbs()
{
    for (auto iter = _affectedBulbs.begin(); iter != _affectedBulbs.end(); )
    {
        Bulb * sprite = (Bulb*)(*iter);
        
        if (sprite && !sprite->getIsDead())
        {
            sprite->setIsProtected(false);
            sprite->setIsMarkedForRemove(false);

            if (sprite->getBulbType() == e_CosmicBulb)
            {
                if (sprite != this)
                {
                    CosmicBulb * cBulb = (CosmicBulb*)sprite;
                    cBulb->blastNeighbours();
                }
            }
            else if (sprite->getBulbType() != e_CosmicBulb)
            {
                sprite->setCanCount(true);
                sprite->setIsDead(true);
            }
        }
        iter = _affectedBulbs.erase(iter);
    }
    setIsDead(true);
}

void CosmicBulb::OnUpdate(float dt)
{
    if (_animTriggered == false && _affectedBulbs.size())
    {
        triggerAnim();
    }
    RotatingBulb::OnUpdate(dt);
}

void CosmicBulb::setIsDead(bool val)
{
    setIsProtected(false);
    setProtectionCount(0);
    setIsMarkedForRemove(false);
    RotatingBulb::setIsDead(val);
}