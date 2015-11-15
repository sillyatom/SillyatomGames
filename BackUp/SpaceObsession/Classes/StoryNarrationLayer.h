#ifndef _MY_CPP_GAME_STORY_NARRATION_LAYER_
#define _MY_CPP_GAME_STORY_NARRATION_LAYER_

#include "cocos2d.h"
#include "popups/StoryPopup.h"

USING_NS_CC;

class StoryNarrationLayer : public Layer
{
private:
    StoryPopup * _popup;
public:
	CREATE_FUNC(StoryNarrationLayer);
	static Scene* createScene();
	virtual bool init();
	void showMenuScreen();
    virtual void onEnter();
protected:


};

#endif