//
//  BulbSwapper.h
//  MazeDev
//
//  Created by Sillyatom on 30/11/14.
//
//

#ifndef __MazeDev__BulbSwapper__
#define __MazeDev__BulbSwapper__

#include "cocos2d.h"
#include "Ball.h"
#include "Bulb.h"
class BulbSwapper : public Ball
{
private:
    Bulb * _bulb1;
    Bulb * _bulb2;
    
    void swapBulbs();
public:
    CREATE_FUNC(BulbSwapper);
    virtual bool init();
    virtual void setIsDead(bool val);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnUpdate(float dt);

};
#endif /* defined(__MazeDev__BulbSwapper__) */
