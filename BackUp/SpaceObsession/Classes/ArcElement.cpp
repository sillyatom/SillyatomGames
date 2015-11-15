#include "ArcElement.h"
#include "lib/Utility.h"

ArcElement::~ArcElement()
{
	for (std::vector<PhysicsBox*>::iterator iter = _staticBlocks.begin(); iter != _staticBlocks.end();)
	{
		PhysicsBox* box = *iter;
		box->getParent()->removeChild(box);
		delete box;
		iter = _staticBlocks.erase(iter);
	}
	if (_filledBlocks)
	{
		_filledBlocks->getParent()->removeChild(_filledBlocks);
		delete _filledBlocks;
	}
}
void ArcElement::construct(float x, float y, int radius, float lowerLimt, float upperLimit, bool isReversed, bool isFill, bool canRotate
						   , float fillSeconds, float rotationValue)
{
    float width = Utility::getDevicePositionX(6.0);
    float height = Utility::getDevicePositionY(2.0);
    float val = width;//(360.f/((3.14 * Utility::getDevicePositionY(2.0) * radius)/width));
	_rotationValue = rotationValue;

	_canRotate = canRotate;
	_center = Point(x, y);
	_radius = radius;

	_filledBlocks = nullptr;

	if (isFill)
	{
		_filledBlocks = FillBlocks::create();
		addChild(_filledBlocks);
		_filledBlocks->retain();
		_filledBlocks->setFillSeconds(fillSeconds);
	}

	for (float theta = 0; theta <= 360.0f - val; theta += val)
	{
		if (
			(!isReversed && (theta >= upperLimit || theta <= lowerLimt))
			|| (isReversed && (theta >= upperLimit && theta <= lowerLimt))
			)
		{
			float rotation = CC_DEGREES_TO_RADIANS(theta);
			float xPos = x + radius * cos(rotation);
			float yPos = y + radius * sin(rotation);

			PhysicsBox * sprite = PhysicsBox::create();
			sprite->initWithFile("physics/bluewall.png");
			sprite->CreateBody(xPos, yPos, width, height, false);
			sprite->SetTransform(sprite->GetBody()->GetPosition(), rotation);
			sprite->setRawWidth(width);
			sprite->setRawHeight(height);
			sprite->OnUpdate(0.f);
			sprite->retain();
			sprite->SetObjectId(e_Box);
			addChild(sprite);
			_staticBlocks.push_back(sprite);
		}
		else if (isFill)
		{
			float rotation = CC_DEGREES_TO_RADIANS(theta);
			float xPos = x + radius * cos(rotation);
			float yPos = y + radius * sin(rotation);

			PhysicsBox * sprite = PhysicsBox::create();
			sprite->initWithFile("physics/bluewall.png");
			sprite->CreateBody(xPos, yPos, width, height, true);
			sprite->SetTransform(sprite->GetBody()->GetPosition(), rotation);
			sprite->OnUpdate(0.f);
			sprite->setOpacity(10);
			sprite->retain();
			sprite->SetObjectId(e_Box);
			_filledBlocks->addChild(sprite);
			_filledBlocks->fills.push_back(sprite);
		}
	}
}

void ArcElement::onUpdate(float dt)
{
	if (_filledBlocks)
	{
		_filledBlocks->onUpdate(dt);
	}

	if (_canRotate)
	{
		if (_filledBlocks)
		{
			for (std::vector<PhysicsBox*>::iterator iter = _filledBlocks->fills.begin(); iter != _filledBlocks->fills.end(); iter++)
			{
				updateRotation(*iter);
				(*iter)->OnUpdate(dt);
			}
		}
		
		for (std::vector<PhysicsBox*>::iterator iter = _staticBlocks.begin(); iter != _staticBlocks.end(); iter++)
		{
			updateRotation(*iter);
			(*iter)->OnUpdate(dt);
		}
	}
}

void ArcElement::updateRotation( PhysicsBox* object )
{
	float x = (_center.x) + (getRadius() * cos(object->GetBody()->GetAngle()));
	float y = (_center.y) + (getRadius() * sin(object->GetBody()->GetAngle()));

	object->SetTransform(b2Vec2(x/PTM_RATIO,y/PTM_RATIO), object->GetBody()->GetAngle() + CC_DEGREES_TO_RADIANS(_rotationValue));
}

void ArcElement::startFillTimer()
{
	if (_filledBlocks)
	{
		_filledBlocks->startTimer();
	}
}
