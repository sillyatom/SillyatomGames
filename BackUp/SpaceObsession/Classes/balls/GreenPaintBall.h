//
//  GreenPaintBall.h
//  MazeDev
//
//  Created by Sillyatom on 30/11/14.
//
//

#ifndef __MazeDev__GreenPaintBall__
#define __MazeDev__GreenPaintBall__

#include "cocos2d.h"
#include "PaintBall.h"

USING_NS_CC;

class GreenPaintBall : public PaintBall
{
protected:
    virtual void createBall(PaintBallVars * vars);
public:
    CREATE_FUNC(GreenPaintBall);
    virtual bool init();
};

#endif /* defined(__MazeDev__GreenPaintBall__) */
