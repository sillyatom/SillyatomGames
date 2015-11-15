//
//  RectBulb.h
//  MazeDev
//
//  Created by Sillyatom on 09/12/14.
//
//

#ifndef __MazeDev__RectBulb__
#define __MazeDev__RectBulb__

#include "RotatingBulb.h"

//---------------------------------------------------------------------------------------------------------------------------
class RectBulb : public RotatingBulb
{
    b2Vec2 _destination;
    float _speed;
    int _direction;
    
    void moveTowardsDestination();
    
protected:
    float _bounceVal;
public:
    
    RectBulb();

    CREATE_FUNC(RectBulb);
    bool init();

    virtual void CreateBody( float x, float y, float width, float height, bool isSensor = false);
    virtual void OnUpdate(float dt);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__RectBulb__) */
