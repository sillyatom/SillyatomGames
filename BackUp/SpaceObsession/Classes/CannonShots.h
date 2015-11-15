//
//  CannonShots.h
//  MyCppGame
//
//  Created by Sillyatom on 08/01/15.
//
//

#ifndef __MyCppGame__CannonShots__
#define __MyCppGame__CannonShots__

#include "cocos2d.h"
#include "lib/PhysicsSprite.h"
#include  "particles/BulbParticle.h"

USING_NS_CC;

class CannonShots : public PhysicsSprite
{
    Point _direction;
    float _speed;
protected:
    ParticleMeteor * _particle;
public:
    CREATE_FUNC(CannonShots);
    
    void setDirection(Point direction){ _direction = direction; }
    void setParticle(ParticleMeteor * particle) { _particle = particle; };
    
    virtual bool init();
    virtual void CreateBody( float x, float y, float radius);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnUpdate(float dt);
    virtual void removeChild(Node* child, bool cleanup) override;
};

#endif /* defined(__MyCppGame__CannonShots__) */
