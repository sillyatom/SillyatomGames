//
//  BallParticle.h
//  MazeDev
//
//  Created by Sillyatom on 08/12/14.
//
//

#ifndef __MazeDev__BallParticle__
#define __MazeDev__BallParticle__

#include "cocos2d.h"

USING_NS_CC;

class BallParticle : public ParticleMeteor
{
public:
    CREATE_FUNC(BallParticle);
    virtual bool init();
};


#endif /* defined(__MazeDev__BallParticle__) */
