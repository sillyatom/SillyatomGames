//---------------------------------------------------------------------------------------------------
# include "Ball.h"
# include "Bulb.h"
# include "../lib/Utility.h"
# include "../particles/BallParticle.h"
#include "../Game.h"
#include "../balls/Ball.h"
//---------------------------------------------------------------------------------------------------

Ball::~Ball()
{
    if (_particle)
    {
        _particle->getParent()->removeChild(_particle);
        _particle = nullptr;
    }
}

void Ball::CreateBody( float x, float y, float radius)
{
    b2BodyDef ballBodydef;
    ballBodydef.type = b2_staticBody;
    ballBodydef.position.Set((x/PTM_RATIO), (y/PTM_RATIO));
    ballBodydef.userData = this;
    ballBodydef.bullet = true;
    b2CircleShape playerShape;
    playerShape.m_radius = radius / PTM_RATIO;
    
    b2FixtureDef ballFixtureDef;
    
    ballFixtureDef.density = 1.0f;
    ballFixtureDef.friction = 0.2f;
    ballFixtureDef.restitution = 0.0;
    ballFixtureDef.shape = &playerShape;
    ballFixtureDef.filter.categoryBits = PLAYER_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_PLAYER;
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, NULL);
    
    this->setScaleX((radius*2)/this->getContentSize().width);
    this->setScaleY((radius*2)/this->getContentSize().height);
}

void Ball::setParticleGravity(Vec2 gravity)
{
    _particle->setGravity(gravity);
}

void Ball::addBasicParticle()
{
    _particle = ShowerParticle::create();
    getParent()->addChild(_particle, 0);
    
    _particle->setStartColor(Color4F(0.5, 1.0, 1.0, 1.0));
    _particle->setEndColor(Color4F(0.5, 1.0, 1.0, 0.0));
    _particle->setEndSize(0.0);
    _particle->setLife(0.6);
	_particle->setScale(0.85);
    OnUpdate(0.0);
    
    _emissionFactor = _particle->getEmissionRate() / BALL_MAX_HIT_COUNT;
}

void Ball::addShowerParticle()
{
    _particle = ShowerParticle::create();
    getParent()->addChild(_particle, 0);
}

bool Ball::init()
{
    if (!PhysicsSprite::init())
    {
        return false;
    }
    _ballType = e_NormalBall;
    _ballName = "basic";
    _protectionCount = 0;
    _bulbCanDieOnCollide = true;
    _particle = nullptr;
    _portalStatus = "";
    _aimingLine = nullptr;
    _duration = 10.0;
    _isBlinking = false;
    _hitCount = 0;
    _isMeteor = false;
    _emissionFactor = 0.0;
    
    return true;
}

void Ball::OnUpdate(float dt)
{
    if (!_pauseUpdate && !_isDead)
    {
        assert(_body);
        
        this->setPosition(GetCCBodyPosition());
        
        if (_particle)
        {
            _particle->setPosition(GetCCBodyPosition());
        }
        
        for (auto helper = hitResistance.begin(); helper != hitResistance.end(); helper++)
        {
            (*helper)->setCenter(GetCCBodyPositionX(), GetCCBodyPositionY());
            (*helper)->OnUpdate(dt);
        }
    }
    else if (_isDead)
    {
        if (_particle)
        {
            _particle->getParent()->removeChild(_particle);
            _particle = nullptr;
        }
    }
}

void Ball::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    switch (object)
    {
        case e_Box:
        {
            GameEvent event;
            event.eventName = GameEvent::AddParticles;
            event.particleType = e_COLLISION_PARTICLES;
            event.x = GetCCBodyPositionX();
            event.y = GetCCBodyPositionY();

            event.startColor = Color4F(_lightColor.x, _lightColor.y, _lightColor.z, 1.0);
            
            event.destX = GetCCBodyPositionX();
            event.destY = GetCCBodyPositionY() - (getBoundingBox().size.height * 1.5);
            _eventDispatcher->dispatchEvent(&event);

        }
        break;
        case e_Bounds_Bottom:
		{
            setIsDead(true);
        }
        break;
        case e_Bulb:
        {
            Bulb * bulb = (Bulb * )phySprite;
            
			if (bulb->getBulbType() != e_GreenBulb && bulb->getBulbType() != e_MultiplierBulb)
			{
				GameEvent event;
				event.eventName = GameEvent::ReduceHitsLeft;
				_eventDispatcher->dispatchEvent(&event);
				
				_hitCount++;
				_particle->setEmissionRate(_particle->getEmissionRate() - _emissionFactor);
				setLightIntensity(getLightIntensity() * 0.75);
			}
//            if (_hitCount == BALL_MAX_HIT_COUNT - 1)
//            {
//                startBlink();
//            }
//            if (_hitCount == BALL_MAX_HIT_COUNT)
//            {
//                setIsDead(true);
//            }
            if (_bulbCanDieOnCollide)
            {
                if (bulb->getBulbType() == e_Meteor || bulb->getBulbType() == e_RedBulb || bulb->getBulbType() == e_RectRedBulb)
                {
                    setIsDead(true);    //destroy ball
                }
                if (bulb->getBulbType() == e_BallsLeftDeducter)
                {
                    GameEvent event;
                    event.eventName = GameEvent::ReduceHitsLeft;
                    event.count = 1;
                    _eventDispatcher->dispatchEvent(&event);
                }
                else if (bulb->getBulbType() == e_HelpingBumper || bulb->getBulbType() == e_Bumper)
                {
                    b2Vec2 velocity = GetBody()->GetLinearVelocity();
                    velocity.x = Utility::getDevicePositionX(1.1) * velocity.x;
                    velocity.y = Utility::getDevicePositionY(1.1) * velocity.y;
                    GetBody()->SetLinearVelocity(velocity);
                }
                else if (bulb->getBulbType() == e_BounceBulb || bulb->getBulbType() == e_RectSolidBulb)
                {
                    
                }
                else if (bulb->getBulbType() == e_MultiplierBulb)
                {
                    bulb->setIsDead(true);
                }
                else if (bulb->getBulbType() == e_SolidBulb)
                {
                    
                }
                else
                {
                    bulb->setCanCount(true);
                    bulb->setIsDead(true);
                }
            }
            break;
        }
        default:             
            break;        
    }   
}

void Ball::checkIntersection()
{
    RaysCastCallback callback;
    
    if (callback.m_fixture)
    {
        CCLOG("obj detected");
    }
}

void Ball::checkZoom()
{
#if (ENABLE_ZOOMING == 1)
    if (_aimingLine)
    {
        _aimingLine->removeAllChildrenWithCleanup(true);
        _aimingLine->getParent()->removeChild(_aimingLine);
        _aimingLine = nullptr;
    }
    Vec2 startPosition(GetCCBodyPositionX(), GetCCBodyPositionY());
    Vec2 ballVelocity(GetBody()->GetLinearVelocity().x, GetBody()->GetLinearVelocity().y);
    ballVelocity.x *= PTM_RATIO;
    ballVelocity.y *= PTM_RATIO;
    
    float gravityInPixels = GRAVITY*PTM_RATIO;
    int granularity = 20;
    
    Game * game  = (Game*)getParent()->getParent();
    std::vector<Bulb*> bulbs = game->getBulbs();
    
//    float delta = Utility::getDevicePositionY(5.0);
    for (int index = 0; index < 7; index++)
    {
        Sprite * path = Sprite::create("misc/aimline.png");
        path->setAnchorPoint(Vec2(0.5, 0.5));
        
        if (_aimingLine == nullptr)
        {
            _aimingLine = Sprite::create();
            getParent()->addChild(_aimingLine);
            _aimingLine->setVisible(false);
        }
        path->setTag(index);
        _aimingLine->addChild(path);
        path->setScale((getBoundingBox().size.width * 2.0)/path->getBoundingBox().size.width, (getBoundingBox().size.height * 2.0)/path->getBoundingBox().size.height);
        
        ballVelocity.y += gravityInPixels / granularity;
        startPosition.x += ballVelocity.x / granularity;
        startPosition.y += ballVelocity.y / granularity;
        
        for (auto iter = bulbs.begin(); iter != bulbs.end(); iter++)
        {
            {
                Vec2 pathPos = _aimingLine->convertToWorldSpace(path->getPosition());
                Rect pathRect(startPosition.x, startPosition.y, path->getBoundingBox().size.width, path->getBoundingBox().size.height);
                Rect bulbRect((*iter)->getPositionX(), (*iter)->getPositionY(), (*iter)->getBoundingBox().size.width, (*iter)->getBoundingBox().size.height);
                
                if (pathRect.intersectsRect(bulbRect))
                {
                    if ((*iter)->getBulbType() == e_GreenBulb)
                    {
                            game->doZoom((*iter));
                    }
                    return;
                }
            }
        }
        
        path->setPositionX(startPosition.x);
        path->setPositionY(startPosition.y);
    }
#endif
}

void Ball::addPlayerTimer()
{
    schedule(schedule_selector(Ball::onPlayerTimerTick), 1.0, _duration, 0.0);
    _timerTick = 0.0;
}

void Ball::onPlayerTimerTick(float dt)
{
    _timerTick += dt;
    
    if (!_isBlinking && _timerTick >= _duration * 0.75)
    {
        startBlink();
    }
    if (_timerTick >= _duration)
    {
        setIsDead(true);
    }
}

void Ball::setIsDead(bool val)
{
    _isDead = val;
    
    if (val)
    {
        GameEvent event;
        event.eventName = GameEvent::AddParticles;
        event.particleType = e_EXPLOSION_PARTICLES;
        event.x = GetCCBodyPositionX();
        event.y = GetCCBodyPositionY();
        event.startColor = cocos2d::Color4F(1.0, 1.0, 1.0, 1.0);
        _eventDispatcher->dispatchEvent(&event);

        unscheduleAllSelectors();
    }
}

void Ball::startBlink()
{
    _isBlinking = true;
    CallFunc * func1 = CallFunc::create(CC_CALLBACK_0(Ball::setHalfLightIntensity, this));
    DelayTime * delay1 = DelayTime::create(0.1);
    CallFunc * func2 = CallFunc::create(CC_CALLBACK_0(Ball::putLightToOff, this));
    DelayTime * delay2 = DelayTime::create(0.5);
    
    runAction(RepeatForever::create(Sequence::create(func1, delay1, func2, delay2, NULL)));
}

void Ball::putLightToOff()
{
    _lightIntensity = 0.0;
    _particle->setOpacity(0);
}

void Ball::setHalfLightIntensity()
{
    _lightIntensity = _actualLightIntensity;
    _particle->setOpacity(255);
}

void Ball::addHitResistance(int lightIndex)
{
    _hitCount++;
    PlayerHitResistance * object = PlayerHitResistance::create();
    object->initWithFile("ball_#00FFFF.png");
    getParent()->addChild(object);
    object->retain();
    hitResistance.push_back(object);
    object->CreateBody(GetCCBodyPosition().x, GetCCBodyPosition().y, Utility::getDevicePositionY(BALL_RADIUS));
    object->OnUpdate(0.f);

    object->setCanRotate(true);
    object->setRotationValue(Utility::getDevicePositionY(10.0));
    object->setCenter(GetCCBodyPositionX(), GetCCBodyPositionY());
    object->setRadius(Utility::getDevicePositionY(Utility::getDevicePositionY(BALL_RADIUS * 2.0)));
    object->setLightColor(Vec3(0.0, 1.0, 0.0));
    object->setLightIntensity(1.0);
    object->setLightIndex(lightIndex);
}