//
//  ConfigFile.h
//  VoidShot
//
//  Created by Sillyatom on 25/04/15.
//
//

#ifndef __VoidShot__ConfigFile__
#define __VoidShot__ConfigFile__

#include <stdio.h>
#include "../Helper.h";
#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output
#include "../cocos2d/external/json/stringbuffer.h"

using namespace GameHelper;

class ConfigFile
{
private:
    bool _isLoaded;
public:
    ConfigFile():_isLoaded(false){};
    static ConfigFile* getInstance();
    rapidjson::Document settings;
    void loadConfigFile();
    void unloadConfigFile();
};
#endif /* defined(__VoidShot__ConfigFile__) */
