#ifndef _ARCELEMENT_H_
#define _ARCELEMENT_H_

#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "FillBlocks.h"
#include "PhysicsBox.h"

USING_NS_CC;

class ArcElement : public Sprite
{
	bool _canRotate;
	cocos2d::Point _center;
	float _radius;
	float _rotationValue;
	std::vector<PhysicsBox*> _staticBlocks;
	
	FillBlocks* _filledBlocks;

public:
	CREATE_FUNC(ArcElement);
	
	~ArcElement();
	bool getCanRotate() const { return _canRotate; }
	void setCanRotate(bool val) { _canRotate = val; }

	cocos2d::Point getCenter() const { return _center; }
	void setCenter(cocos2d::Point val) { _center = val; }

	float getRadius() const { return _radius; }
	void setRadius(float val) { _radius = val; }

	void onUpdate(float dt);
	void construct(float x, float y, int radius, float lowerLimt, float upperLimit, bool isReversed, bool isFill, bool canRotate
		, float fillSeconds, float rotationValue);

	void updateRotation( PhysicsBox* object );
	void startFillTimer();
};
#endif