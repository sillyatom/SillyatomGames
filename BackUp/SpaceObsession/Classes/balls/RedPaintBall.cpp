//
//  RedPaintBall.cpp
//  MazeDev
//
//  Created by Sillyatom on 04/12/14.
//
//

#include "RedPaintBall.h"
#include "Bulb.h"

bool RedPaintBall::init()
{
    if (!PaintBall::init())
    {
        return false;
    }
    
    _ballType = e_RedPaintBall;
    _ballName = "redpaintball";
    return true;
}

void RedPaintBall::createBall(PaintBallVars * vars)
{
    GameEvent event;
    event.eventName = GameEvent::CreateRedBulb;
    event.x = vars->x;
    event.y = vars->y;
    event.radius = vars->radius/2.0;
    _eventDispatcher->dispatchEvent(&event);
}