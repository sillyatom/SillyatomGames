//
//  StoryPopup.h
//  VoidShot
//
//  Created by Sillyatom on 26/04/15.
//
//

#ifndef __VoidShot__StoryPopup__
#define __VoidShot__StoryPopup__

#include "cocos2d.h"
#include "../lib/CSBPopup.h"

USING_NS_CC;

class StoryPopup : public CSBPopup
{
    ui::ImageView * _bg1;
    ui::ImageView * _bg2;
    ui::ImageView * _bg3;
    
    ui::TextBMFont * _name;
    ui::TextBMFont * _objective;
    ui::TextBMFont * _join;
    ui::TextBMFont * _join1;
    
    CallFunc * _callback;
    
public:
    CREATE_FUNC(StoryPopup);
    virtual bool init();
    virtual void construct(std::string fileName);
    
    void play(CallFunc * func);
    void addFrame1Anim();
    void addText1Anim();
    
    void addFrame2Anim();
    void addText2Anim();
    
    void addFrame3Anim();
    void addText3Anim();
};

#endif /* defined(__VoidShot__StoryPopup__) */
