//---------------------------------------------------------------------------------------------------
# ifndef _COLLISION_LISTENER_
# define _COLLISION_LISTENER_

//---------------------------------------------------------------------------------------------------
# include <vector>
# include "Box2D/Box2D.h"

//---------------------------------------------------------------------------------------------------
class CollisionListener : public b2ContactListener
{
	//---------------------------------------------------------------------------------------------------
	std::vector<b2Contact*> _contacts;
    std::vector<b2Contact*> _contactsToBeRemoved;
    bool _isResolving;
    
	//---------------------------------------------------------------------------------------------------
	public:
		~CollisionListener();
        CollisionListener() : _isResolving(false){};
		
    /// Called when two fixtures begin to touch.
		virtual void BeginContact(b2Contact* contact);

		/// Called when two fixtures cease to touch.
		virtual void EndContact(b2Contact* contact);

        void endContacts(b2Contact * contact);
    
		//explicitly called from main every frame
		void ResolveContacts();
		bool ResolveContact( b2Contact * contact);
};

//---------------------------------------------------------------------------------------------------
# endif