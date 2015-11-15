//
//  Portals.cpp
//  MyCppGame
//
//  Created by Sillyatom on 07/01/15.
//
//

#include "Portals.h"
#include "../lib/Utility.h"
#include "../balls/Ball.h"

bool Portals::init()
{
    if (!RotatingBulb::init())
    {
        return false;
    }
    
    _bulbName = std::string("portal");
    
    return true;
}

void Portals::addAnimation()
{
    cocos2d::Vector<FiniteTimeAction*> actions;
    float scale = getScaleX();
    
    {
        FiniteTimeAction * action = ScaleTo::create(0.1, scale * 0.75);
        actions.pushBack(action);
    }
    {
        FiniteTimeAction * action = ScaleTo::create(0.1, scale);
        actions.pushBack(action);
    }
    runAction(Sequence::create(actions));
}

void Portals::CollidesWith( ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact)
{
    if (phySprite->GetObjectId() == e_Player)
    {
//        Ball * player = (Ball*)phySprite;
//        if (player->getPortalStatus() != "out")
//        {
//            addAnimation();
//            //port to other side
//            {
//                GameEvent event;
//                event.eventName = GameEvent::AddExtraBall;
//                event.x = _out->GetCCBodyPositionX();
//                event.y = _out->GetCCBodyPositionY();
//                event.radius = player->getBoundingBox().size.width/2.f;
//                event.selectedball = "basic";
//                event.velocity = Point(-player->GetBody()->GetLinearVelocity().x, player->GetBody()->GetLinearVelocity().y);
//                event.portalStatus = "out";
//                _eventDispatcher->dispatchEvent(&event);
//                player->setIsDead(true);
//            }
//            _out->addAnimation();
//        }
    }
    RotatingBulb::CollidesWith(object, phySprite, contact);
}

void Portals::OnCollisionEnds(ENUM_OBJECT object, PhysicsSprite* phySprite, b2Contact * contact)
{
    if (phySprite->GetObjectId() == e_Player)
    {
        Ball * player = (Ball*)phySprite;
        player->setPortalStatus("in");
    }
}