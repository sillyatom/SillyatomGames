//
//  PortalPlatform.cpp
//  MyCppGame
//
//  Created by Sillyatom on 25/12/14.
//
//

#include "PortalPlatform.h"
#include "../lib/Utility.h"
#include "../balls/Ball.h"

void PortalPlatform::CollidesWith(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact)
{
    MovingPhysicsBox::CollidesWith(object, phySprite, contact);
    
    if (object == e_Player)
    {
        Ball * player = (Ball *)phySprite;
        player->setIsDead(true);
        
        GameEvent event;
//        event.eventName = GameEvent::AddExtraBall;
//        event.x = player->GetCCBodyPositionX();
//        event.y = Utility::getDevicePositionY(REF_GAME_HEIGHT);
//        event.radius = player->getBoundingBox().size.width/2.f;
//        event.velocity = Point(-player->GetBody()->GetLinearVelocity().x, player->GetBody()->GetLinearVelocity().y / 2.0f);
//        event.selectedball = player->getBallName();
//        
//        if (player->getBallType() == e_MultiplierBall)
//        {
//            event.availableCount = 1;
//        }
        
        _eventDispatcher->dispatchEvent(&event);
    }
}
