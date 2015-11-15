//---------------------------------------------------------------------------------------------------
# include "PhysicsSprite.h"
# include "Constants.h"

//---------------------------------------------------------------------------------------------------
using namespace cocos2d;

//---------------------------------------------------------------------------------------------------
PhysicsSprite::PhysicsSprite()
{
	_body = NULL;
	_name = "";
	_pauseUpdate = false;
	_isDead = false;
    _isCleaned = false;
    _isMarkedForRemove = false;
    _shaderEffect = nullptr;
    #if (ENABLE_SHADERS == 1)
    _lightIndex = -1;
    #endif
    _canUpdateAngle = true;
    _actualLightIntensity = 0.0;
    _marker = nullptr;
    _markerLabel = nullptr;
}

bool PhysicsSprite::initShaderWithFileName(std::string fileName)
{
    _shaderEffect = new ShaderEffect();
    if (_shaderEffect->initGLProgramState(fileName))
    {
        setGLProgram(_shaderEffect->getGLProgram());
        return true;
    }
    return false;
}

void PhysicsSprite::setBloomEffect()
{
    auto s = getTexture()->getContentSizeInPixels();
    getGLProgramState()->setUniformVec2("resolution", Vec2(s.width, s.height));
}

void PhysicsSprite::setBlurEffect(float radius, int sampleNum)
{
    Size size = getTexture()->getContentSizeInPixels();
    _shaderEffect->getGLProgramState()->setUniformVec2("resolution", size);
    _shaderEffect->getGLProgramState()->setUniformFloat("blurRadius", radius);
    _shaderEffect->getGLProgramState()->setUniformFloat("sampleNum", sampleNum);
}

//---------------------------------------------------------------------------------------------------
std::string PhysicsSprite::GetName()
{
	return _name;
}

//---------------------------------------------------------------------------------------------------
b2Body * PhysicsSprite::GetBody()
{
	return _body;
}

//---------------------------------------------------------------------------------------------------
Point PhysicsSprite::GetCCBodyPosition()
{
	Point pos(0.0f, 0.0f);
	b2Vec2 bPos = this->GetBody()->GetPosition();
	pos.x = bPos.x * PTM_RATIO; pos.y = bPos.y * PTM_RATIO;
	return pos;
}

//---------------------------------------------------------------------------------------------------
float PhysicsSprite::GetCCBodyPositionX()
{
	return GetBody()->GetPosition().x*PTM_RATIO;
}

//---------------------------------------------------------------------------------------------------
float PhysicsSprite::GetCCBodyPositionY()
{
	return GetBody()->GetPosition().y*PTM_RATIO;
}

//---------------------------------------------------------------------------------------------------
void PhysicsSprite::SetTransform(b2Vec2 pos, float angle)
{
	_body->SetTransform(pos, angle);
}

//---------------------------------------------------------------------------------------------------
void PhysicsSprite::CreateBody(const b2BodyDef* bodyDef, const b2FixtureDef* fixtureDef, const b2MassData* massData)
{
	_body = PhysicsEnvironment::getWorld()->CreateBody(bodyDef);

	_body->CreateFixture(fixtureDef);

	if(massData != NULL)
	{
		_body->SetMassData(massData);
	}
}

void PhysicsSprite::setMarker(Sprite * marker)
{
    _marker = marker;
}

Sprite * PhysicsSprite::getMarker()
{
    return _marker;
}

void PhysicsSprite::setMarkerLabel(Label * marker)
{
    _markerLabel = marker;
}

Label * PhysicsSprite::getMarkerLabel()
{
    return _markerLabel;
}

void PhysicsSprite::updateMarker(cocos2d::Vec2 position, std::string text, int inOut)
{
    _marker->setPosition(position);
    _markerLabel->setString(text);
    
    if (inOut == 1 || inOut == -1)
    {
        position.x += (inOut * (0.5 * _markerLabel->getBoundingBox().size.width) + (inOut * (0.5 * _marker->getBoundingBox().size.width)));
    }
    else
    {
        position.y += ((inOut/2) * (0.5 * _markerLabel->getBoundingBox().size.height) + (inOut * (0.5 * _marker->getBoundingBox().size.height)));
    }
    
    _markerLabel->setPosition(position);
}

//---------------------------------------------------------------------------------------------------
void PhysicsSprite::OnUpdate(float dt)
{
	if (!_pauseUpdate && !_isDead)
	{
		assert(_body);
        
		this->setPosition(GetCCBodyPosition());
        
        if (_canUpdateAngle)
        {
            this->setRotation(-1 * CC_RADIANS_TO_DEGREES( _body->GetAngle()));
        }
        else
        {
            
        }
	}
}

//---------------------------------------------------------------------------------------------------
PhysicsSprite::~PhysicsSprite()
{
    if (!_isCleaned)
    {
        _name.clear();
        _body->SetUserData(NULL);
        PhysicsEnvironment::getWorld()->DestroyBody(_body);
        cleanup();
        _body = nullptr;
        
        if (_markerLabel)
        {
            _markerLabel->getParent()->removeChild(_markerLabel);
            _markerLabel = nullptr;
        }
        if (_marker)
        {
            _marker->getParent()->removeChild(_marker);
            _marker = nullptr;
        }
    }
    _isCleaned = true;
}

//---------------------------------------------------------------------------------------------------
void PhysicsSprite::SetName( std::string name)
{
	_name = name;
}

//---------------------------------------------------------------------------------------------------
ENUM_OBJECT PhysicsSprite::GetObjectId()
{
	return _objectId;
}

//---------------------------------------------------------------------------------------------------
void PhysicsSprite::SetObjectId(ENUM_OBJECT val)
{
	_objectId = val;
}

//---------------------------------------------------------------------------------------------------

bool PhysicsSprite::initWithFile(const std::string& filename)
{
	return Sprite::initWithSpriteFrameName(filename);
}

void PhysicsSprite::setIsDead(bool val)
{
    _isDead = val;
}