#include "AnimationHandler.h"

static AnimationHandler * instance = nullptr;

AnimationHandler * AnimationHandler::getInstance()
{
	if (!instance)
	{
		instance = new AnimationHandler();
	}
	return instance;
}

void AnimationHandler::deleteAnimationHandler()
{
	delete instance;
	instance = nullptr;
}
Action* AnimationHandler::createActionFromPList(std::string filename, int from, int to, std::string frameName, float delay, bool isRepeat)
{
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile(filename+(".plist"));
	SpriteBatchNode * batchNode = SpriteBatchNode::create(filename+(".png"));
	SpriteFrameCache::getInstance()->addSpriteFramesWithFile(filename+(".plist"));

	cocos2d::Vector<SpriteFrame*> animFrames;

	for (int index = from; index <= to; index++)
	{
		std::ostringstream osstream;
		osstream << frameName;
        if (index <= 9)
        {
            osstream << "0";
        }
		osstream << index;
		osstream << ".png";
		animFrames.pushBack(SpriteFrameCache::getInstance()->getSpriteFrameByName(osstream.str()));
	}

	getInstance()->addChild(batchNode);
	
	Animation * animation  = Animation::createWithSpriteFrames(animFrames, delay);
	animation->retain();

	Animate * animate = Animate::create(animation);
	animate->retain();

	Action * action  = NULL;
	if (!isRepeat)
	{
		action = Repeat::create(animate, 1);
	}
	else
	{
		action = RepeatForever::create(animate);
	}
	return action;
}