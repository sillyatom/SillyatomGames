//
//  ConfigFile.cpp
//  VoidShot
//
//  Created by Sillyatom on 25/04/15.
//
//

#include "ConfigFile.h"

ConfigFile* ConfigFile::getInstance()
{
    static ConfigFile instance;
    return &instance;
}

void ConfigFile::loadConfigFile()
{
    if (!_isLoaded)
    {
        std::string jsonFileName = "json/settings.json";
        std::string jsonData = GameHelper::Helper::ExtractJsonData(const_cast<char*>(jsonFileName.c_str()));
        settings.Parse<0>(jsonData.c_str());
        
        _isLoaded = true;
    }
}

void ConfigFile::unloadConfigFile()
{
    if (_isLoaded)
    {
        settings.RemoveMember("LEVEL_ORDER");
        settings.RemoveMember("TimeLeft");
        settings.RemoveMember("Marker");
        settings.RemoveMember("LightIntensity");
        settings.RemoveMember("PlayerLightIntensity");
        settings.RemoveMember("bulbAsset");
        settings.RemoveMember("ballAsset");
        settings.RemoveMember("MAX_LIGHTS");
    }

    _isLoaded = false;
}