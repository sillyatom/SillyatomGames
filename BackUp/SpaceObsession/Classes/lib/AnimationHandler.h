#ifndef _ANIMATIONHANDLER_H_
#define _ANIMATIONHANDLER_H_
#include "cocos2d.h"

USING_NS_CC;

class AnimationHandler : public Layer
{
public:
	static AnimationHandler * getInstance();
	static void deleteAnimationHandler();
	static Action* createActionFromPList(std::string filename, int from, int to, std::string frameName, float delay, bool isRepeat);
};
#endif