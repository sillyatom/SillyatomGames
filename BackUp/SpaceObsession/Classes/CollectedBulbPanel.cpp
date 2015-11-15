//
//  CollectedBulbPanel.cpp
//  MazeDev
//
//  Created by Sillyatom on 07/12/14.
//
//

#include "CollectedBulbPanel.h"
#include "Constants.h"
#include "lib/Utility.h"
#include "Helper.h"

bool CollectedBulbPanel::init()
{
    if (!CSBPopup::init())
    {
        return false;
    }

	//_totalStoneCount = 0;
	_totalGreenCount = 0;
	//_totalDeadCount = 0;

    return true;
}

void CollectedBulbPanel::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    setContentSize(cocos2d::Size(_layout->getContentSize().width,_layout->getContentSize().height));
    _layout->cocos2d::Node::setPosition(0.0, 0.0);
    Vec2 vOrigin = Director::getInstance()->getOpenGLView()->getVisibleOrigin();
    Size vSize = Director::getInstance()->getOpenGLView()->getVisibleSize();
//    setPosition(Utility::getDevicePositionX(COLLECTED_BULB_PANEL_POS.x), vOrigin.y + vSize.height - _layout->getContentSize().height);
    setPosition(vOrigin.x + Utility::getDevicePositionX(COLLECTED_BULB_PANEL_POS.x) + _layout->getContentSize().width/2, vOrigin.y + vSize.height - _layout->getContentSize().height/2);
    
    Widget * greenBulb = Helper::seekWidgetByName(_layout, "greenbulb");
    //Widget * deadBulb = Helper::seekWidgetByName(_layout, "deadbulb"); deadBulb->setVisible(false);
    Widget * stoneBulb = Helper::seekWidgetByName(_layout, "stonebulb"); stoneBulb->setVisible(false);
    
    _greenBulbCount = static_cast<TextField*>(Helper::seekWidgetByName(greenBulb, "collectedcount"));
    //_deadBulbCount = static_cast<TextField*>(Helper::seekWidgetByName(deadBulb, "collectedcount"));
    //_stoneBulbCount = static_cast<TextField*>(Helper::seekWidgetByName(stoneBulb, "collectedcount"));
    
    _greenBulbPosition = _layout->convertToWorldSpace(greenBulb->getPosition());
    //_stoneBulbPosition = convertToWorldSpace(stoneBulb->getPosition());
	//_deadBulbPosition = convertToWorldSpace(deadBulb->getPosition());
    
	std::ostringstream jsonFileName;
	jsonFileName << "levels/level"<<GameVariables::levelNum<<".json";
	std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.str().c_str()));
	rapidjson::Document document;
	document.Parse<0>(jsonData.c_str());
	const rapidjson::Value& collectCount = document["collectionCount"];
	RAPIDJSON_ASSERT(collectCount.IsArray());

    int greenCount = collectCount[rapidjson::SizeType(0)].GetInt() + collectCount[rapidjson::SizeType(1)].GetInt();
    _greenCount = _totalGreenCount = greenCount;
    updateGreenCount(0);
    greenBulb->setVisible(greenCount);  
    
    //int stoneCount = collectCount[rapidjson::SizeType(1)].GetInt();
    //_stoneCount = _totalStoneCount = stoneCount;
    //updateStoneCount(0);
    //stoneBulb->setVisible(stoneCount);
    
	//int deadCount = collectCount[rapidjson::SizeType(2)].GetInt();
	//_deadCount = _totalDeadCount = deadCount;
	//updateDeadCount(0);
	//deadBulb->setVisible(false);
}

void CollectedBulbPanel::updateStoneCount(int count)
{
	updateGreenCount(count);
    /*if (_stoneCount)
    {
        _stoneCount -= count;
        std::ostringstream oss;
        oss<<_totalStoneCount - _stoneCount<<"/"<<_totalStoneCount;
        _stoneBulbCount->setText(oss.str());
    }*/
}

void CollectedBulbPanel::updateGreenCount(int count)
{
    if (_greenCount)
    {
        _greenCount -= count;
        std::ostringstream oss;
        oss<<_totalGreenCount - _greenCount<<"/"<<_totalGreenCount;
        _greenBulbCount->setText(oss.str());
    }
}

/*void CollectedBulbPanel::updateDeadCount(int count)
{
    if (_deadCount)
    {
        _deadCount -= count;
        std::ostringstream oss;
        oss<<_totalDeadCount - _deadCount<<"/"<<_totalDeadCount;
        _deadBulbCount->setText(oss.str());
    }
}
*/