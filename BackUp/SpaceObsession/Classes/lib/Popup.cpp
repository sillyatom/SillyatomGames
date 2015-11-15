//
//  Popup.cpp
//  MazeDev
//
//  Created by Sillyatom on 28/10/14.
//
//

#include "Popup.h"
#include "Constants.h"
#include "../Helper.h"

bool Popup::init()
{
    if (!Layer::init())
    {
        return false;
    }
    
    return true;
}

Popup::~Popup()
{
    removeAllChildren();
    for (std::vector<MazeUIObject*>::iterator iter = _dynamicTxt.begin(); iter != _dynamicTxt.end();)
    {
        MazeUIObject * obj = (MazeUIObject*)(*iter);
        delete obj;
        iter = _dynamicTxt.erase(iter);
    }
}

void Popup::construct(std::string fileName)
{
    _fileName = std::string(fileName);
    _fileName = fileName.substr(0, fileName.find_last_of("."));
    
    _screenSize = Director::getInstance()->getVisibleSize();
    _screenOrigin = Director::getInstance()->getVisibleOrigin();
    
    ParseLevelElements parser;
    
    //Parse level elements
    std::vector<GameObject*> objects = parser.ParseElementsFromFile(const_cast<char*>(fileName.c_str()));
    
    //settings data
    std::string configFileName = "json/settings.json";
    std::string jsonData = std::string(GameHelper::Helper::ExtractJsonData(const_cast<char*>(configFileName.c_str())));
    
    _config.Parse<0>(jsonData.c_str());
    
    //Build Level Objects
    buildUI(objects);
    
    jsonData.clear();
    
}

void Popup::onClickCallback(Ref *pSender)
{
    int tag = dynamic_cast<Node*>(pSender)->getTag();
    ClickEvent event(ClickEvent::CLICK);
    event.setUserData(this);
    event.tag = tag;
    _eventDispatcher->dispatchEvent(&event);
}

void Popup::updateDynTxtField(char *name, char *val)
{
    for (std::vector<MazeUIObject*>::iterator iter = _dynamicTxt.begin(); iter != _dynamicTxt.end(); iter++)
    {
        MazeUIObject * obj = (MazeUIObject*)(*iter);
        if (strcmp(name, obj->text.c_str()) == 0)
        {
            createDynTextField(*iter, val);
            break;
        }
    }
}

void Popup::buildUI(std::vector<GameObject *> objects)
{
    cocos2d::Vector<MenuItem*> items;
    
    for (std::vector<GameObject*>::iterator iter = objects.begin(); iter != objects.end(); iter++)
    {
        MazeUIObject * obj = (MazeUIObject*)(*iter);
        if (strcmp(obj->_type, "img") == 0)
        {
            createImage(obj);
        }
        else if (strcmp(obj->_type, "btn") == 0)
        {
            items.pushBack(createBtn(obj));
        }
        else if (strcmp(obj->_type, "txt") == 0)
        {
            createTextField(obj);
        }
        else if (strcmp(obj->_type, "dyntxt") == 0)
        {
            MazeUIObject * dynTxt = new MazeUIObject();
            dynTxt->x = obj->x;
            dynTxt->y = obj->y;
            dynTxt->width = obj->width;
            dynTxt->height = obj->height;
            dynTxt->zOrder = obj->zOrder;
            dynTxt->tag = obj->tag;
            dynTxt->text = std::string(obj->text);
            dynTxt->fontSize = obj->fontSize;
            
            _dynamicTxt.push_back(dynTxt);
        }
    }
    
    //create menu if btns exist
    if (items.size() > 0)
    {
        auto menu = Menu::createWithArray(items);
        menu->setPosition(Vec2::ZERO);
        addChild(menu);
    }
}

MenuItemImage * Popup::createBtn(MazeUIObject *obj)
{
    auto okBtn = MenuItemImage::create("btns/okbtn_normal.png", "btns/okbtn_selected.png", "btns/okbtn_disabled.png",
                                       CC_CALLBACK_1(Popup::onClickCallback, this));
    okBtn->setAnchorPoint(Vec2(0.5, 0.5));
    
    float calcWidth = (obj->width);
    float calcHeight = (obj->height);
    okBtn->setScaleX(calcWidth/okBtn->getContentSize().width);
    okBtn->setScaleY(calcHeight/okBtn->getContentSize().height);
    okBtn->setPosition((obj->x), (obj->y));
    okBtn->setTag(obj->tag);
    return okBtn;
}

void Popup::createTextField(MazeUIObject * obj)
{
    auto txtField = Label::createWithTTF(obj->text.c_str(),fontFileName.c_str(), obj->fontSize, Size(Vec2(obj->width, obj->height)));
    txtField->setHorizontalAlignment(TextHAlignment::CENTER);
    txtField->setVerticalAlignment(TextVAlignment::TOP);
    txtField->setAnchorPoint(Vec2(0.5, 0.5));
    txtField->setColor(Color3B(0.0, 0.0, 0.0));
    txtField->setPosition(obj->x, obj->y);
    addChild(txtField);
}

void Popup::createDynTextField(MazeUIObject * obj, char * val)
{
    auto txtField = Label::createWithTTF(val, fontFileName.c_str(), obj->fontSize, Size(Vec2(obj->width, obj->height)));
    txtField->setHorizontalAlignment(TextHAlignment::CENTER);
    txtField->setVerticalAlignment(TextVAlignment::TOP);

    txtField->setAnchorPoint(Vec2(0.5, 0.5));
    txtField->setColor(Color3B(0.0, 0.0, 0.0));
    txtField->setPosition((obj->x), (obj->y));
    addChild(txtField);
}

void Popup::createImage(MazeUIObject *obj)
{
    const char * fileName = _config["Popup"][_fileName.c_str()]["zOrder"][obj->zOrder].GetString();
    Sprite * bg = Sprite::create(fileName);
    bg->setAnchorPoint(Vec2(0.5, 0.5));
    
    float calcWidth = (obj->width);
    float calcHeight = (obj->height);
    bg->setScaleX(calcWidth/bg->getContentSize().width);
    bg->setScaleY(calcHeight/bg->getContentSize().height);
    bg->setPosition((obj->x), (obj->y));
    addChild(bg);
}