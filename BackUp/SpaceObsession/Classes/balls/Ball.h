//
//  Ball.h
//  MazeDev
//
//  Created by Sillyatom on 13/11/14.
//
//

#ifndef __MazeDev__Ball__
#define __MazeDev__Ball__

#include "cocos2d.h"
#include "../lib/PhysicsSprite.h"

#include "../particles/GalaxyPlistParticle.h"
#include "../particles/CollideParticle.h"
#include "../particles/ShowerParticle.h"

#include "../bulbs/Portals.h"
#include "PlayerHitResistance.h"

//---------------------------------------------------------------------------------------------------

USING_NS_CC;

enum ENUM_PLAYER_TYPE
{
    e_NormalBall = 1,
    e_IceBall = 2,
    e_FireBall = 3,
    e_DarkMagicBall = 4,
    e_BulbSwapper = 5,
    e_GreenPaintBall = 6,
    e_RedPaintBall = 7,
    e_MultiplierBall = 8,
    e_GravityBall = 9
};

//---------------------------------------------------------------------------------------------------
class Ball : public PhysicsSprite
{
    //---------------------------------------------------------------------------------------------------
    Sprite * _aimingLine;
    float _timerTick;
    float _duration;
    bool _isBlinking;
    
    int _hitCount;
    bool _isMeteor;
    float _emissionFactor;
    
protected:

     ENUM_PLAYER_TYPE _ballType;
    int _protectionCount;
    bool _bulbCanDieOnCollide;
    std::string _ballName;
    int _fallCount;
    ParticleMeteor * _particle;
    
    std::string _portalStatus;
    int _availableCount;
    
    void addPlayerTimer();
    void startBlink();
    void onPlayerTimerTick(float dt);
    void putLightToOff();
    void setHalfLightIntensity();
public:

    std::vector<PlayerHitResistance*> hitResistance;
    void addHitResistance(int lightIndex);
    ~Ball();

    void setDuration(float duration){ _duration = duration; }
    
    void setAvailableCount(int val){ _availableCount = val; }
    int getAvailableCount(){ return _availableCount; }
    
    bool getIsMeteor(){ return _isMeteor; }
    void setIsMeteor(bool val){ _isMeteor = val; }
    
    CREATE_FUNC(Ball);
    virtual bool init();
    virtual void CreateBody( float x, float y, float radius);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    virtual void OnUpdate(float dt);
    void setFallCount(int val){ _fallCount = val; }
    
    Sprite * getAimingLine(){ return _aimingLine; }
    
    void addShowerParticle();
    void addBasicParticle();
    
    std::string getPortalStatus(){ return _portalStatus; }
    void setPortalStatus(std::string val){ _portalStatus = val; };
    bool getBulbCanDieOnCollide(){ return _bulbCanDieOnCollide; }
    
    ENUM_PLAYER_TYPE getBallType(){ return _ballType; }
    std::string getBallName(){ return _ballName; }
    int getProtectionCount(){ return _protectionCount; }
    
    void checkIntersection();
    void checkZoom();
    
    void setParticleGravity(Vec2 gravity);
    
    virtual void setIsDead(bool val);
};

class PlayerCustomEvent : public EventCustom
{
public:
    ~PlayerCustomEvent(){ secondaryData = nullptr; }
    PlayerCustomEvent(const std::string &eventName):EventCustom(eventName)
    { }
    PhysicsSprite * secondaryData;
};

#endif /* defined(__MazeDev__Ball__) */
