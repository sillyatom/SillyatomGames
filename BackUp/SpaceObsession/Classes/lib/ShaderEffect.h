//
//  ShaderEffect.h
//  MyCppGame
//
//  Created by Sillyatom on 23/03/15.
//
//

#ifndef __MyCppGame__ShaderEffect__
#define __MyCppGame__ShaderEffect__

#include <stdio.h>
#include "cocos2d.h"

USING_NS_CC;

class ShaderEffect : public Ref
{
public:
    GLProgramState* getGLProgramState() const { return _glprogramstate; }

public:
    bool initGLProgramState(const std::string &fragmentFilename);
    ShaderEffect();
    virtual ~ShaderEffect();
    GLProgramState *_glprogramstate;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_WP8 || CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    std::string _fragSource;
    EventListenerCustom* _backgroundListener;
#endif
    GLProgram * getGLProgram(){ return (_glprogramstate) ? _glprogramstate->getGLProgram() : nullptr; }
};

#endif /* defined(__MyCppGame__ShaderEffect__) */
