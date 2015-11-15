
//------------------------------------------------------------------
# include "PhysicsEnvironment.h"
#include "Utility.h"

//---------------------------------------------------------------------------------------------------

bool PhysicsEnvironment::pause = false;
static b2World * instance;

//---------------------------------------------------------------------------------------------------
void PhysicsEnvironment::setPause(bool val)
{
	PhysicsEnvironment::pause = val;
}

//---------------------------------------------------------------------------------------------------
bool PhysicsEnvironment::getPause()
{
	return PhysicsEnvironment::pause;
}

//---------------------------------------------------------------------------------------------------
Scene* PhysicsEnvironment::scene()
{
	auto scene = Scene::create();

	PhysicsEnvironment * layer = PhysicsEnvironment::create();

	scene->addChild(layer);

	return scene;
}

void PhysicsEnvironment::deleteWorld()
{
	delete instance;
	instance = nullptr;
}
//---------------------------------------------------------------------------------------------------
b2World * PhysicsEnvironment::getWorld()
{
	if(instance == NULL)
	{
		instance = new b2World(b2Vec2(0.f, GRAVITY));
	}
	
	return instance;
}

//---------------------------------------------------------------------------------------------------
bool PhysicsEnvironment::initPhysics()
{
	b2World * world = getWorld();
	
	pause = false;

    Vec2 visibleOrigin = Director::getInstance()->getVisibleOrigin();

	//allow the bodies to sleep
	world->SetAllowSleeping(true);

	//initialize Collision listener
	_collisionListener = new CollisionListener();
	world->SetContactListener(_collisionListener);

	debug = new GLESDebugDraw(PTM_RATIO);

	//Debug flags
	uint32 flags = 0;
	//flags += b2Draw::e_aabbBit;
	flags += b2Draw::e_centerOfMassBit;
	flags += b2Draw::e_jointBit;
	flags += b2Draw::e_pairBit;
	flags += b2Draw::e_shapeBit;

	debug->SetFlags(flags);

#if (BOX2D_DEBUG_DRAW == 1)
		world->SetDebugDraw(debug);
#endif	
    
    _deltaShift.x = _deltaShift.y = 0.0;
    _worldXLimits.x = _worldXLimits.y = 0.0;
    _worldYLimits.x = _worldYLimits.y = 0.0;
    
    halfWidth = Utility::getDevicePositionX(REF_GAME_WIDTH * 0.5)/PTM_RATIO;
    halfHeight = Utility::getDevicePositionY(REF_GAME_HEIGHT * 0.5)/PTM_RATIO;
    
	return true;
}

//---------------------------------------------------------------------------------------------------
void PhysicsEnvironment::draw(Renderer *renderer, const Mat4 &transform, bool transformUpdated)
{
	CCNode::draw(renderer, transform, transformUpdated);
#if (BOX2D_DEBUG_DRAW == 1)
	getWorld()->DrawDebugData();
#endif
}

//---------------------------------------------------------------------------------------------------
void PhysicsEnvironment::OnUpdate( float dt )
{
	if (pause)
	{
		return;
	}
	getWorld()->Step(dt, 8, 8);

	//resolve contacts in collision listener
	_collisionListener->ResolveContacts();
}

void PhysicsEnvironment::resetEnvironment()
{
	getWorld()->SetContactListener(nullptr);
	getWorld()->SetDebugDraw(nullptr);
	delete debug;
	deleteWorld();
	delete _collisionListener;
	_collisionListener = nullptr;
}
//---------------------------------------------------------------------------------------------------
PhysicsEnvironment::~PhysicsEnvironment()
{
	resetEnvironment();
}

b2Vec2 PhysicsEnvironment::changeOrigin(float delX, float delY)
{
    _deltaShift.x += delX;
    _deltaShift.y += delY;

	float canX = canScrollX();
	float canY = canScrollY();
    if (canX)
    {
        getWorld()->ShiftOrigin(b2Vec2(delX, 0.0));
    }
    if (canY)
    {
        getWorld()->ShiftOrigin(b2Vec2(0.0, delY));
    }
	return b2Vec2(canX, canY);
}

bool PhysicsEnvironment::canScrollX()
{
    //if greater than half width
    if (_deltaShift.x > halfWidth)
    {
        //check for max bounds
        if (_worldXLimits.y - _deltaShift.x < halfWidth)
        {
            return false;
        }
        return true;
    }
    //if lesser than half width
    else if (_deltaShift.x - _worldXLimits.x > halfWidth)
    {
        return true;
    }
    
    return false;
}

bool PhysicsEnvironment::canScrollY()
{
    //if greater than half width
    if (_deltaShift.y > halfHeight)
    {
        //check for max bounds
        if (_worldYLimits.y - _deltaShift.y < halfHeight)
        {
            return false;
        }
        return true;
    }
    //if lesser than half width
    else if (_deltaShift.y - _worldYLimits.x > halfHeight)
    {
        CCLOG("_deltaShift.y %f  _worldYLimits.x %f val %f",_deltaShift.y, _worldYLimits.x, (_deltaShift.y - _worldYLimits.x));
        return true;
    }
    
    return false;
}