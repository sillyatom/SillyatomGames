#ifndef _LEVEL_INTRO_H_
#define _LEVEL_INTRO_H_

#include "cocos2d.h"
#include "../lib/CSBPopup.h"

USING_NS_CC;

class LevelIntro : public CSBPopup
{
public:
    CREATE_FUNC(LevelIntro);
    virtual bool init();
    virtual void construct(std::string fileName);
};
#endif