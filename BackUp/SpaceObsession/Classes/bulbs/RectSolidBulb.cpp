//
//  RectSolidBulb.cpp
//  MyCppGame
//
//  Created by Sillyatom on 01/02/15.
//
//

#include "RectSolidBulb.h"
#include "../Helper.h"
#include "../lib/Utility.h"

bool RectSolidBulb::init()
{
    if (!RectBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("rectsolidbulb");
    _isProtected = true;
    _canUpdateAngle = false;
    _bounceVal = Utility::getDevicePositionY(10.0);
    return true;
}

void RectSolidBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (_isProtected && object == e_Player)
    {
        
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void RectSolidBulb::CreateBody( float x, float y, float width, float height, bool isSensor)
{
    RectBulb::CreateBody(x, y, width, height, isSensor);
    _body->SetType(b2_dynamicBody);
}

void RectSolidBulb::setIsDead(bool val)
{
    _isProtected = false;
    _protectionCount = 0;
    RotatingBulb::setIsDead(val);
}

void RectSolidBulb::addForce(float distance)
{
    Vec2 unitVec = GameHelper::Helper::UnitVector(Vec2(_body->GetPosition().x * PTM_RATIO, _body->GetPosition().y * PTM_RATIO), Vec2(_x * PTM_RATIO, _y * PTM_RATIO));
    distance = (distance < 1.0) ? 1.0 : distance;
    b2Vec2 force(b2Vec2(unitVec.x * distance, unitVec.y * distance * -GRAVITY));
    _body->ApplyForce(force, _body->GetWorldCenter(), true);
    
    float forceLength = GameHelper::Helper::Magnitude(Point(force.x, force.y));
    
    if (forceLength < -GRAVITY/2.0)
    {
        _body->SetTransform(b2Vec2(_x, _y), 0.0);
        _body->SetLinearVelocity(b2Vec2(0.0, 0.0));
    }
}

void RectSolidBulb::OnUpdate(float dt)
{
    float distance = GameHelper::Helper::Distance(Point(GetCCBodyPositionX(), GetCCBodyPositionY()), Point(_x * PTM_RATIO, _y * PTM_RATIO));
    addForce(distance);
    RotatingBulb::OnUpdate(dt);
}

void RectSolidBulb::OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite *phySprite, b2Contact *contact)
{
    if (_isProtected && object == e_Player)
    {
        b2Vec2 currVelocity = _body->GetLinearVelocity();
        Vec2 unitVec = GameHelper::Helper::UnitVector(Vec2(0.0, 0.0), Vec2(currVelocity.x, currVelocity.y));
        _body->ApplyForce(b2Vec2(unitVec.x * 1.0, unitVec.y * -GRAVITY * 1.0), _body->GetLocalCenter(), true);
    }
    RectBulb::OnCollisionEnds(object, phySprite, contact);
}