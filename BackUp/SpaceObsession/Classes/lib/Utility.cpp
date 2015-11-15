#include "Utility.h"

float Utility::widthRatio = 0.f;
float Utility::heightRatio = 0.f;

float Utility::distance(b2Vec2 vec1, b2Vec2 vec2)
{
    return sqrt(pow(vec2.x - vec1.x, 2) + pow(vec2.y - vec1.y, 2));
}

float Utility::magnitude(b2Vec2 vector)
{
	return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}

b2Vec2 Utility::unitVec(b2Vec2& vector)
{
	float length = magnitude(vector);
	vector.x /= length;
	vector.y /= length;
	return vector; 
}

float Utility::getDevicePositionX(float val)
{
    return val*widthRatio;
}

float Utility::getDevicePositionY(float val)
{
    return val*heightRatio;
}

void Utility::delayedCall(Node * node, CallFunc * callFunc, float delay)
{
	cocos2d::Vector<FiniteTimeAction*>_actions;
	{
		FiniteTimeAction * action1 = DelayTime::create(delay);
		_actions.pushBack(action1);
	}
	{
		CallFunc * action2 = callFunc;
		_actions.pushBack(action2);
	}

	node->runAction(Sequence::create(_actions));
}

// Helper function. I included it here so that you can compile the whole file
// it returns a random value between min and max included
float Utility::fgRangeRand( float min, float max )
{
    float rnd = ((float)rand()/(float)RAND_MAX);
    return rnd*(max-min)+min;
}