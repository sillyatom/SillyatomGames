//
//  LevelEndAnim.h
//  MyCppGame
//
//  Created by Sillyatom on 01/02/15.
//
//

#ifndef __MyCppGame__LevelEndAnim__
#define __MyCppGame__LevelEndAnim__

#include "cocos2d.h"

USING_NS_CC;

class RoundEndAnim : public Sprite
{
private:
    
public:
    CREATE_FUNC(RoundEndAnim);
    virtual bool init();
    void clear();
    void startAnim(std::string text1, std::string text2, std::string text3, CallFunc * func1);
};

#endif /* defined(__MyCppGame__LevelEndAnim__) */
