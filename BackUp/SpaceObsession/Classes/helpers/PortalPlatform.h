//
//  PortalPlatform.h
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#ifndef __MyCppGame__PortalPlatform__
#define __MyCppGame__PortalPlatform__

#include "../MovingPhysicsBox.h"

class PortalPlatform : public MovingPhysicsBox
{
    public:
    
    CREATE_FUNC(PortalPlatform);
    virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact);
};

#endif /* defined(__MyCppGame__PortalPlatform__) */
