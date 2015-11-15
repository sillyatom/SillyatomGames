//
//  Cannon.cpp
//  MyCppGame
//
//  Created by Sillyatom on 08/01/15.
//
//

#include "Cannon.h"
#include "Constants.h"
#include "lib/Utility.h"

Cannon::Cannon()
{
    _direction = Vec2(0.0, 0.0);
    _canFire = false;
}

Cannon::~Cannon()
{
    unscheduleAllSelectors();
}

void Cannon::CreateBody( float x, float y, float width, float height, bool isSensor)
{
    _rawWidth = width;
    _rawHeight = height;
    
    b2BodyDef ballBodydef;
    ballBodydef.type = b2_staticBody;
    ballBodydef.position.Set((x/PTM_RATIO), (y/PTM_RATIO));
    ballBodydef.userData = this;
    
    b2PolygonShape crateShape;
    crateShape.SetAsBox((width*0.5f)/PTM_RATIO, (height*0.5f)/PTM_RATIO);
    
    b2FixtureDef ballFixtureDef;
    
    ballFixtureDef.density = 1.0f;
    ballFixtureDef.friction = 0.2f;
    ballFixtureDef.restitution = 0.6f;
    ballFixtureDef.shape = &crateShape;
    ballFixtureDef.isSensor = isSensor;
    ballFixtureDef.filter.categoryBits = BOX_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_BOX;
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, NULL);

    this->setScaleX(width/getContentSize().width);
    this->setScaleY(height/getContentSize().height);
}

void Cannon::createCannonShot()
{
    GameEvent event;
    event.eventName = GameEvent::CreateCannonShot;
    event.x = GetCCBodyPositionX();
    event.y = GetCCBodyPositionY();
    event.radius = CANNON_SHOT_RADIUS * 2.0;
    event.velocity = Point(_direction.x, _direction.y);
    
    _eventDispatcher->dispatchEvent(&event);

}

void Cannon::OnUpdate(float dt)
{
    if (_canFire)
    {
        createCannonShot();
        _canFire = false;
    }
    PhysicsBox::OnUpdate(dt);
}

void Cannon::onStartUpdate()
{
    schedule(schedule_selector(Cannon::fire), _frequency, CC_REPEAT_FOREVER, 0.0);
}

void Cannon::fire(float dt)
{
    _canFire = true;
}