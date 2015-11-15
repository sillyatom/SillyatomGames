#include "MeteorShower.h"
#include "lib/Utility.h"
#include "Constants.h"

bool MeteorShower::init()
{
	if (!PhysicsBox::init())
	{
		return false;
	}
	_currentPlayerPosition.x = _currentPlayerPosition.y = 0.0;
	_fireDelay = 0.0;
	return true;
}

MeteorShower::~MeteorShower()
{
	unscheduleAllSelectors();
	stopAllActions();
}

void MeteorShower::CreateBody(float x, float y, float width, float height, bool isSensor)
{
	b2BodyDef ballBodydef;
	ballBodydef.type = b2_staticBody;
	ballBodydef.position.Set((x / PTM_RATIO), (y / PTM_RATIO));
	ballBodydef.userData = this;

	b2PolygonShape crateShape;
	crateShape.SetAsBox((width*0.5f) / PTM_RATIO, (height*0.5f) / PTM_RATIO);

	b2FixtureDef ballFixtureDef;

	ballFixtureDef.density = 1.0f;
	ballFixtureDef.friction = 0.2f;
	ballFixtureDef.restitution = 0.8f;
	ballFixtureDef.shape = &crateShape;
	ballFixtureDef.isSensor = true;

	ballFixtureDef.filter.categoryBits = METEOR_SHOWER_CATEGORY;
	ballFixtureDef.filter.maskBits = MASK_METEOR_SHOWER;

	PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, NULL);

	this->setScaleX(width / this->getContentSize().width);
	this->setScaleY(height / this->getContentSize().height);
}

void MeteorShower::setPlayerCurrentPosition(float x, float y)
{
	_currentPlayerPosition.x = x * PTM_RATIO; _currentPlayerPosition.y = y * PTM_RATIO;
}

void MeteorShower::dispatchMeteorShower(int index, float part)
{
	GameEvent event;
	event.eventName = GameEvent::CreateMeteorShower;
	event.x = _currentPlayerPosition.x + (index * part);
	event.y = _currentPlayerPosition.y + Utility::getDevicePositionY(REF_GAME_HEIGHT);
    CCLOG(" index %d part %f ", index, part);
    CCLOG(" player %f %f ", _currentPlayerPosition.x, _currentPlayerPosition.y);
    CCLOG(" shower %f %f ", event.x, event.y);
    CCLOG("_____________________________");
	_eventDispatcher->dispatchEvent(&event);
}

void MeteorShower::onStartUpdate()
{
	PhysicsSprite::onStartUpdate();
}

void MeteorShower::onStopUpdate()
{
	unscheduleAllSelectors();
	stopAllActions();
	PhysicsBox::onStopUpdate();
}

void MeteorShower::onFire(float dt)
{
  	int randNum = 5;  //since rand num starts from -2 ; check for loop;
	float delay = 0.0;
    float part = Utility::getDevicePositionX(REF_GAME_WIDTH) / randNum;
    int startIndex = -2;
	for (int index = 0; index < randNum; index++)
	{
		delay = index * 0.5;
        CallFunc * func = CallFunc::create(CC_CALLBACK_0(MeteorShower::dispatchMeteorShower, this, startIndex++, part));
		Utility::delayedCall(this, func, delay);
	}
}

void MeteorShower::start()
{
	schedule(schedule_selector(MeteorShower::onFire), _fireDelay, CC_REPEAT_FOREVER, 0.0);
    onFire(0.0);
}

void MeteorShower::onStartTimer()
{
    start();
}