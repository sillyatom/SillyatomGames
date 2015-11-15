//
//  GreenPaintBall.cpp
//  MazeDev
//
//  Created by Sillyatom on 30/11/14.
//
//

#include "GreenPaintBall.h"
#include "Bulb.h"

bool GreenPaintBall::init()
{
    if (!PaintBall::init())
    {
        return false;
    }

    _ballType = e_GreenPaintBall;
    _ballName = "greenpaintball";
    return true;
}

void GreenPaintBall::createBall(PaintBallVars * vars)
{
    GameEvent event;
    event.eventName = GameEvent::CreateGreenBulb;
    event.x = vars->x;
    event.y = vars->y;
    event.radius = vars->radius/2.0;
    _eventDispatcher->dispatchEvent(&event);
}