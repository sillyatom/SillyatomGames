# ifndef _PHYSICS_SPRITE_
# define _PHYSICS_SPRITE_

//---------------------------------------------------------------------------------------------------
#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "PhysicsEnvironment.h"
#include <string>
#include "Constants.h"
#include "ShaderEffect.h"
#include "../particles/FirePlistParticle.h"

//---------------------------------------------------------------------------------------------------
USING_NS_CC;

//---------------------------------------------------------------------------------------------------
//enum
enum ENUM_OBJECT
{
	e_Player = 1,
	e_Target = 2,
	e_PotHole = 3,
	e_Cannon = 4,
	e_CannonShots = 5,
	e_Box = 7,
    e_Bulb = 8,
    e_Bounds_Bottom = 9,
    e_Bounds_Top = 10,
    e_Bounds_Left = 11,
    e_Bounds_Right = 12,
    e_Gravity_Bar = 13,
	e_MeteorShower = 14
};

//---------------------------------------------------------------------------------------------------
class PhysicsSprite : public Sprite
{
	//---------------------------------------------------------------------------------------------------
	private:
    std::string _name;
    Sprite * _marker;
    Label * _markerLabel;
    
		//---------------------------------------------------------------------------------------------------
	protected:
    b2Body * _body;
    float _rawWidth;
    float _rawHeight;
    bool _pauseUpdate;
    bool _isDead;
    bool _isCleaned;
    bool _canUpdateAngle;
    bool _isMarkedForRemove;
    ENUM_OBJECT _objectId;
    
    int _lightIndex;
    float _lightIntensity;
    float _actualLightIntensity;
    float _lightFallOff;
    Vec3 _lightColor;

    ShaderEffect * _shaderEffect;

	//---------------------------------------------------------------------------------------------------
	public:
    PhysicsSprite();
    ~PhysicsSprite();
    
    bool initShaderWithFileName(std::string fileName);
    
    void setMarkerLabel(Label * marker);
    Label * getMarkerLabel();
    
    void setMarker(Sprite * marker);
    Sprite * getMarker();
    void updateMarker(Vec2 position, std::string text, int inOut);
    
    ShaderEffect* getShaderEffect(){ return _shaderEffect; }
    void setBlurEffect(float radius, int sampleNum);
    void setBloomEffect();

    bool getIsCleaned(){ return _isCleaned; }
    void setIsCleaned(bool val){ _isCleaned = val; }

    bool getPauseUpdate() const { return _pauseUpdate; }
    void setPauseUpdate(bool val) { _pauseUpdate = val; }

    void setRawWidth(float val){ _rawWidth = val; }
    void setRawHeight(float val){ _rawHeight = val; }

    bool getIsDead() const { return _isDead; }
    virtual void setIsDead(bool val);

    virtual void onStartUpdate(){};
	virtual void onStopUpdate(){};
    virtual void onStartTimer(){};

    float getRawWidth(){ return _rawWidth; }
    float getRawHeight(){ return _rawHeight; }

    void setIsMarkedForRemove(bool val) { _isMarkedForRemove = val; }
    bool getIsMarkedForRemove(){ return _isMarkedForRemove; }

    CREATE_FUNC(PhysicsSprite);

    virtual void CreateBody(const b2BodyDef* bodyDef, const b2FixtureDef* fixtureDef, const b2MassData* massData);
    virtual void OnUpdate(float dt);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact){};
    virtual void OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact){};
	virtual void updateScroll(b2Vec2 flag, b2Vec2 delta){};

    b2Body * GetBody();

    void SetObjectId(ENUM_OBJECT val);
    ENUM_OBJECT GetObjectId();

    std::string GetName();
    void SetName(std::string name);

    Point GetCCBodyPosition();
    float GetCCBodyPositionX();
    float GetCCBodyPositionY();
    void SetTransform(b2Vec2 pos, float angle);

    virtual bool initWithFile(const std::string& filename);
    

    Vec3 getLightColor(){ return _lightColor; }
    void setLightColor(Vec3 color){ _lightColor = color; }
    int getLightIndex(){return _lightIndex;}
    void setLightIndex(int index){_lightIndex = index;}
    float getLightIntensity(){ return _lightIntensity; }
    void setLightIntensity(float val){_lightIntensity = val;}
    float getLightFallOff(){ return _lightFallOff; }
    void setLightFallOff(float val){ _lightFallOff = val; }
    void setActualLightIntensity(float val){ _actualLightIntensity = val;}
};

//---------------------------------------------------------------------------------------------------
#endif