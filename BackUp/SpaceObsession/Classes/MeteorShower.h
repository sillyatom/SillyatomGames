#ifndef MYCPP_GAME_METEOR_SHOWER
#define MYCPP_GAME_METEOR_SHOWER
#include "cocos2d.h"
#include "PhysicsBox.h"
#include "Box2D/Box2D.h"
USING_NS_CC;

class MeteorShower : public PhysicsBox
{
private:
	b2Vec2 _currentPlayerPosition;
	float _fireDelay;
	
	void onFire(float dt);
	void dispatchMeteorShower(int index, float part);

public:
	CREATE_FUNC(MeteorShower);
	~MeteorShower();
	
	virtual bool init();
	void start();

	void setFireDelay(float seconds){ _fireDelay = seconds; }
	float getFireDelay(){ return _fireDelay; }

	virtual void onStartUpdate();
	virtual void onStopUpdate();
    virtual void onStartTimer();
    
	void setPlayerCurrentPosition(float x, float y);

	virtual void CreateBody(float x, float y, float width, float height, bool isSensor = false);
};
#endif