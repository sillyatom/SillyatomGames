//
//  CameraShake.cpp
//  MyCppGame
//
//  Created by Sillyatom on 16/02/15.
//
//

#include "CameraShake.h"
// Code by Francois Guibert
// Contact: www.frozax.com - http://twitter.com/frozax - www.facebook.com/frozax
#include "cocos2d.h"
#include "../Constants.h"
#include "../lib/Utility.h"

// not really useful, but I like clean default constructors
CameraShake::CameraShake() : _strength_x(0), _strength_y(0), _initial_x(0), _initial_y(0)
{
}

bool CameraShake::init()
{
    return true;
}

bool CameraShake::initWithDuration(float duration, float strength_x, float strength_y)
{
    if (CCActionInterval::initWithDuration(duration))
    {
        _strength_x = strength_x;
        _strength_y = strength_y;
        return true;
    }
    
    return false;
}

void CameraShake::update(float time)
{
    float randx = Utility::fgRangeRand( -_strength_x, _strength_x );
    float randy = Utility::fgRangeRand( -_strength_y, _strength_y );
    
    // move the target to a shaked position
    m_pTarget->setPosition( Vec2(_initial_x + randx, _initial_y + randy));
}

void CameraShake::startWithTarget(Node *pTarget)
{
    CCActionInterval::startWithTarget( pTarget );
    
    // save the initial position
    _initial_x = Utility::getDevicePositionX(REF_GAME_WIDTH/2.0);
    _initial_y = Utility::getDevicePositionY(REF_GAME_HEIGHT/2.0);
    m_pTarget = pTarget;
}

void CameraShake::stop(void)
{
    // Action is done, reset clip position
    m_pTarget->setPosition( Vec2( _initial_x, _initial_y ) );
    
    CCActionInterval::stop();
}