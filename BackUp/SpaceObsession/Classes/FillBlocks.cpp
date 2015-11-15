#include "FillBlocks.h"
#include "ArcElement.h"

FillBlocks::~FillBlocks()
{
	_blocksToUpdate.clear();
	_blocksToUpdate.empty();

	for (std::vector<PhysicsBox*>::iterator iter = fills.begin(); iter != fills.end();)
	{
		PhysicsBox* box = *iter;
		box->getParent()->removeChild(box);
		delete *iter;
		iter = fills.erase(iter);
	}
}

void FillBlocks::startTimer()
{
	blocksPerFill = ceil(fills.size()/_fillSeconds);
	float interval = _fillSeconds/fills.size();
	int repeat = _fillSeconds/interval;
	schedule(schedule_selector(FillBlocks::onTimer), interval, repeat, 0.f);
	_blocksToUpdate.empty();
}

void FillBlocks::onTimer(float dt)
{
	int count = 0;
	for (std::vector<PhysicsBox*>::iterator iter = fills.begin(); iter != fills.end(); iter++)
	{
		if (count >= blocksPerFill)
		{
			break;
		}
		if ((*iter)->getOpacity() != 255)
		{
			count++;
			_blocksToUpdate.push_back(*iter);
		}
	}
}

void FillBlocks::onUpdate(float dt)
{
	for (std::vector<PhysicsBox*>::iterator iter = _blocksToUpdate.begin(); iter != _blocksToUpdate.end();)
	{
		(*iter)->setOpacity(255);
		updateSensor(*iter);
		iter = _blocksToUpdate.erase(iter);
	}

	for (std::vector<PhysicsBox*>::iterator iter = fills.begin(); iter != fills.end(); iter++)
	{
		(*iter)->OnUpdate(dt);
	}
}

void FillBlocks::updateSensor(PhysicsBox* block)
{
	float scaleFactor = 1;///Director::getInstance()->getContentScaleFactor();

	float width = 8.f * scaleFactor;
	float height = 8.f * scaleFactor;

	b2Fixture * fixture = block->GetBody()->GetFixtureList();
	block->GetBody()->DestroyFixture(fixture);

	b2PolygonShape shape;
	shape.SetAsBox((width*0.5f)/PTM_RATIO, (height*0.5f)/PTM_RATIO);

	b2FixtureDef ballFixtureDef;

	ballFixtureDef.density = 1.0f;
	ballFixtureDef.friction = 0.8f;
	ballFixtureDef.restitution = 0.1f;
	ballFixtureDef.isSensor = false;
	ballFixtureDef.shape = &shape;
	ballFixtureDef.filter.categoryBits = BOX_CATEGORY;
	ballFixtureDef.filter.maskBits = MASK_BOX;

	block->GetBody()->CreateFixture(&ballFixtureDef);
}
