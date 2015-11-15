//
//  TimerBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 04/12/14.
//
//

#include "TimerBulb.h"
#include "../lib/PhysicsEnvironment.h"

bool TimerBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _canDieOnForceCloseLevel = false;
    _bulbName = std::string("timerbulb");
    _intensityPerTick = 0;
    
    return true;
}

TimerBulb::~TimerBulb()
{
    unscheduleAllSelectors();
}

void TimerBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void TimerBulb::startTimer(float duration)
{
    _intensityPerTick = _particle->getEmissionRate() / _timerRepeat;
    schedule(schedule_selector(TimerBulb::onTimerExpires), duration, _timerRepeat-1, 0.0);
}

void TimerBulb::onTimerExpires(float dt)
{
    _timerRepeat--;
    
    if (_timerRepeat)
    {
		_particle->setEmissionRate(_timerRepeat * _intensityPerTick);
    }
    if (!_timerRepeat)
    {
        _particle->setEmissionRate(0.0);
        
        setBodyDynamic();
        b2Vec2 vel = GetBody()->GetLinearVelocity();
        GetBody()->SetLinearVelocity(b2Vec2(vel.x - 1.f, vel.y));
    }
}

void TimerBulb::updateMass()
{
    b2MassData mass;
    mass.mass = 2.0;
    mass.I = 0.0;
    mass.center = b2Vec2((_rawWidth*0.25f)/PTM_RATIO, (_rawWidth*0.25f)/PTM_RATIO);
    GetBody()->SetMassData(&mass);
    GetBody()->SetGravityScale(1.0);
    GetBody()->ApplyForceToCenter(PhysicsEnvironment::getWorld()->GetGravity(), true);
}