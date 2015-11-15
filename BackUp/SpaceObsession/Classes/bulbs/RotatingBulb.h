//
//  RotatingBulb.h
//  MazeDev
//
//  Created by Sillyatom on 07/12/14.
//
//

#ifndef __MazeDev__RotatingBulb__
#define __MazeDev__RotatingBulb__

#include "Bulb.h"

class RotatingBulb : public Bulb
{
protected:
    
    cocos2d::Point _center;
    float _radius;
    float _rotationValue;
    bool _canRotate;
    bool _isWave;
    int _timerRepeat;
    
public:
    
    CREATE_FUNC(RotatingBulb);
    virtual bool init();
    virtual void OnUpdate(float dt);
    virtual void updateRotation();
    void updateWave();
    void addCollisionParticles();
    void addExplosionParticle();
    void setIsWave(bool val){ _isWave = val; }
    void setCanRotate(bool val){ _canRotate = val; }
	bool getCanRotate(){ return _canRotate; }
    void setRadius(float val) { _radius = val; }
    float getRadius() const { return _radius; }
    
    void setRotationValue(float val){ _rotationValue = val; }
    void setCenter(float x, float y);
    
    int getTimerRepeat(){ return _timerRepeat;}
    void setTimerRepeat(int repeat) { _timerRepeat = repeat; }
    
    void setBodyDynamic();
	virtual void updateScroll(b2Vec2 flag, b2Vec2 delta);
	virtual void CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact);
};

#endif /* defined(__MazeDev__RotatingBulb__) */
