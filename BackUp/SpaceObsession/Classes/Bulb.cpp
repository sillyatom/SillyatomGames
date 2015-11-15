//
//  Bulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 04/10/14.
//
//

#include "Bulb.h"
#include "balls/Ball.h"
#include "balls/IceBall.h"
#include "Helper.h"

#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output

unsigned int Bulb::hitsCount = 0;

Bulb::~Bulb()
{
    if (_particle)
    {
        _particle->getParent()->removeChild(_particle);
        _particle = nullptr;
    }
}

bool Bulb::init()
{
    if (!PhysicsSprite::init())
    {
        return false;
    }
    _y = 0.0;
    _x = 0.0;
    _canCount = false;
    _particle = nullptr;
    _canDieOnForceCloseLevel = true;
    _isProtected = false;
    _protectionCount = 0;
	_gravityType = e_TYPE_ONE_NORMAL;
    _dynamicFlag = false;
    {
        auto listener = EventListenerCustom::create(GameEvent::NextRound, CC_CALLBACK_1(Bulb::onNextRound, this));
        _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, this);
    }
    
	_bulbColors[e_DeadBulb] = Color4F(0.3, 0.3, 0.3, 1.0);
    _bulbColors[e_SolidBulb] = Color4F(0.3, 0.3, 0.3, 1.0);
    _bulbColors[e_GreenBulb] = Color4F(0.0, 1.0, 0.0, 1.0);
    _bulbColors[e_RedBulb] = Color4F(1.0, 0.0, 0.0, 1.0);
    _bulbColors[e_Stonebulb] = Color4F(1.0, 1.0, 1.0, 1.0);
    _bulbColors[e_TimerBulb] = Color4F(0.0, 0.0, 1.0, 1.0);
    _bulbColors[e_Bumper] = Color4F(0.5, 0.5, 0.5, 1.0);
    _bulbColors[e_HelpingBumper] = Color4F(0.5, 0.5, 0.5, 1.0);
    _bulbColors[e_CosmicBulb] = Color4F(1.0, 0.0, 1.0, 1.0);
    _bulbColors[e_MultiplierBulb] = Color4F(0.0, 1.0, 0.0, 1.0);
    _bulbColors[e_Meteor] = Color4F(1.0, 0.5, 0.0, 1.0);
    _bulbColors[e_Portal] = Color4F(0.5, 0.0, 1.0, 1.0);
    _bulbColors[e_ToggleBulb] = Color4F(1.0, 0.0, 0.5, 1.0);
    _bulbColors[e_BounceBulb] = Color4F(0.3, 0.3, 0.3, 1.0);
    _bulbColors[e_RectGreenBulb] = Color4F(0.0, 1.0, 0.0, 1.0);
    _bulbColors[e_RectRedBulb] = Color4F(1.0, 0.0, 0.0, 1.0);
    _bulbColors[e_RectStoneBulb] = Color4F(1.0, 1.0, 1.0, 1.0);
    _bulbColors[e_RectSolidBulb] = Color4F(1.0, 1.0, 1.0, 1.0);
    
    return true;
}

void Bulb::onNextRound(cocos2d::Event *event)
{

}

void Bulb::removeShield()
{
    _isProtected = false;
}

void Bulb::CreateBody( float x, float y, float radius)
{
    _y = y/PTM_RATIO;
    _x = x/PTM_RATIO;
    
    b2BodyDef ballBodydef;
    
	ballBodydef.type = b2_staticBody;
	ballBodydef.position.Set((x/PTM_RATIO), (y/PTM_RATIO));
    ballBodydef.userData = this;
    ballBodydef.bullet = true;
    
    b2CircleShape playerShape;
    playerShape.m_radius = radius / PTM_RATIO;
    
    b2FixtureDef ballFixtureDef;
    
    ballFixtureDef.density = 1.0f;
    ballFixtureDef.friction = 0.0f;
    ballFixtureDef.restitution = BULB_RESTITUTION;
    ballFixtureDef.shape = &playerShape;
    ballFixtureDef.filter.categoryBits = (getBulbType() == e_Meteor) ? CANNON_SHOTS_CATEGORY : BULB_CATEGORY;
    ballFixtureDef.filter.maskBits = (getBulbType() == e_Meteor) ? MASK_CANNON_SHOTS : MASK_BULB;
	if (getBulbType() == e_GreenBulb)
	{
		ballFixtureDef.isSensor = true;
	}
	PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, NULL);
    
    this->setScaleX((radius*2)/this->getContentSize().width);
    this->setScaleY((radius*2)/this->getContentSize().height);
}

void Bulb::updateTexture(std::string fileName)
{
    setSpriteFrame(fileName);
}

void Bulb::createProtectionShield(int count)
{
    if (!_isProtected)
    {
        _isProtected = true;
        _protectionCount = count;
    }
}

void Bulb::setIsDead(bool val)
{
    if (val)
    {
        if (!_isProtected && !_isMarkedForRemove)
        {
            _isDead = true;
            stopAllActions();
        }
    }
}

void Bulb::OnUpdate(float dt)
{
    if (!_pauseUpdate && !_isDead)
    {
        if (_particle)
        {
            _particle->setPosition(GetCCBodyPosition());
           // _particle->setRotation(-1 * CC_RADIANS_TO_DEGREES( _body->GetAngle()));
        }
    }
    PhysicsSprite::OnUpdate(dt);
}

void Bulb::updateSensor(bool val)
{
    GetBody()->GetFixtureList()->SetSensor(val);
}

void Bulb::addStarImage()
{
    auto star = Sprite::createWithSpriteFrameName("stars.png");
    star->setAnchorPoint(Vec2(0.5, 0.5));
    addChild(star);
    star->setScale(3.5, 3.5);
    star->setPosition(Vec2(getContentSize().width/2.0, getContentSize().height/2.0));
    star->setRotation(45);
    
    float currScale = star->getScaleY();
    
    FiniteTimeAction * action1 = ScaleTo::create(1.0, currScale + (currScale * 0.25));
    FiniteTimeAction * action2 = ScaleTo::create(1.0, currScale - (currScale * 0.25));
    FiniteTimeAction * action3 = RotateBy::create(1.0, 20);
    auto sequence = Sequence::create(action1, action2, NULL);
    auto repeat = RepeatForever::create(sequence);
    star->runAction(repeat);
    star->runAction(RepeatForever::create(Sequence::create(action3, NULL)));
}

void Bulb::onStartUpdate()
{
    if (_particle)
    {
        _particle->setVisible(true);
    }
    PhysicsSprite::onStartUpdate();
}