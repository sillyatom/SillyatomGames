//
//  ExplosionBall.h
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#ifndef __MyCppGame__ExplosionBall__
#define __MyCppGame__ExplosionBall__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class ExplosionBall : public Ball
{
    
    void applyBlastImpulse(b2Body* body, b2Vec2 blastCenter, b2Vec2 applyPoint, float blastPower);
    
public:
    CREATE_FUNC(ExplosionBall);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

class MyQueryCallback : public b2QueryCallback
{

public:

    std::vector<b2Body*> foundBodies;
    
    bool ReportFixture(b2Fixture* fixture)
    {
        foundBodies.push_back( fixture->GetBody() );
        return true;//keep going to find all fixtures in the query area
    }
};

#endif /* defined(__MyCppGame__ExplosionBall__) */
