# ifndef _PHYSICS_ENVIRONMENT_H_
# define _PHYSICS_ENVIRONMENT_H_

//---------------------------------------------------------------------------------------------------
# include "cocos2d.h"
# include "Box2D/Box2d.h"
# include "GLES-Render.h"
# include "constants.h"
#include "CollisionListener.h"
#include "Helper.h"

using namespace GameHelper;

USING_NS_CC;

//---------------------------------------------------------------------------------------------------
class PhysicsEnvironment : public cocos2d::LayerColor
{
	//---------------------------------------------------------------------------------------------------
	b2Body * _bottomBody;
	b2Body * _topBody;
	b2Body * _leftBody;
	b2Body * _rightBody;
    
    b2Vec2 _worldXLimits;
    b2Vec2 _worldYLimits;
    
    float halfWidth;
    float halfHeight;
    
    b2Vec2 _deltaShift;
    
	CollisionListener * _collisionListener;
	static bool pause;
	//---------------------------------------------------------------------------------------------------

	public :
	static void setPause(bool val);
    static bool getPause();
	static cocos2d::Scene* scene();
	CREATE_FUNC(PhysicsEnvironment);
	~PhysicsEnvironment();

	void OnUpdate(float dt);
	void resetEnvironment();
    
    void setDeltaShift(b2Vec2 val){ _deltaShift = val; };
    b2Vec2 getDeltaShift(){ return _deltaShift; }
    
    void setWorldXLimits(float min, float max){ _worldXLimits.x = min/PTM_RATIO; _worldXLimits.y = max/PTM_RATIO; };
    void setWorldYLimits(float min, float max){ _worldYLimits.x = min/PTM_RATIO; _worldYLimits.y = max/PTM_RATIO; };
    
    b2Vec2 changeOrigin(float delX, float delY);
    
    //for scroll
    bool canScrollX();
    bool canScrollY();
    
	//the physics debug
	GLESDebugDraw * debug;

	//singleton instance
	static b2World * getWorld();
	bool initPhysics();
	static void deleteWorld();
    
	//debug draw - called every frame
	virtual void draw(Renderer *renderer, const Mat4 &transform, bool transformUpdated);
};

//---------------------------------------------------------------------------------------------------
# endif
