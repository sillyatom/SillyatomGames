//
//  Cannon.h
//  MyCppGame
//
//  Created by Sillyatom on 08/01/15.
//
//

#ifndef __MyCppGame__Cannon__
#define __MyCppGame__Cannon__

#include "PhysicsBox.h"
#include "cocos2d.h"

USING_NS_CC;

class Cannon : public PhysicsBox
{
private:
    
    float _speed;
    Vec2 _direction;
    float _frequency;
    bool _canFire;
    
    void createCannonShot();
public:
    CREATE_FUNC(Cannon);
    Cannon();
    ~Cannon();
    
    void setDirection(Vec2 direction){ _direction = direction; };
    void setFrequency(float val){ _frequency = val; }
    
    void fire(float dt);
    
    virtual void onStartUpdate();
    virtual void OnUpdate(float dt);
    virtual void CreateBody( float x, float y, float width, float height, bool isSensor = false);
};

#endif /* defined(__MyCppGame__Cannon__) */
