//---------------------------------------------------------------------------------------------------
#include "CollisionListener.h"
#include "PhysicsSprite.h"

//---------------------------------------------------------------------------------------------------
void CollisionListener::BeginContact( b2Contact* contact )
{
	std::vector<b2Contact*>::iterator iter = std::find(_contacts.begin(), _contacts.end(), contact);
	if (iter != _contacts.end())
	{
		_contacts.erase(iter);
	}
	_contacts.push_back(contact);
}

//---------------------------------------------------------------------------------------------------
void CollisionListener::EndContact( b2Contact* contact )
{
    if (!_isResolving)
    {
        std::vector<b2Contact*>::iterator iter = std::find(_contacts.begin(), _contacts.end(), contact);
        
        endContacts(contact);
        
        if( iter != _contacts.end())
        {
            _contacts.erase(iter);
        }
    }
    else
    {
        _contactsToBeRemoved.push_back(contact);
    }
}

//---------------------------------------------------------------------------------------------------
void CollisionListener::ResolveContacts()
{
    _isResolving = true;
    
	std::vector<b2Contact*>::iterator iter;

	for (iter = _contacts.begin(); iter != _contacts.end();)
	{
		if(ResolveContact(*iter) && _contacts.size())
		{
			iter = _contacts.erase(iter);
		}
		else
		{
			++iter;
		}
	}
    
    for (iter = _contactsToBeRemoved.begin(); iter != _contactsToBeRemoved.end();)
    {
        endContacts(*iter);
        
        auto iter1 = std::find(_contacts.begin(), _contacts.end(), (*iter));
        if( iter1 != _contacts.end())
        {
            _contacts.erase(iter1);
        }
        _contactsToBeRemoved.erase(iter);
    }
    
    _isResolving = false;
}

//---------------------------------------------------------------------------------------------------
void CollisionListener::endContacts(b2Contact * contact)
{
    PhysicsSprite * phySpriteA;
    PhysicsSprite * phySpriteB;
    
    b2Body * body = contact->GetFixtureA()->GetBody();
    
    if(body != NULL && body->GetUserData() != NULL)
    {
        //do resolve
        phySpriteA = (PhysicsSprite*)(body->GetUserData());
    }
    else
    {
        return;
    }
    
    body = contact->GetFixtureB()->GetBody();
    
    if(body != NULL && body->GetUserData() != NULL)
    {
        //do resolve
        phySpriteB = (PhysicsSprite*)(body->GetUserData());
    }
    else
    {
        return;
    }
    
    phySpriteA->OnCollisionEnds(phySpriteB->GetObjectId(), phySpriteB, contact);
    phySpriteB->OnCollisionEnds(phySpriteA->GetObjectId(), phySpriteA, contact);

}

//---------------------------------------------------------------------------------------------------
bool CollisionListener::ResolveContact( b2Contact * contact)
{
	PhysicsSprite * phySpriteA;
	PhysicsSprite * phySpriteB;

	b2Body * body = contact->GetFixtureA()->GetBody();

	if(body != NULL && body->GetUserData() != NULL)
	{
		//do resolve
		phySpriteA = (PhysicsSprite*)(body->GetUserData()); 
	}
	else
	{
		return true;
	}

	body = contact->GetFixtureB()->GetBody();

	if(body != NULL && body->GetUserData() != NULL)
	{
		//do resolve
		phySpriteB = (PhysicsSprite*)(body->GetUserData()); 
	}
	else
	{
		return true;
	}

	phySpriteA->CollidesWith(phySpriteB->GetObjectId(), phySpriteB, contact);
	phySpriteB->CollidesWith(phySpriteA->GetObjectId(), phySpriteA, contact);

	return true;
}

//---------------------------------------------------------------------------------------------------
CollisionListener::~CollisionListener()
{
	std::vector<b2Contact*>::iterator iter = _contacts.begin();
	for (; iter != _contacts.end(); )
	{
		iter = _contacts.erase(iter);
	}
	_contacts.clear();
}

//---------------------------------------------------------------------------------------------------