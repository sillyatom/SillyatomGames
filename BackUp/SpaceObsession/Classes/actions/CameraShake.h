//
//  CameraShake.h
//  MyCppGame
//
//  Created by Sillyatom on 16/02/15.
//
//

#ifndef __MyCppGame__CameraShake__
#define __MyCppGame__CameraShake__

#include "cocos2d.h"

using namespace cocos2d;

class CameraShake : public ActionInterval
{
    // Code by Francois Guibert
    // Contact: www.frozax.com - http://twitter.com/frozax - www.facebook.com/frozax
public:
    CameraShake();
    CREATE_FUNC(CameraShake);
    virtual bool init();
    bool initWithDuration(float d, float strength_x, float strength_y );
    
    virtual void startWithTarget(Node *pTarget);
    virtual void update(float time);
    virtual void stop(void);
    virtual ActionInterval* reverse() const override{return nullptr;};
    virtual ActionInterval *clone() const override{return nullptr;};
protected:
    // Initial position of the shaked node
    float _initial_x, _initial_y;
    // Strength of the action
    float _strength_x, _strength_y;
    
    Node * m_pTarget;
};

#endif /* defined(__MyCppGame__CameraShake__) */
