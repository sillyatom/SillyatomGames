//
//  RectSolidBulb.h
//  MyCppGame
//
//  Created by Sillyatom on 01/02/15.
//
//

#ifndef __MyCppGame__RectSolidBulb__
#define __MyCppGame__RectSolidBulb__

#include "cocos2d.h"
#include "RectBulb.h"
USING_NS_CC;

class RectSolidBulb : public RectBulb
{
    
private:
    float _bounceVal;
    
public:
    CREATE_FUNC(RectSolidBulb);
    virtual bool init();
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact);
    virtual void CreateBody( float x, float y, float width, float height, bool isSensor = false);
    virtual void setIsDead(bool val);
    virtual void OnUpdate(float dt);
    
    void addForce(float distance);
};

#endif /* defined(__MyCppGame__RectSolidBulb__) */
