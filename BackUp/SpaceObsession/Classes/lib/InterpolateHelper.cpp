//
//  InterpolateHelper.cpp
//  MyCppGame
//
//  Created by Sillyatom on 10/03/15.
//
//
//from http://sol.gfxile.net/interpolation/#c2

/*
 Let's say we want to move the variable X between points A and B in N steps. This could be expressed by, for example:
 
 LINEAR INTERPOLATION
 
 for (i = 0; i < N; i++)
 {
    X = ((A * i) + (B * (N - i))) / N;
 }
 
 SMOOTH STEP
 
 for (i = 0; i < N; i++)
 {
     v = i / N;
     v = SMOOTHSTEP(v);
     X = (A * v) + (B * (1 - v));
 }

 SLOW ACCELERATION
 
 for (i = 0; i < N; i++)
 {
     v = i / N;
     v = v * v;
     X = (A * v) + (B * (1 - v));
 }
 
 DECELLERATION
 
 for (i = 0; i < N; i++)
 {
     v = i / N;
     v = 1 - (1 - v) * (1 - v);
     X = (A * v) + (B * (1 - v));
 }
 
 SIN
 
 for (i = 0; i < N; i++)
 {
     v = i / N;
     v = sin(v * Pi / 2);
     X = (A * v) + (B * (1 - v));
 }
 
 WEIGHTED AVERAGE
 
 v = ((v * (N - 1)) + w) / N;
 
 
 CATMULL-ROM SPINE
 
 float catmullrom(float t, float p0, float p1, float p2, float p3)
 {
     return 0.5f * (
     (2 * p1) +
     (-p0 + p2) * t +
     (2 * p0 - 5 * p1 + 4 * p2 - p3) * t * t +
     (-p0 + 3 * p1 - 3 * p2 + p3) * t * t * t
     );
 }
 
 for (i = 0; i < N; i++)
 {
     v = i / N;
     v = catmullrom(v, Q, 0, 1, T);
     X = (A * v) + (B * (1 - v));
 }
 */

#include "InterpolateHelper.h"

InterpolateHelper * InterpolateHelper::getInstance()
{
	static InterpolateHelper instance;
	return &instance;
}

void InterpolateHelper::step(float dt)
{
	for (auto iter = _interpolates.begin(); iter != _interpolates.end(); iter++)
	{
		(*iter)->step(dt);
	}

	for (auto iter = _interpolates.begin(); iter != _interpolates.end(); )
	{
		if ((*iter)->getIsDone())
		{
			Interpolate * interpolate = (*iter);
			delete interpolate;
			iter = _interpolates.erase(iter);
		}
		else
		{
			iter++;
		}
	}
}

Interpolate * InterpolateHelper::createInterpolateObject()
{
	Interpolate * interpolate = new Interpolate();
	_interpolates.push_back(interpolate);
	return interpolate;
}

Interpolate::Interpolate()
{
    _elapsedTime = 0.0;
    _speed = 1.0;
	_returnStepValue.x = _returnStepValue.y = 0.0;
	_isDone = false;
	_updateFunc = nullptr;
	_onCompleteFunc = nullptr;
	_target = nullptr;
}

float Interpolate::stepX(float dt)
{
    float v = 1.0 - (_speed * _elapsedTime);
    v = SMOOTHSTEP(v);
    
    return ((_startPoint.x * v) + (_endPoint.x * (1.0 - v)));
}

float Interpolate::stepY(float dt)
{
    float v = 1.0 - (_speed * _elapsedTime);
    v = SMOOTHSTEP(v);
    
    return ((_startPoint.y * v) + (_endPoint.y * (1.0 - v)));
}

void Interpolate::step(float dt)
{
    _elapsedTime += dt;
	_returnStepValue.x = stepX(dt);
	_returnStepValue.y = stepY(dt);

	_target->runAction(_updateFunc);
}