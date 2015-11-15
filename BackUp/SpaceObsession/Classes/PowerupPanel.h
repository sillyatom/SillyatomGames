//
//  PowerupPanel.h
//  MazeDev
//
//  Created by Sillyatom on 20/11/14.
//
//

#ifndef __MazeDev__PowerupPanel__
#define __MazeDev__PowerupPanel__

#include "lib/CSBPopup.h"
#include "PickManager.h"

class PowerupPanel : public CSBPopup
{
    int _selectedIndex;
    
public:
    CREATE_FUNC(PowerupPanel);
    virtual bool init();
    virtual void construct(std::string fileName);
    virtual void touchCallback(Ref * node, Widget::TouchEventType event);

	int getSelectedIndex(){ return _selectedIndex; }

	void updateFromPicks();
	void updateCountForIndex(int index, int count);
	std::string getPowerupFromSelectedIndex();
	void resetSelectedIndex(){ _selectedIndex = -1; }

	void EnablePanel(bool val);
};
#endif /* defined(__MazeDev__PowerupPanel__) */
