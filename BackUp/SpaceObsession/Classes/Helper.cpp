#include "Helper.h"

//---------------------------------------------------------------------------------------------------------------------------
float GameHelper::Helper::Magnitude(Point vector)
{
	return sqrt( pow(vector.x, 2) + pow(vector.y, 2));
}

//---------------------------------------------------------------------------------------------------------------------------
float GameHelper::Helper::Distance(Point vectorA, Point vectorB)
{
	return sqrt( pow(vectorB.x - vectorA.x, 2) + pow(vectorB.y - vectorA.y, 2));
}

//float GameHelper::Helper::Distance(Vec2 vectorA, Vec2 vectorB)
//{
//    return sqrt( pow(vectorB.x - vectorA.x, 2) + pow(vectorB.y - vectorA.y, 2));
//}

float GameHelper::Helper::Distance(b2Vec2 vectorA, b2Vec2 vectorB)
{
    return sqrt( pow(vectorB.x - vectorA.x, 2) + pow(vectorB.y - vectorA.y, 2));
}
//---------------------------------------------------------------------------------------------------------------------------
Vec2 GameHelper::Helper::UnitVector(Vec2 vectorA, Vec2 vectorB)
{
	Vec2 vec = Vec2(vectorB.x - vectorA.x, vectorB.y - vectorA.y);
	float magnitude = Magnitude(vec);
    if (magnitude == 0.0)
    {
        return Vec2();
    }
	return Vec2(vec.x / magnitude, vec.y / magnitude);
}

//---------------------------------------------------------------------------------------------------------------------------
int GameHelper::Helper::ConvertRefAngleToAngleInDegrees(float refAngle)
{
	int angle = refAngle + 360;
	return angle % 360;
}

//---------------------------------------------------------------------------------------------------------------------------
void GameHelper::Helper::Splice(const char * src, char * dst, int startPos, int endPos)
{
	int length = endPos - startPos;
	src = src + startPos;
	memset(dst, '\0', length+1);
	memcpy(dst, src, length);
}

//---------------------------------------------------------------------------------------------------------------------------
std::vector<int> GameHelper::Helper::FindPosOf(const char *src, int startPos, char val)
{
	std::vector<int> vector;
	std::string str(src + startPos);
	for (unsigned int index = startPos; index < str.size(); index++)
	{
		if (str[index] == val)
		{
			vector.push_back(index);
		}
	}
	return vector;
}

//---------------------------------------------------------------------------------------------------------------------------
const char * GameHelper::Helper::SubStr(const char * src, char a, char b)
{
	std::string str(src);
	return str.substr(a, b).c_str();
}

//---------------------------------------------------------------------------------------------------------------------------
void GameHelper::Helper::StrAddSuffix(char * dst, char * src, const char * suffix, int size /* = 128 */)
{
	memset(dst, '\0', size);
	memcpy(dst, src, strlen(src));
	strcat(dst, suffix);
}

//---------------------------------------------------------------------------------------------------------------------------
std::string GameHelper::Helper::ExtractJsonData(char * fileName)
{
    std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
    return FileUtils::getInstance()->getStringFromFile(path);
}

//---------------------------------------------------------------------------------------------------------------------------
int GameHelper::Helper::getJsonArrayLength(const rapidjson::Value& value)
{
    return (int)value.Size();
}