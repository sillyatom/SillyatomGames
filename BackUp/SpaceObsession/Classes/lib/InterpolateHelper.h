//
//  InterpolateHelper.h
//  MyCppGame
//
//  Created by Sillyatom on 10/03/15.
//
//

#ifndef __MyCppGame__InterpolateHelper__
#define __MyCppGame__InterpolateHelper__

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

#define SMOOTHSTEP(x) ((x) * (x) * (3 - 2 * (x)))

class Interpolate
{
private:

	float _elapsedTime;
	Vec2 _startPoint;
	Vec2 _endPoint;
	float _speed;
	bool _isDone;
	Node * _target;
	CallFunc * _updateFunc;
	CallFunc * _onCompleteFunc;
	Vec2 _returnStepValue;
public:

	Interpolate();

	void setIsDone(bool val){ _isDone = val; }
	bool getIsDone(){ return _isDone; }

	float stepX(float dt);
	float stepY(float dt);
	void step(float dt);

	void reset(){ _elapsedTime = 0.0; _speed = 1.0; }

	void setNodeTarget(Node * target){ _target = target;  }
	void setUpdateFunc(CallFunc * func){ _updateFunc = func; }
	void setOnCompleteFunc(CallFunc * func){ _onCompleteFunc = func; }

    float getElapsedTime(){ return _elapsedTime; }
    void setElapsedTime(float val){ _elapsedTime = val; }
    
    void setStartPoint(float x, float y){ _startPoint.x = x; _startPoint.y = y;}
    Vec2 getStartPoint(){ return _startPoint; }
    
    void setEndPoint(float x, float y){ _endPoint.x = x; _endPoint.y = y; }
    Vec2 getEndPoint(){ return _endPoint; }
    
    void setSpeed(float val){ _speed = val; }
    float getSpeed(){ return _speed; }
};

class IInterpolate
{
public:
	virtual void step(Interpolate * interpolate, Vec2 value){};
};

class InterpolateHelper
{
private:

public:
	static InterpolateHelper* getInstance();
	void step(float dt);
	void clearAll();
	Interpolate * createInterpolateObject();
protected:
	std::vector<Interpolate*> _interpolates;
};

#endif