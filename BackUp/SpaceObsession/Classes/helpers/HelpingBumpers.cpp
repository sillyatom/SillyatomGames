//
//  HelpingBumpers.cpp
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#include "HelpingBumpers.h"
#include "../lib/Utility.h"
#include "../Helper.h"

bool HelpingBumpers::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    createBumpers();
    
    return true;
}

void HelpingBumpers::createBumpers()
{
    _left = HelpingBumper::create();
    createBumper(_left, 109.0, REF_GAME_HEIGHT - 320.4, 59.0);
    
    _middle = HelpingBumper::create();
    createBumper(_middle, 238.9, REF_GAME_HEIGHT - 320.4, 59.0);
    
    _right = HelpingBumper::create();
    createBumper(_right, 368.9, REF_GAME_HEIGHT - 320.4, 59.0);
}

void HelpingBumpers::createBumper(HelpingBumper * bulb, float x, float y, float radius)
{
    bulb->setBulbType(e_HelpingBumper);
    
    std::string jsonFileName = "json/settings.json";
    std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
    rapidjson::Document document;
    document.Parse<0>(jsonData.c_str());
    
    const rapidjson::Value& ballAsset = document["bulbAsset"];
    std::string fileName = std::string(ballAsset[bulb->getBulbName().c_str()].GetString());
    bulb->initWithFile(fileName);
    
    x = Utility::getDevicePositionX(x);
    y = Utility::getDevicePositionY(y);
    radius = Utility::getDevicePositionY(radius/2.0);
    
    bulb->CreateBody(x, y, radius);
    
    bulb->SetObjectId(e_Bulb);
    bulb->retain();
    bulb->OnUpdate(0.f);
    addChild(bulb);
}

void HelpingBumpers::OnUpdate(float dt)
{
    
}