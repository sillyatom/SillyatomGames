//
//  StoryPopup.cpp
//  VoidShot
//
//  Created by Sillyatom on 26/04/15.
//
//

#include "StoryPopup.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../lib/Utility.h"

bool StoryPopup::init()
{
    if (!CSBPopup::init())
    {
        return false;
    }
    
    return true;
}

void StoryPopup::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
        
    _bg1 = static_cast<ui::ImageView*>(Helper::seekWidgetByName(_layout, "bg1"));
    _bg2 = static_cast<ui::ImageView*>(Helper::seekWidgetByName(_layout, "bg2"));
    _bg3 = static_cast<ui::ImageView*>(Helper::seekWidgetByName(_layout, "bg3"));
    
    _bg1->setOpacity(0);
    _bg2->setOpacity(0);
    _bg3->setOpacity(0);
    
    _name = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "name_label"));
    _name->setOpacity(0);
    
    _objective = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "objective_label"));
    _objective->setOpacity(0);
    
    _join = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "join_label"));
    _join->setOpacity(0);
    
    _join1 = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "join_label_1"));
    _join1->setOpacity(0);
}

void StoryPopup::play(CallFunc * func)
{
    _callback = func;
    addFrame1Anim();
}

void StoryPopup::addFrame1Anim()
{
    auto fadeIn = FadeTo::create(1.0, 255);
    auto delay = DelayTime::create(2.0);
    auto scaleUp = ScaleTo::create(1.0, 1.25);
    auto delay1 = DelayTime::create(3.0);
    auto fadeOut = FadeTo::create(1.0, 0);
    auto func = CallFunc::create(CC_CALLBACK_0(StoryPopup::addText1Anim, this));
    
    _bg1->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
    _bg1->runAction(Sequence::create(delay1, fadeOut, func, NULL));
}

void StoryPopup::addText1Anim()
{
    auto fadeIn = FadeTo::create(1.0, 255);
    auto delay = DelayTime::create(2.0);
    auto scaleUp = ScaleTo::create(1.0, 1.25);
    auto delay1 = DelayTime::create(3.0);
    auto fadeOut = FadeTo::create(1.0, 0);
    
    auto func = CallFunc::create(CC_CALLBACK_0(StoryPopup::addFrame2Anim, this));
    _name->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
    _name->runAction(Sequence::create(delay1, fadeOut, func, NULL));
}

void StoryPopup::addFrame2Anim()
{
    auto fadeIn = FadeTo::create(1.0, 255);
    auto delay = DelayTime::create(2.0);
    auto scaleUp = ScaleTo::create(1.0, 1.25);
    auto delay1 = DelayTime::create(3.0);
    auto fadeOut = FadeTo::create(1.0, 0);
    auto func = CallFunc::create(CC_CALLBACK_0(StoryPopup::addText2Anim, this));
    
    _bg2->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
    _bg2->runAction(Sequence::create(delay1, fadeOut, func, NULL));

}

void StoryPopup::addText2Anim()
{
    auto fadeIn = FadeTo::create(1.0, 255);
    auto delay = DelayTime::create(2.0);
    auto scaleUp = ScaleTo::create(1.0, 1.25);
    auto delay1 = DelayTime::create(3.0);
    auto fadeOut = FadeTo::create(1.0, 0);
    
    auto func = CallFunc::create(CC_CALLBACK_0(StoryPopup::addFrame3Anim, this));
    _objective->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
    _objective->runAction(Sequence::create(delay1, fadeOut, func, NULL));
}

void StoryPopup::addFrame3Anim()
{
    auto fadeIn = FadeTo::create(1.0, 255);
    auto delay = DelayTime::create(2.0);
    auto scaleUp = ScaleTo::create(1.0, 1.25);
    auto delay1 = DelayTime::create(3.0);
    auto fadeOut = FadeTo::create(1.0, 0);
    auto func = CallFunc::create(CC_CALLBACK_0(StoryPopup::addText3Anim, this));
    
    _bg3->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
    _bg3->runAction(Sequence::create(delay1, fadeOut, func, NULL));
}

void StoryPopup::addText3Anim()
{
    {
        auto fadeIn = FadeTo::create(1.0, 255);
        auto delay = DelayTime::create(2.0);
        auto scaleUp = ScaleTo::create(1.0, 1.25);
        auto delay1 = DelayTime::create(3.0);
        auto fadeOut = FadeTo::create(1.0, 0);
        
    //    auto func = CallFunc::create(CC_CALLBACK_0(StoryPopup::addFrame3Anim, this));
        _join->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
        _join->runAction(Sequence::create(delay1, fadeOut, NULL));
    }
    {
        auto fadeIn = FadeTo::create(1.0, 255);
        auto delay = DelayTime::create(2.0);
        auto scaleUp = ScaleTo::create(1.0, 1.25);
        auto delay1 = DelayTime::create(3.0);
        auto fadeOut = FadeTo::create(1.0, 0);
        
        _join1->runAction(Sequence::create(fadeIn, delay, scaleUp, NULL));
        _join1->runAction(Sequence::create(delay1, fadeOut, _callback, NULL));
    }
}