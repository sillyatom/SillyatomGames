#include "LevelIntro.h"
#include "../Constants.h"
#include "../Helper.h"
#include "../lib/LanguageManager.h"
#include "../lib/Utility.h"

bool LevelIntro::init()
{
	if (!CSBPopup::init())
	{
		return false;
	}

	return true;
}

void LevelIntro::construct(std::string fileName)
{
    CSBPopup::construct(fileName);
    
    std::string jsonFileName = "json/levelDescription.json";
    std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
    rapidjson::Document document;
    document.Parse<0>(jsonData.c_str());
    
    const rapidjson::Value& description = document["description"];
    RAPIDJSON_ASSERT(description.IsArray());
    
    std::string info = std::string(description[GameVariables::levelNum].GetString());
    {
        Button * btn = static_cast<Button*>(_layout->getChildByName("playbtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(LevelIntro::touchCallback, this));
    }
    {
        Button * btn = static_cast<Button*>(_layout->getChildByName("menubtn"));
        btn->addTouchEventListener(CC_CALLBACK_2(LevelIntro::touchCallback, this));
    }
    {
        ui::TextBMFont * description = static_cast<ui::TextBMFont*>(Helper::seekWidgetByName(_layout, "description"));
        description->setString(info);
    }
}