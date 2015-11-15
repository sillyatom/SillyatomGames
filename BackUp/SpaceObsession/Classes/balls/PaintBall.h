//
//  PaintBall.h
//  MazeDev
//
//  Created by Sillyatom on 03/12/14.
//
//

#ifndef __MazeDev__PaintBall__
#define __MazeDev__PaintBall__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class PaintBallVars
{
public:
    PaintBallVars(){ x = y = radius = 0.0;}
    float x;
    float y;
    float radius;
};
class PaintBall : public Ball
{
protected:
    virtual void createBall(PaintBallVars * vars);
public:
    CREATE_FUNC(PaintBall);
    virtual bool init();
    virtual void OnUpdate(float dt);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
protected:
    std::vector<PaintBallVars> _toUpdate;
    bool varsFound(PaintBallVars vars);
};

#endif /* defined(__MazeDev__PaintBall__) */
