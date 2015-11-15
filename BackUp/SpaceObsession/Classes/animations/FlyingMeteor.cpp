//
//  FlyingMeteor.cpp
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#include "FlyingMeteor.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool FlyingMeteor::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    _particle = BulbParticle::create();
    addChild(_particle);
    _particle->setAnchorPoint(Vec2(0.5, 0.5));
    _particle->setEmissionRate(Utility::getDevicePositionY(50));
    _particle->setLife(0.3);
    _particle->setLifeVar(0.0);
    _particle->setSpeed(Utility::getDevicePositionY(5.0));
    _particle->setSpeedVar(0.0);

    _particle->setScale(Utility::fgRangeRand(1, 10)/10.0);
	const Color4F startColor(1.0, 0.5, 0.0, 1.0);
	Color4F endColor(startColor.r, startColor.g, startColor.b, 0.0);

	_particle->setStartColor(startColor);
	_particle->setEndColor(endColor);

	_particle->setBlendFunc(BlendFunc::ADDITIVE);

    return true;
}

void FlyingMeteor::startAnim(CallFunc * func1, CallFunc * func2)
{
        cocos2d::Vector<FiniteTimeAction*> _actions;
    
        float x = Utility::getDevicePositionX(REF_GAME_WIDTH + 5);
        float y = Utility::fgRangeRand(Utility::getDevicePositionY(REF_GAME_HEIGHT - 50), Utility::getDevicePositionY(REF_GAME_HEIGHT + 50));
        _particle->setPosition(x, y);

        float destX = - Utility::fgRangeRand(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionX(REF_GAME_WIDTH));
        float destY = - Utility::fgRangeRand(Utility::getDevicePositionY(REF_GAME_HEIGHT/2.0),Utility::getDevicePositionY(REF_GAME_HEIGHT));

        {
            FiniteTimeAction* moveTo = MoveTo::create(4.5, Vec2(destX, destY));
            _actions.pushBack(moveTo);
        }
    
        _actions.pushBack(CallFunc::create(CC_CALLBACK_0(BackgroundAnimation::clear, this)));
        _particle->runAction(Sequence::create(_actions));
}