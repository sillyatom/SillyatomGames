//
//  Popup.h
//  MazeDev
//
//  Created by Sillyatom on 28/10/14.
//
//

#ifndef __MazeDev__Popup__
#define __MazeDev__Popup__
#include "cocos2d.h"
#include "ParseLevelElements.h"

#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output

USING_NS_CC;

class Popup : public cocos2d::Layer
{
    public:
    CREATE_FUNC(Popup);
    ~Popup();
    
    virtual bool init();
    
    virtual void construct(std::string fileName);
    void buildUI( std::vector<GameObject*> objects );
    void updateDynTxtField(char * name, char * val);
    
    protected:
    Size _screenSize;
    Vec2 _screenOrigin;
    
    std::string _fileName;
    std::vector<MazeUIObject*> _dynamicTxt;
    
    void createTextField(MazeUIObject * obj);
    void createDynTextField(MazeUIObject * obj, char* value);
    void createImage(MazeUIObject * obj);
    MenuItemImage * createBtn(MazeUIObject * obj);
    
    void onClickCallback(Ref * pSender);
    rapidjson::Document _config;
};

#endif /* defined(__MazeDev__Popup__) */
