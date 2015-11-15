//
//  LanguageManager.h
//  MyCppGame
//
//  Created by Sillyatom on 03/02/15.
//
//

#ifndef __MyCppGame__LanguageManager__
#define __MyCppGame__LanguageManager__

#include <string>
using std::string;

#include "cocos2d.h"
USING_NS_CC;

#include "../../cocos2d/external/json/document.h"
#include "../../cocos2d/external/json/rapidjson.h"

using namespace rapidjson; // library that we use for json parsing

class LanguageManager
{
    Document document; // current document with language data
    LanguageManager(); // constructor is private
    static LanguageManager* _instance;
public:
    static LanguageManager* getInstance();
    string getStringForKey(string key);
    static string getString(string key);
};
#endif /* defined(__MyCppGame__LanguageManager__) */
