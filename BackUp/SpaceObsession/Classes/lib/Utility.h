#ifndef _UTILITY_H_
#define _UTILITY_H_

#include "Box2D/Box2D.h"
#include "cocos2d.h"

USING_NS_CC;

class Utility
{
public:
    static float widthRatio;
    static float heightRatio;
    
    static float distance(b2Vec2 vec1, b2Vec2 vec2);
    
	static float magnitude(b2Vec2 vector);
	static b2Vec2 unitVec(b2Vec2& vector);
    
    static float getDevicePositionX(float val);
    static float getDevicePositionY(float val);

	static void delayedCall(Node * node, CallFunc * callFunc, float delay = 0.5);
    
    static float fgRangeRand( float min, float max );
};

class RaysCastCallback : public b2RayCastCallback
{
public:
    RaysCastCallback() : m_fixture(NULL)
    {
    }
    
    float32 ReportFixture(b2Fixture* fixture, const b2Vec2& point, const b2Vec2& normal, float32 fraction)
    {
        m_fixture = fixture;
        m_point = point;
        m_normal = normal;
        m_fraction = fraction;
        return fraction;
    }
    
    b2Fixture* m_fixture;
    b2Vec2 m_point;
    b2Vec2 m_normal;
    float32 m_fraction;
    
};
#endif // !_UTILIT
