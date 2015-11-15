//
//  IceBall.h
//  MazeDev
//
//  Created by Sillyatom on 13/11/14.
//
//

#ifndef __MazeDev__IceBall__
#define __MazeDev__IceBall__

#include "cocos2d.h"
#include "Ball.h"

USING_NS_CC;

class IceBall : public Ball
{
    private:
    bool _canFreeze;
    
    public:
        CREATE_FUNC(IceBall);
        virtual bool init();
        virtual void CollidesWith(ENUM_OBJECT object, PhysicsSprite * phySprite, b2Contact * contact);
    
        void setCanFreeze(bool val) { _canFreeze = val; }
        bool getCanFreeze(){ return _canFreeze;}
};

#endif /* defined(__MazeDev__IceBall__) */
