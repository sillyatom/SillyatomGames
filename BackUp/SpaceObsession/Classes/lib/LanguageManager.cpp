//
//  LanguageManager.cpp
//  MyCppGame
//
//  Created by Sillyatom on 03/02/15.
//
//

#include "LanguageManager.h"

LanguageManager* LanguageManager::_instance = 0;

LanguageManager::LanguageManager()
{
    string fileName;
    // detect current language
    switch(CCApplication::getInstance()->getCurrentLanguage())
//    switch(LanguageType::JAPANESE)
    {
        case LanguageType::ENGLISH:
            fileName = "json/language/en.json";
            break;
        case LanguageType::RUSSIAN:
            fileName = "json/language/ru.json";
            break;
        case  LanguageType::CHINESE:
            fileName = "json/language/cn.json";
            break;
        case  LanguageType::FRENCH:
            fileName = "json/language/fr.json";
            break;
        case  LanguageType::ITALIAN:
            fileName = "json/language/it.json";
            break;
        case  LanguageType::GERMAN:
            fileName = "json/language/ge.json";
            break;
        case  LanguageType::SPANISH:
            fileName = "json/language/sp.json";
            break;
        case LanguageType:: DUTCH:
            fileName = "json/language/du.json";
            break;
        case  LanguageType::KOREAN:
            fileName = "json/language/ko.json";
            break;
        case  LanguageType::JAPANESE:
            fileName = "json/language/jp.json";
            break;
        case  LanguageType::HUNGARIAN:
            fileName = "json/language/hu.json";
            break;
        case  LanguageType::PORTUGUESE:
            fileName = "json/language/pt.json";
            break;
        case  LanguageType::ARABIC:
            fileName = "json/language/ar.json";
            break;
        case  LanguageType::NORWEGIAN:
            fileName = "json/language/nw.json";
            break;
        case  LanguageType::POLISH:
            fileName = "json/language/po.json";
            break;
        default:
            CCLOG("Unknown language. Use english");
            fileName = "json/language/en.json";
            break;
    };
    
    // below we open, read and parse language data file with rapidjson library
    string clearContent = FileUtils::getInstance()->getStringFromFile(fileName);
    
    document.Parse<0>(clearContent.c_str());
    if(document.HasParseError())
    {
        CCLOG("Language file parsing error!");
        return;
    }
}

LanguageManager* LanguageManager::getInstance()
{
    if(!_instance)
        _instance = new LanguageManager();
    return _instance;
}

string LanguageManager::getStringForKey(string key)
{
    /* Better Approach
     -------------------------------
     
     std::string ret;
     std::string ss;
     int n, size=100;
     bool b=false;
     va_list marker;
     
     std::string fmt = document[key.c_str()].GetString();
     
     while (!b)
     {
     ss.resize(size);
     va_start(marker, key);
     n = vsnprintf((char*)ss.c_str(), size, fmt.c_str(), marker);
     va_end(marker);
     if ((n>0) && ((b=(n<size))==true)) ss.resize(n); else size*=2;
     }
     ret += ss;
     
     return ret;
     */
    return document[key.c_str()].GetString();
}

string  LanguageManager::getString(string key)
{
    return getInstance()->getStringForKey(key);
}