//
//  BgFlyingObjects.h
//  MyCppGame
//
//  Created by Sillyatom on 31/01/15.
//
//

#ifndef __MyCppGame__BgFlyingObjects__
#define __MyCppGame__BgFlyingObjects__

#include "cocos2d.h"
#include "../particles/BulbParticle.h"

#include "../../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output
#include "../../cocos2d/external/json/stringbuffer.h"

USING_NS_CC;

class BackgroundAnimation : public Sprite
{
protected:
    Sprite * img;
    ParticleMeteor * _particle;
    
public:
    CREATE_FUNC(BackgroundAnimation);
    virtual bool init();
    virtual void initData(rapidjson::Value& object){};
    virtual void clear();
    virtual void onUpdate(float dt){};
    virtual void startAnim(CallFunc * func1 = NULL, CallFunc * func2 = NULL);
};

#endif /* defined(__MyCppGame__BgFlyingObjects__) */
