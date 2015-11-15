//
//  CollideParticle.h
//  MazeDev
//
//  Created by Sillyatom on 08/11/14.
//
//

#ifndef __MazeDev__CollideParticle__
#define __MazeDev__CollideParticle__

#include "cocos2d.h"

USING_NS_CC;

class CollideParticle : public ParticleMeteor
{
	void onEnd();
public:
    CREATE_FUNC(CollideParticle);
    virtual bool init();
};

#endif /* defined(__MazeDev__CollideParticle__) */
