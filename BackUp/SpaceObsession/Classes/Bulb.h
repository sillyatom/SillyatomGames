//
//  Bulb.h
//  MazeDev
//
//  Created by Sillyatom on 04/10/14.
//
//

#ifndef MazeDev_Bulb_h
#define MazeDev_Bulb_h

#include "cocos2d.h"
#include "lib/PhysicsSprite.h"
#include  "particles/BulbParticle.h"
USING_NS_CC;

enum ENUM_BULB_TYPE
{
	e_DeadBulb = 0,
    e_GreenBulb = 1,
    e_Stonebulb = 2,
    e_RedBulb = 3,
    e_TimerBulb = 4,
    e_BallsLeftDeducter = 5,
    e_RectGreenBulb = 6,
    e_RectRedBulb = 7,
    e_RectStoneBulb = 8,
    e_Bumper = 9,
    e_HelpingBumper = 10,
    e_CosmicBulb = 11,
    e_MultiplierBulb = 12,
    e_Portals = 13,
    e_Portal = 14,
    e_BlackHole = 15,
    e_ToggleBulb = 17,
    e_BounceBulb = 18,
    e_RectSolidBulb = 19,
    e_SolidBulb = 20,
	e_Meteor = 21,
    e_AddedResistance = 22,
    e_totalBulb = 23
};

enum ENUM_GRAVITY_TYPE
{
	e_TYPE_ONE_NORMAL = 1,
	e_TYPE_TWO_FLOATING = 2
};
//---------------------------------------------------------------------------------------------------
class Bulb : public PhysicsSprite
{
    //---------------------------------------------------------------------------------------------------
private:
    ENUM_BULB_TYPE _type;
    bool _dynamicFlag;
    void removeShield();
    int _energy;
    
protected:
    float _y;
    float _x;
    float _angle;
    
    Color4F _bulbColors[e_totalBulb];
    
    std::string _bulbName;
    
	ENUM_GRAVITY_TYPE _gravityType;

    bool _isProtected;
    bool _canCount;
    int _protectionCount;
    bool _canDieOnForceCloseLevel;
    
    ParticleMeteor * _particle;
    
public:
    static unsigned int hitsCount;
    
    CREATE_FUNC(Bulb);
    ~Bulb();
    
    void addStarImage();
    
    void setEnergy(int val){ _energy = val; }
    int getEnergy(){ return _energy; }
    
    virtual bool init();
    virtual void CreateBody( float x, float y, float radius);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact){};
    virtual void onNextRound(cocos2d::Event * event);
    virtual void onStartUpdate();
    virtual void OnUpdate(float dt);
    
	void setBulbGravityType(ENUM_GRAVITY_TYPE type){ _gravityType = type; }
	ENUM_GRAVITY_TYPE getBulbGravityType(){ return _gravityType; }

    void setParticle(ParticleMeteor * particle) { _particle = particle; };
    ParticleMeteor* getParticle(){ return _particle; }
    
    virtual void setProtectionCount(int val){ _protectionCount = val; }
    int getProtectionCount(){ return _protectionCount; }
    
    bool getIsProtected(){ return _isProtected; }
    void setIsProtected(bool val){ _isProtected = val; }
    
    void setBulbType(ENUM_BULB_TYPE type){ _type = type; }
    ENUM_BULB_TYPE getBulbType(){ return _type; }
    
    virtual void setIsDead(bool val);
    void setDynamicFlag(bool val){ _dynamicFlag = val; }
    bool getDynamicFlag(){ return _dynamicFlag; }
    
    virtual void updateMass(){};
    
    void updateTexture(std::string fileName);
    void createProtectionShield(int count);
    
    void setBulbName(std::string name){ _bulbName = name; }
    std::string getBulbName(){ return _bulbName; }
    
    bool getCanCount(){ return _canCount; }
    void setCanCount(bool val){ _canCount = val; }
    
    bool getCanDieOnForceCloseLevel(){ return _canDieOnForceCloseLevel; }
    
    void updateSensor(bool val);
	Color4F getColorForType(){ return _bulbColors[getBulbType()];}
    
    void setAngle(float val){ _angle = val; }
};

#endif
