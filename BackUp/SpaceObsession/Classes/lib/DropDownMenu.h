//
//  DropDownMenu.h
//  MazeDev
//
//  Created by Sillyatom on 13/11/14.
//
//

#ifndef __MazeDev__DropDownMenu__
#define __MazeDev__DropDownMenu__

#include "cocos2d.h"

USING_NS_CC;

class DropDownMenu : public Layer
{
    private:
    cocos2d::Vector<MenuItem*> _menuItems;
    int _selectedTag;
    bool _isDropped;
    Menu * _menu;
    
    void onClickCallback(Ref* pSender);
    
    public:
    CREATE_FUNC(DropDownMenu);
    virtual bool init();
    void addItem(std::string fileName);
    void construct();
    
    int getSelectedTag(){ return _selectedTag; }
    
    void setIsDropped(bool val){ _isDropped = val; }
    bool getIsDropped(){ return _isDropped; }
    
    void dropMenu(int tag);
    void reAlign(int tag);
};

#endif /* defined(__MazeDev__DropDownMenu__) */
