//
//  CollideParticle.cpp
//  MazeDev
//
//  Created by Sillyatom on 08/11/14.
//
//

#include "CollideParticle.h"
#include "../lib/Utility.h"

bool CollideParticle::init()
{
    if (!ParticleMeteor::init())
    {
        return false;
    }
    
    setDuration(1.0);
    setLife(0.1);
    setEmissionRate(15.f);
    setSpeed(25.f);
    setGravity(Vec2(0, 100));
	setBlendFunc(BlendFunc::ADDITIVE);

	cocos2d::Vector<FiniteTimeAction*> _actions;
	{
		FiniteTimeAction * delay = DelayTime::create(1.0f);
		_actions.pushBack(delay);
	}
	{
		FiniteTimeAction * action = FadeOut::create(0.5f);
		_actions.pushBack(action);
	}
	{
		CallFunc * func = CallFunc::create(CC_CALLBACK_0(CollideParticle::onEnd, this));
		_actions.pushBack(func);
	}
	this->runAction(Sequence::create(_actions));

	return true;
}

void CollideParticle::onEnd()
{
	this->stopAllActions();

	if (this->getParent())
	{
		this->getParent()->removeChild(this);
	}
}