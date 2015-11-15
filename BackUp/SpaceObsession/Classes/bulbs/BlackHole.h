//
//  BlackHole.h
//  MyCppGame
//
//  Created by Sillyatom on 07/01/15.
//
//

#ifndef __MyCppGame__BlackHole__
#define __MyCppGame__BlackHole__

#include "cocos2d.h"
#include "RotatingBulb.h"
USING_NS_CC;

class BlackHole : public RotatingBulb
{
    cocos2d::Vector<RotatingBulb*> _affectedBulbs;
    void blastNeighbours();
    void clearAffectedBulbs();

public:
    CREATE_FUNC(BlackHole);
    ~BlackHole();
    virtual bool init();
    virtual void CreateBody( float x, float y, float radius);    
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnUpdate(float dt);    
    virtual void onStartUpdate();
    
    void pullTowards();
};

#endif /* defined(__MyCppGame__BlackHole__) */
