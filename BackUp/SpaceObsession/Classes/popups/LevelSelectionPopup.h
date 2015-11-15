//
//  LevelSelectionPopup.h
//  MyCppGame
//
//  Created by Sillyatom on 17/02/15.
//
//

#ifndef __MyCppGame__LevelSelectionPopup__
#define __MyCppGame__LevelSelectionPopup__
#include "cocos2d.h"
#include "../lib/CSBPopup.h"

USING_NS_CC;

class LevelSelectionPopup : public CSBPopup
{
    Widget * _btnsHolder;
    Widget * _linesHolder;
    
    cocos2d::Node* _mTarget;
    cocos2d::SEL_CallFuncO _scrollCallFunc;
public:
    CREATE_FUNC(LevelSelectionPopup);
    ~LevelSelectionPopup();
    virtual bool init();
    virtual void construct(std::string fileName);
    virtual void scrollCallback(cocos2d::Ref *pSender, int val);
    
	Widget * getLinesHolder(){ return _linesHolder; }
    Widget * getBtnsHolder(){ return _btnsHolder;};
    
    void setTarget(cocos2d::Node * target){ _mTarget = target; }
    void setScrollCallback(cocos2d::SEL_CallFuncO func){ _scrollCallFunc = func; };
};

#endif /* defined(__MyCppGame__LevelSelectionPopup__) */
