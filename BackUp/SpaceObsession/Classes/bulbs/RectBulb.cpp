//
//  RectBulb.cpp
//  MazeDev
//
//  Created by Sillyatom on 09/12/14.
//
//

#include "RectBulb.h"
#include "../lib/Utility.h"
#include "../Helper.h"

//---------------------------------------------------------------------------------------------------------------------------
RectBulb::RectBulb()
{

}

bool RectBulb::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("rectbulb");
    _bounceVal = Utility::getDevicePositionY(10.0);
    _destination = b2Vec2(0.0, 0.0);
    _speed = 0.5;
    
//    auto glow = Sprite::createWithSpriteFrameName("glow.png");
//    addChild(glow);
//    glow->setPosition(Vec2(glow->getBoundingBox().size.width/2, glow->getBoundingBox().size.height/2));
//    
//    auto fileUtils = FileUtils::getInstance();
//    auto vertexShader = fileUtils->getStringFromFile("shaders/vertexGlow.vsh");
//    auto fragShader = fileUtils->getStringFromFile("shaders/pixelGlow.fsh");
//    GLProgram *  shader = GLProgram::createWithByteArrays(vertexShader.c_str(), fragShader.c_str());
//    
//    auto glProgramState = GLProgramState::getOrCreateWithGLProgram(shader);
//    
//    glProgramState->retain();
//    
//    //add shader to RTT
//    glow->setGLProgramState(glProgramState);
    
    return true;
}

//---------------------------------------------------------------------------------------------------------------------------
void RectBulb::CreateBody(float x, float y, float width, float height, bool isSensor)
{
    _x = x/PTM_RATIO;
    _y = y/PTM_RATIO;
    
    b2BodyDef ballBodydef;
    ballBodydef.type = b2_staticBody;
    ballBodydef.position.Set((x/PTM_RATIO), (y/PTM_RATIO));
    ballBodydef.userData = this;
    
    b2PolygonShape crateShape;
    crateShape.SetAsBox((width*0.5f)/PTM_RATIO, (height*0.5f)/PTM_RATIO);
    
    b2FixtureDef ballFixtureDef;
    
    ballFixtureDef.density = 1.0f;
    ballFixtureDef.friction = 0.5f;
    ballFixtureDef.restitution = 0.8f;
    ballFixtureDef.shape = &crateShape;
    ballFixtureDef.isSensor = isSensor;
    ballFixtureDef.filter.categoryBits = BOX_CATEGORY;
    ballFixtureDef.filter.maskBits = MASK_BOX;

    b2MassData mass;
    mass.mass = 20.0;
    mass.I = 0.0;
    mass.center = b2Vec2((width*0.25f)/PTM_RATIO, (height*0.25f)/PTM_RATIO);
    
    PhysicsSprite::CreateBody(&ballBodydef, &ballFixtureDef, &mass);

    this->setScaleX(width/this->getContentSize().width);
    this->setScaleY(height/this->getContentSize().height);
}

void RectBulb::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
//    float direction = 0.0;
//    if (GetCCBodyPositionY() > phySprite->GetCCBodyPositionY())
//    {
//        direction = 1;
//    }
//    else if (GetCCBodyPositionY() < phySprite->GetCCBodyPositionY())
//    {
//        direction = -1;
//    }
//    {
//        _destination = b2Vec2(_x, _y + (_bounceVal * direction));
//    }
    
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void RectBulb::OnUpdate(float dt)
{
//    if (_destination.x != 0.0 && _destination.y != 0.0)
//    {
//        float distance = GameHelper::Helper::Distance(Point(GetCCBodyPositionX(), GetCCBodyPositionY()), Point(_destination.x, _destination.y));
//        
//        if (distance > Utility::getDevicePositionY(1.0))
//        {
//            moveTowardsDestination();
//        }
//        else if (distance < Utility::getDevicePositionY(1.0) && _destination.y != _y)
//        {
//            _destination.y = _y;
//        }
//        else
//        {
//            GetBody()->SetTransform(b2Vec2(_x/PTM_RATIO, _y/PTM_RATIO), _angle);
//            GetBody()->SetLinearVelocity(b2Vec2(0.0, 0.0));
//            _destination.x = _destination.y = 0.0;
//        }
//    }
    
    RotatingBulb::OnUpdate(dt);
}

void RectBulb::moveTowardsDestination()
{
//    b2Vec2 vector(_destination.x - GetCCBodyPositionX(), _destination.y - GetCCBodyPositionY());
//    float len = vector.Length();
//    b2Vec2 normVec(vector.x/len, vector.y/len);
//    GetBody()->SetLinearVelocity(normVec);
}