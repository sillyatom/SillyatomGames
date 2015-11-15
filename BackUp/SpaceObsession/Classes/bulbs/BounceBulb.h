//
//  BounceBall.h
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#ifndef __MyCppGame__BounceBall__
#define __MyCppGame__BounceBall__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class BounceBulb : public RotatingBulb
{
private:
    float _bounceVal;
public:
    CREATE_FUNC(BounceBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact);
    virtual void CreateBody( float x, float y, float radius);
    virtual void setIsDead(bool val);
    virtual void OnUpdate(float dt);
	virtual void updateScroll(b2Vec2 flag, b2Vec2 delta);
    void addForce(float distance);
};

#endif /* defined(__MyCppGame__BounceBall__) */
