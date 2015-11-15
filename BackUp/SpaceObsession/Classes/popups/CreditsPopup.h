//
//  CreditsPopup.h
//  VoidShot
//
//  Created by Sillyatom on 29/04/15.
//
//

#ifndef __VoidShot__CreditsPopup__
#define __VoidShot__CreditsPopup__

#include "../lib/CSBPopup.h"
#include "../particles/FirePlistParticle.h"

USING_NS_CC;
using namespace ui;

class CreditsPopup : public CSBPopup
{
private:
    FirePlistParticle * _clearParticle;
    Widget * _scrollView;
    
    void menuCallback(Ref * pSender);

public:
    CREATE_FUNC(CreditsPopup);
    virtual void construct(std::string fileName);
    void update(float dt);
    void removePopup();
};

#endif /* defined(__VoidShot__CreditsPopup__) */
