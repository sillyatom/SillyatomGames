//
//  LevelEndAnim.cpp
//  MyCppGame
//
//  Created by Sillyatom on 01/02/15.
//
//

#include "RoundEndAnim.h"
#include "../lib/Utility.h"
#include "../Constants.h"

bool RoundEndAnim::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    setCascadeOpacityEnabled(true);
    return true;
}

void RoundEndAnim::startAnim(std::string text1, std::string text2, std::string text3, CallFunc * func1)
{
    auto _text1 = Label::createWithBMFont("fonts/font.fnt", text1);
    addChild(_text1);
    _text1->setPositionY(_text1->getBoundingBox().size.height * 1.1);
    _text1->setScale(0.0);
    
    auto _text2 = Label::createWithBMFont("fonts/font.fnt", text2);
    addChild(_text2);
    _text2->setPositionY(-_text2->getBoundingBox().size.height * 1.1);
    _text2->setScale(0.0);
    
    FiniteTimeAction * scaleUp = ScaleTo::create(0.1, 1.0);
    
    FiniteTimeAction * delay = DelayTime::create(1.0);
    
    FiniteTimeAction * scaleDup = ScaleTo::create(0.15, 2.3);
    
    FiniteTimeAction * fadeIn = FadeTo::create(1.0, 255);
    
    FiniteTimeAction * fadeOut = FadeTo::create(1.0, 0);
    
    setAnchorPoint(Vec2(0.5, 0.5));
    setPosition(Utility::getDevicePositionX(REF_GAME_WIDTH/2.0), Utility::getDevicePositionY(REF_GAME_HEIGHT/2.0));
    
    _text1->runAction(Sequence::create(scaleUp, delay, NULL));
    _text2->runAction(Sequence::create(DelayTime::create(0.6), scaleUp, delay, NULL));

    runAction(Sequence::create(DelayTime::create(2.0), fadeOut, NULL));
    
    _text1->runAction(Sequence::create(DelayTime::create(2.0), scaleDup, NULL));
    _text2->runAction(Sequence::create(DelayTime::create(2.0), scaleDup, func1, CallFunc::create(CC_CALLBACK_0(RoundEndAnim::clear, this)),  NULL));
}

void RoundEndAnim::clear()
{
    if (getParent())
    {
        getParent()->removeChild(this);
    }
}