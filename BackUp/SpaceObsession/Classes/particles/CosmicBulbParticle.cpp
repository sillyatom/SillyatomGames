//
//  CosmicBulbParticle.cpp
//  MyCppGame
//
//  Created by Sillyatom on 31/12/14.
//
//

#include "CosmicBulbParticle.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool CosmicBulbParticle::initWithColor(Color4F startColor)
{
	if (!ParticleMeteor::init())
	{
		return false;
	}

	setDuration(-1.0);
	setLife(0.1f);
	setEmissionRate(100.0f);
	setAngle(0);
	setSpeed(-100.f);
	setGravity(Vec2(0.0f, 100.0f));

	const Color4F endColor(0.0, 0.0, 0.0, 0.2);

	setStartColor(startColor);
	setEndColor(endColor);
	setBlendFunc(BlendFunc::ADDITIVE);

	setContentSize(Size(Utility::getDevicePositionX(BALL_RADIUS * 2.0), Utility::getDevicePositionY(BALL_RADIUS * 2.0)));

	return true;
}

bool CosmicBlastParticle::initWithColor(Color4F startColor, float duration)
{
	if (!ParticleMeteor::init())
	{
		return false;
	}

	setDuration(duration);
	setLife(0.1f);
	setEmissionRate(100.0f * Utility::getDevicePositionY(0.5));
	setAngle(0);
	setSpeed(0.f);
	setGravity(Vec2(0.0f, 0.0f));

	const Color4F endColor(1.0, 1.0, 1.0, 0.2);

	setStartColor(startColor);
	setEndColor(endColor);
	setBlendFunc(BlendFunc::ADDITIVE);

	setContentSize(Size(Utility::getDevicePositionX(BALL_RADIUS), Utility::getDevicePositionY(BALL_RADIUS)));

	return true;
}