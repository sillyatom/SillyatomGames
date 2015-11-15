//
//  ScrollingBG.h
//  MyCppGame
//
//  Created by Sillyatom on 05/04/15.
//
//

#ifndef __MyCppGame__ScrollingBG__
#define __MyCppGame__ScrollingBG__

#include "cocos2d.h"
#include "../lib/CSBPopup.h"

USING_NS_CC;

class ScrollingBG : public CSBPopup
{
public:
    CREATE_FUNC(ScrollingBG);
    virtual bool init();
    virtual void construct(std::string fileName);
};
#endif /* defined(__MyCppGame__ScrollingBG__) */
