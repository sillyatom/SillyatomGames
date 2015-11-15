#ifndef _HELPER_H_
#define _HELPER_H_

//---------------------------------------------------------------------------------------------------------------------------
#include "cocos2d.h"
#include "Box2D/Box2D.h"
#include "../cocos2d/external/json/document.h" // rapidjsonís DOM-style API
#include "../cocos2d/external/json/prettywriter.h" // for stringify JSON
#include "../cocos2d/external/json/filestream.h" // wrapper of C stream for prettywriter as output
//---------------------------------------------------------------------------------------------------------------------------
USING_NS_CC;

//---------------------------------------------------------------------------------------------------------------------------
namespace GameHelper
{
    class Helper
    {
        //---------------------------------------------------------------------------------------------------------------------------
    public:
        //---------------------------------------------------------------------------------------------------------------------------
        static float Magnitude(Point vector);
        static float Distance(Point vectorA, Point vectorB);
        static float Distance(b2Vec2 vectorA, b2Vec2 vectorB);
        static Vec2 UnitVector(Vec2 vectorA, Vec2 vectorB);
        static int ConvertRefAngleToAngleInDegrees(float refAngle);
        static void Splice(const char * src, char * dst, int startPos, int endPos);
        static std::vector<int> FindPosOf(const char *src, int startPos, char val);	
        static const char * SubStr(const char * src, char a, char b);
        static void StrAddSuffix(char * dst, char * src, const char * suffix, int size = 128);
        static std::string ExtractJsonData(char * fileName);
        static int getJsonArrayLength(const rapidjson::Value& value);

        //---------------------------------------------------------------------------------------------------------------------------
    };
}
//---------------------------------------------------------------------------------------------------------------------------
#endif