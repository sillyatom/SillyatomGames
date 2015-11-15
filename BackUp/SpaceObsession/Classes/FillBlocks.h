#ifndef _FILL_BLOCKS_H_
#define _FILL_BLOCKS_H_
#pragma once
# include "cocos2d.h"
#include "PhysicsBox.h"
#include "Box2D/Box2D.h"

USING_NS_CC;

class FillBlocks : public Sprite
{
	void onTimer(float dt);
	std::vector<PhysicsBox*> _blocksToUpdate;
	float _fillSeconds;

public:

	CREATE_FUNC(FillBlocks);
	~FillBlocks();
	std::vector<PhysicsBox*> fills;
	int blocksPerFill;
	void startTimer();
	void setFillSeconds(float value){ _fillSeconds = value; }
	void updateSensor(PhysicsBox*);
	void onUpdate(float dt);
	void updateRotation( PhysicsBox* object );
};
#endif