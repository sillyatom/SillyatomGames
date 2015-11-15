#include "DeadBulbParticles.h"
#include "Constants.h"
#include "../lib/Utility.h"

bool DeadBulbParticles::initWithPosition(float x, float y)
{
	if (!ParticleMeteor::initWithFile("plist/deadBulbParticle.plist"))
	{
		return false;
	}

	setPosition(x, y);

	setLife(0.15);
	setEmissionRate(5);
	setStartColor(Color4F(0.1, 0.1, 0.1, 0.3));
	setEndColor(Color4F(0.1, 0.1, 0.1, 0.0));
	setBlendAdditive(true);

	return true;
}
