//
//  CSBPopup.h
//  MazeDev
//
//  Created by Sillyatom on 16/11/14.
//
//

#ifndef __MazeDev__CSBPopup__
#define __MazeDev__CSBPopup__

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "ui/cocosGui.h"

USING_NS_CC;
using namespace ui;

class CSBPopup : public cocos2d::Layer
{
private:

protected:
    bool _canClick;

    cocos2d::ui::Layout * _layout;
    virtual void onExit();
    
public:
    CREATE_FUNC(CSBPopup);
    virtual bool init();
    cocos2d::ui::Layout * getLayout(){ return _layout; }
    virtual void construct(std::string fileName);
    virtual void touchCallback(Ref * node, Widget::TouchEventType event);
    virtual void scrollCallback(Ref * node, int val);
    virtual void removeChild(Node* child, bool cleanup) override;
    void setCanClick(bool val){ _canClick = val; }
    bool getCanClick(){ return _canClick; }
    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *event);
    virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *event);
};

#endif /* defined(__MazeDev__CSBPopup__) */
