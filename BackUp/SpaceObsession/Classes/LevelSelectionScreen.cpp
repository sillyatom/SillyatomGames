#include"LevelSelectionScreen.h"
#include "Game.h"
#include <math.h>

#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output
#include "../cocos2d/external/json/stringbuffer.h"

cocos2d::Scene* LevelSelectionScreen::createScene()
{
	auto scene = Scene::create();

	auto layer = LevelSelectionScreen::create();

	scene->addChild(layer);

	return scene;
}

bool LevelSelectionScreen::init()
{
	if (!Layer::init())
	{
		return false;
	}
	
    flag = false;
    _isCleaned = false;
    _lowerBounds.x = _lowerBounds.y = _upperBounds.x = _upperBounds.y = 0.0;
    _destination.x = _destination.y = 0.0;
    
    construct(GameVariables::selectedWorld);
	
    return true;
}

void LevelSelectionScreen::addMeteorShower(float dt)
{
	FlyingMeteor * flyingMeteor = FlyingMeteor::create();
	flyingMeteor->setAnchorPoint(Vec2(0.5, 0.5));
	_meteorContainer->addChild(flyingMeteor);
	flyingMeteor->startAnim();	
}

void LevelSelectionScreen::construct(int world)
{
	auto bg = Sprite::create("bg/levelselectionbg.jpg");
	addChild(bg);
#if(BOX2D_DEBUG_DRAW == 1)
	bg->setVisible(false);
#endif
	bg->setAnchorPoint(Vec2(0.0, 0.0));
	float maxRatio = std::max(Utility::getDevicePositionX(REF_GAME_WIDTH)/bg->getContentSize().width, Utility::getDevicePositionY(REF_GAME_HEIGHT)/bg->getContentSize().height);
	bg->setScale(maxRatio);

	//add bg animations here
	auto rainParticle = BgRainParticles::create();
	rainParticle->setEmissionRate(120.0);
	addChild(rainParticle);

	//add meteor container
	_meteorContainer = Sprite::create();
	addChild(_meteorContainer);

	//add meteor
	addMeteorShower(0.0);
	schedule(schedule_selector(LevelSelectionScreen::addMeteorShower), 5.0, -1, 0.0);

	loadLevelSelection(world);

	//add listener
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = CC_CALLBACK_2(LevelSelectionScreen::onTouchBegan, this);
	listener->onTouchCancelled = CC_CALLBACK_2(LevelSelectionScreen::onTouchCancelled, this);
	listener->onTouchMoved = CC_CALLBACK_2(LevelSelectionScreen::onTouchMoved, this);
	listener->onTouchEnded = CC_CALLBACK_2(LevelSelectionScreen::onTouchEnded, this);
	getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
}

void LevelSelectionScreen::BuildUI( std::vector<GameObject*> objects )
{   
	_container = Sprite::create();
	addChild(_container);
    _container->setAnchorPoint(Vec2(0.0, 0.0));
	_container->setPosition(cocos2d::Vec2::ZERO);
    
    _container1 = Sprite::create();
    addChild(_container1);
    _container1->setAnchorPoint(Vec2(0.0, 0.0));
    _container1->setPosition(cocos2d::Vec2::ZERO);
    
    _container2 = Sprite::create();
    addChild(_container2);
    _container2->setAnchorPoint(Vec2(0.0, 0.0));
    _container2->setPosition(cocos2d::Vec2::ZERO);
    
	cocos2d::Vector<MenuItem*> menuItems;
    
    std::string jsonFileName = "json/levelselection.json";
    std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
    rapidjson::Document document;
    document.Parse<0>(jsonData.c_str());
    
    const rapidjson::Value& levelObj = document["objects"];
    int length = GameHelper::Helper::getJsonArrayLength(levelObj);
    
    for (int index = 0; index < length; index++)
    {
        const rapidjson::Value& menuItemObj = levelObj[index];
        float itemX = menuItemObj["x"].GetDouble();
        float itemY = menuItemObj["y"].GetDouble();
        float itemWidth = menuItemObj["width"].GetDouble();
        float itemHeight = menuItemObj["height"].GetDouble();
        
        int itemId = menuItemObj["id"].GetInt();
        
        itemX = Utility::getDevicePositionX(itemX);
        itemY = Utility::getDevicePositionY(itemY);
        itemWidth = Utility::getDevicePositionX(itemWidth);
        itemHeight = Utility::getDevicePositionY(itemHeight);
        
        if (menuItemObj.HasMember("name"))
        {
            std::string objName = menuItemObj["name"].GetString();
            auto sprite = Sprite::createWithSpriteFrameName("stars.png");       //later send texture name from editor
            sprite->setPosition(itemX, itemY);
            sprite->setScale(itemWidth/sprite->getBoundingBox().size.width, itemHeight/sprite->getBoundingBox().size.height);
            if (itemId == 1)
            {
                _container1->addChild(sprite);
            }
            else if (itemId == 2)
            {
                _container2->addChild(sprite);
            }
        }
        else
        {
            menuItems.pushBack(createBtn(itemId, itemX, itemY, itemWidth, itemHeight));
        }
        if (itemId == 1)
        {
            _lowerBounds.x = itemX + itemWidth * 2;
            _lowerBounds.y = itemY + itemHeight * 2;
        }
        else if (itemId == length - 1)
        {
            _upperBounds.x = itemX + itemWidth * 2;
            _upperBounds.y = itemY + itemHeight * 2;
        }
    }
    
	auto menu = Menu::createWithArray(menuItems);
    menu->setAnchorPoint(Vec2(0.0, 0.0));
	menu->setPosition(Vec2::ZERO);
	_container->addChild(menu);
    
    schedule(schedule_selector(LevelSelectionScreen::onUpdate));
}

MenuItem* LevelSelectionScreen::createBtn( int index, float x, float y, float width, float height )
{
	MenuItem* okBtn = MenuItemImage::create("btns/okbtn_normal.png", "btns/okbtn_selected.png", "btns/okbtn_disabled.png",
		CC_CALLBACK_1(LevelSelectionScreen::onClick, this));
	okBtn->setTag(index);
	okBtn->setScale(width/okBtn->getContentSize().width);
	okBtn->setPosition(x, y);
	return okBtn;
}

void LevelSelectionScreen::onClick(Ref* sender)
{
	int level = dynamic_cast<Node*>(sender)->getTag();
    GameVariables::levelNum = level;
    clearAll();

    Director::getInstance()->replaceScene(Game::createScene());
}

bool LevelSelectionScreen::onTouchBegan(Touch *touch, Event *unused_event)
{
    _touchPosition = touch->getLocationInView();
    _touchPosition.y = Utility::getDevicePositionY(REF_GAME_HEIGHT) - _touchPosition.y;
	return true;
}

void LevelSelectionScreen::onTouchCancelled(Touch *touch, Event *unused_event)
{

}

void LevelSelectionScreen::validatePosition(float& x, float& y)
{
    if (x > 0.0 && x > _lowerBounds.x)
    {
        x = _lowerBounds.x;
    }
    if  (y > 0.0 && y > _lowerBounds.y)
    {
        y = _lowerBounds.y;
    }
}

void LevelSelectionScreen::onTouchMoved(Touch *touch, Event *unused_event)
{
    _touchMovePosition = touch->getLocationInView();
    _touchMovePosition.y = Utility::getDevicePositionY(REF_GAME_HEIGHT) - _touchMovePosition.y;
    
    float distance = GameHelper::Helper::Distance(Point(_touchPosition.x, _touchPosition.y), Point(_touchMovePosition.x, _touchMovePosition.y));
    int multiplier = 0;
    
    if (distance < Utility::getDevicePositionX(15.0))
    {
        multiplier = 1;
    }
    else
    {
        multiplier = 5;
    }
    
    _destination.x = _container->getPositionX() + multiplier * (_touchMovePosition.x - _touchPosition.x);
    _destination.y = _container->getPositionY() + multiplier * (_touchMovePosition.y - _touchPosition.y);
    
    validatePosition(_destination.x, _destination.y);

    if (distance < Utility::getDevicePositionX(15.0))
    {
        updatePosition(_destination.x, _destination.y);
        bounceBack();
    }
    else
    {
        scroll(1.0, _destination.x, _destination.y);
    }
    _touchPosition = _touchMovePosition;
}

void LevelSelectionScreen::onTouchEnded(Touch *touch, Event *unused_event)
{

}

void LevelSelectionScreen::updatePosition(float x, float y)
{
    float diffX = x - _container->getPositionX();
    float diffY = y - _container->getPositionY();
    
    _container->setPosition(x, y);
    _container1->setPosition(_container1->getPositionX() + diffX/4.0, _container1->getPositionY() + diffY/4.0);
    _container2->setPosition(_container2->getPositionX() + diffX/8.0, _container2->getPositionY() + diffY/8.0);
}

void LevelSelectionScreen::onUpdate(float dt)
{
    if (_container->getPositionX() != _destination.x || _container->getPositionY() != _destination.y)
    {
        float distance = GameHelper::Helper::Distance(Point(_destination.x, _destination.y), Point(_container->getPositionX(), _container->getPositionY()));
        if (distance <= Utility::getDevicePositionX(1.0))
        {
            updatePosition(_destination.x, _destination.y);
            bounceBack();
        }
        else
        {
        }
    }
}

void LevelSelectionScreen::bounceBack()
{
        Vec2 seekPos(-1.0, -1.0);
        if (_container->getPositionX() > 0.0 && _container->getPositionX() <= _lowerBounds.x)
        {
            seekPos.x = 0.0;
        }
        if (_container->getPositionY() > 0.0 && _container->getPositionY() <= _lowerBounds.y)
        {
            seekPos.y = 0.0;
        }
        if (seekPos.x != -1.0 || seekPos.x != -1.0)
        {
            _destination.x = (seekPos.x != -1.0) ? seekPos.x : _destination.x;
            _destination.y = (seekPos.y != -1.0) ? seekPos.y : _destination.y;
            
            scroll(2.5, _destination.x, _destination.y);
        }
    

}
void LevelSelectionScreen::scroll(float speed, float newX, float newY)
{
    _destination.x = newX;
    _destination.y = newY;

//    CCLOG(" Container %f %f destination %f %f ",_container->getPositionX(), _container->getPositionY(), _destination.x, _destination.y);
}

void LevelSelectionScreen::clearAll()
{
	_isCleaned = true;
    unscheduleAllSelectors();
    stopAllActions();
    _container->stopAllActions();
	getEventDispatcher()->removeAllEventListeners();
    _container->stopAllActions();
    _container->removeAllChildrenWithCleanup(true);
    _container->getParent()->removeChild(_container);
	_container = nullptr;
   	removeAllChildrenWithCleanup(true);
}

LevelSelectionScreen::~LevelSelectionScreen()
{
	if (!_isCleaned)
	{
		clearAll();
	}
}

void LevelSelectionScreen::onLoadComplete(network::HttpClient * client, network::HttpResponse * response)
{
	CCLOG(" LevelSelectionScreen File loaded");
	ParseLevelElements parser;

	//Parse level elements
	std::vector<GameObject*> objects = parser.ParseElementsFromData(response->getResponseData());

	//Build Level Objects
	BuildUI(objects);
}

void LevelSelectionScreen::loadLevelSelection( int world )
{
#if (NETWORK_ASSET_LOAD == 1)
	network::HttpRequest * request = new network::HttpRequest();
	char * baseUrl = "https://sites.google.com/site/sillyatomstudios/files/";
	std::string fileName(baseUrl);
	fileName = fileName + "levelselection";
	std::ostringstream ostr;
	ostr<<world;
	fileName = fileName + ostr.str() + ".svg";
	request->setUrl(fileName.c_str());
	request->setRequestType(network::HttpRequest::Type::GET);
	request->setResponseCallback(CC_CALLBACK_2(LevelSelectionScreen::onLoadComplete, this));
	request->setTag(fileName.c_str());
	network::HttpClient::getInstance()->send(request);
	request->release();
#else
	ParseLevelElements parser;
	//Parse level elements
	std::string fileName("svg/levelselection");
	std::ostringstream ostr;
	ostr<<world;
	fileName = fileName + ostr.str() + ".svg";
	std::vector<GameObject*> objects = parser.ParseElementsFromFile(const_cast<char *>(fileName.c_str()));
	//Build Level Objects
	BuildUI(objects);
#endif // NETWORK_ASSET_LOAD
}
