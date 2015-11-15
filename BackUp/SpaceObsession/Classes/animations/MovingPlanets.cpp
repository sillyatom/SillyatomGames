//
//  MovingPlanets.cpp
//  MyCppGame
//
//  Created by Sillyatom on 09/02/15.
//
//

#include "MovingPlanets.h"

#include "../lib/Utility.h"

#include "../Constants.h"
#include "../Helper.h"

#include "../lib/AnimationHandler.h"

bool MovingPlanets::init()
{
    if (!BackgroundAnimation::init())
    {
        return false;
    }
    
    return true;
}

void MovingPlanets::initWithData(const rapidjson::Value &object)
{
    std::string file = object["file"].GetString();
    int frames = object["frames"].GetInt();
    
    double width = Utility::getDevicePositionX(object["width"].GetDouble());
    double height = width;//Utility::getDevicePositionY(object["height"].GetDouble());
   
    double angle = object["angle"].GetDouble();
    
    _rotatingCenter.x = Utility::getDevicePositionX(object["rotatingCenterX"].GetDouble());
    _rotatingCenter.y = Utility::getDevicePositionY(object["rotatingCenterY"].GetDouble());
    
    double objX = Utility::getDevicePositionX(object["x"].GetDouble());
    double objY = Utility::getDevicePositionY(object["y"].GetDouble());
    
    _radius = GameHelper::Helper::Distance(Point(objX, objY), Point(_rotatingCenter.x, _rotatingCenter.y));
    
    img = Sprite::createWithSpriteFrameName(file+"01.png");
    addChild(img);
    img->setAnchorPoint(Vec2(0.5, 0.5));
    img->setPosition(Vec2(objX, objY));
    img->setScaleX(width/img->getContentSize().width);
    img->setScaleY(height/img->getContentSize().height);
    img->setRotation(angle);
    
    _currRotation = atan2f(objY - _rotatingCenter.y, objX - _rotatingCenter.x);
    _currRotation = CC_RADIANS_TO_DEGREES(_currRotation);
    _currRotation += 270;
    
    onUpdate(0.0);

    //add animation here
    Action * action = AnimationHandler::getInstance()->createActionFromPList("spritesheets/animations", 1, frames, file, 0.15f, true);
    img->runAction(action);
}

void MovingPlanets::onUpdate(float dt)
{
    _currRotation = _currRotation + 0.01 * (Utility::getDevicePositionX(1.0));
    
    if (_currRotation >= 360.0)
    {
        _currRotation = 0.0;
    }
    
    float rad = CC_DEGREES_TO_RADIANS(_currRotation);
    img->setPositionX(_rotatingCenter.x + (_radius * cos(rad)));
    img->setPositionY(_rotatingCenter.y - (_radius * sin(rad)));
}
