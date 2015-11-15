//
//  PaintBall.cpp
//  MazeDev
//
//  Created by Sillyatom on 03/12/14.
//
//

#include "PaintBall.h"
#include "Bulb.h"

bool PaintBall::init()
{
    if (!Ball::init())
    {
        return false;
    }
    
    return true;
}

bool PaintBall::varsFound(PaintBallVars vars)
{
    for (auto var = _toUpdate.begin(); var != _toUpdate.end(); var++)
    {
        if (var->x == vars.x && var->y == vars.y && var->radius == vars.radius)
        {
            return true;
        }
    }
    return false;
}

void PaintBall::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        case e_Bulb:
        {
            Bulb * bulb = (Bulb*)phySprite;
            
            PaintBallVars vars;
            vars.x = bulb->GetCCBodyPositionX();
            vars.y = bulb->GetCCBodyPositionY();
            vars.radius = bulb->getBoundingBox().size.width;
            
            if (!varsFound(vars))
            {
                _toUpdate.push_back(vars);
            }
        }
        default:
            break;
    }
    Ball::CollidesWith(object, phySprite, contact);
}

void PaintBall::createBall(PaintBallVars * vars)
{

}

void PaintBall::OnUpdate(float dt)
{
    Ball::OnUpdate(dt);
    
    for (auto iter = _toUpdate.begin(); iter != _toUpdate.end();)
    {
        createBall(&(*iter));
        iter = _toUpdate.erase(iter);
    }
}
