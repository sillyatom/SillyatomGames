//
//  ScrollingLayer.h
//  MazeDev
//
//  Created by Sillyatom on 29/09/14.
//
//

#ifndef MazeDev_ScrollingLayer_h
#define MazeDev_ScrollingLayer_h

#include "cocos2d.h"
#include "ParseLevelElements.h"

USING_NS_CC;

class ScrollingLayer:public Layer
{
private:
    int _currentRunningIndex;
    int _slideNum;
    
    Size _visibleSize;
    std::vector<Sprite*> _slides;
    
public:
    static Scene* createScene();
    CREATE_FUNC(ScrollingLayer);
    
    void setVisibleSize(Size val) { _visibleSize = val; }
    
    bool init();
    void removeSlide();
    void onUpdate(float dt);
    
    void addSlide(std::string fileName);
    int getSlideNum(){ return _slideNum; }
    int getCurrentRunningIndex(){ return _currentRunningIndex; }
    void setCurrentRunningIndex(int val){ _currentRunningIndex = val; }
};
#endif
