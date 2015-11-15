//
//  RedPaintBall.h
//  MazeDev
//
//  Created by Sillyatom on 04/12/14.
//
//

#ifndef __MazeDev__RedPaintBall__
#define __MazeDev__RedPaintBall__

#include "cocos2d.h"
#include "PaintBall.h"

USING_NS_CC;

class RedPaintBall : public PaintBall
{
protected:
    virtual void createBall(PaintBallVars * vars);
public:
    CREATE_FUNC(RedPaintBall);
    virtual bool init();
};

#endif /* defined(__MazeDev__RedPaintBall__) */
