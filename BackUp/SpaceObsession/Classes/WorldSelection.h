#ifndef _WORLD_SELECTION_SCREEN_
#define _WORLD_SELECTION_SCREEN_

#include "cocos2d.h"
#include "ParseLevelElements.h"

USING_NS_CC;

class WorldSelectionScreen:public Layer
{
	CCCallFunc * selectedCallbackFn;
	void onClickCallback(Ref* sender);

	public:
		CREATE_FUNC(WorldSelectionScreen);
		static cocos2d::Scene* createScene();
		virtual bool init();
		void construct(CCCallFunc * selectedCallback);
		void createWorld(int world);
		void BuildUI( std::vector<GameObject*> objects );
		MenuItem* createBtn( int index, float x, float y, float width, float height );
};
#endif