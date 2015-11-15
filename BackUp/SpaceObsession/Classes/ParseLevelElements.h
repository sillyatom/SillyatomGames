//---------------------------------------------------------------------------------------------------
# ifndef _PARSE_LEVEL_ELEMENTS_
# define _PARSE_LEVEL_ELEMENTS_

//---------------------------------------------------------------------------------------------------
# include "tinyXML/tinyxml.h"
# include "cocos2d.h"

//---------------------------------------------------------------------------------------------------
USING_NS_CC;

//---------------------------------------------------------------------------------------------------
class GameObject
{
	private:

	//---------------------------------------------------------------------------------------------------
	public:
		GameObject(){x = 0.f; y = 0.f;}
		virtual ~GameObject();
		void SetType(int len, const char * val)
		{
			memset(_type, '\0', len);
			memcpy(_type, val, len);
		}
        std::string _strokeColor;
		char _type[32];
		//Vec3 _color;
		float x;
		float y;
    
    int direction;
		
	//---------------------------------------------------------------------------------------------------
};

//---------------------------------------------------------------------------------------------------
class MazeCircle : public GameObject
{
    //---------------------------------------------------------------------------------------------------
public:
    MazeCircle(){ angle = 0.f; radius = -1.0f; bulbType = 1; canRotate = false; rotatingRadius = 0.0; rotatingCenter.x = rotatingCenter.y = 0.0f;}
    float angle;
    float radius;
    int count;
    int bulbType;
    bool canRotate;
    float rotationValue;
    Point rotatingCenter;
    float rotatingRadius;
    
    //---------------------------------------------------------------------------------------------------
};
//------------------------------------------------------------------------------------------------------
class MazeRect : public MazeCircle
{

	//---------------------------------------------------------------------------------------------------
	public:
		MazeRect(){ width = 0.f; height = 0.f; canRotate = false; }
		float width;
		float height;

		//attributes for different elements
		float seconds;
    
        Point limitA;
        Point limitB;

	//---------------------------------------------------------------------------------------------------
};

//------------------------------------------------------------------------------------------------------
class MazeUIObject : public GameObject
{

	//---------------------------------------------------------------------------------------------------
public:
	MazeUIObject(){ width = 0.f; height = 0.f; }
	float width;
	float height;
    float angle;
    int zOrder;
    int tag;
    std::string text;
    int fontSize;
    
	//---------------------------------------------------------------------------------------------------
};

//---------------------------------------------------------------------------------------------------
class MazeArc : public MazeCircle
{
	//---------------------------------------------------------------------------------------------------
	public:
		MazeArc(){isFill = false; isReverse = false; limitA = new Point(); limitB = new Point();}
		virtual ~MazeArc() { if (limitA) delete limitA; limitA = nullptr; if (limitB) delete limitB; limitB = nullptr; }
		Point * limitA;
		Point * limitB;
		bool isReverse;
		bool isFill;
		float fillSeconds;

	//---------------------------------------------------------------------------------------------------
};

//-------------------------------------------------------------------------------------------------------
class ParseLevelElements
{
	//---------------------------------------------------------------------------------------------------
	private:
	std::vector<GameObject*>_objects;
	GameObject * CreateGameObject(TiXmlElement*);
	GameObject * CreateArcObject( TiXmlElement* element );
	GameObject* CreateRectObject(TiXmlElement* element, char * type = "rect" );
	GameObject* CreateDynamicRectObject(TiXmlElement* element, char * type = "rect" );
    GameObject * createRectBulb( TiXmlElement* element, char * type = "rectbulb" );

	GameObject * createCircleObject( TiXmlElement* element, char * type = "circle" );
    GameObject* CreateMovingRectObject(TiXmlElement* element, char * type = "rect" );
	const char* GetAttributeValue(TiXmlElement * node, const char * val);
	const char* GetNodeType(TiXmlElement * element);
	bool NodeValueExists(TiXmlElement * element, const char * val);
	float GetAngleFromTransform(const char * transform);
	void dump_to_stdout( TiXmlNode * pParent, unsigned int indent = 0 );
	const char * getIndent( unsigned int numIndents );
	void ParseGameObjects( TiXmlDocument* pRoot);
	void TraverseNode( TiXmlElement * pChild );
	float GetTruncatedNodeValue(TiXmlElement * element, const char * val);
	std::string GetTruncatedNodeValueAsString(TiXmlElement * element, const char * val);
	int getHex(std::string hexstr) 
	{
		int deci_val = 0;
		std::stringstream ss;
		ss<<hexstr;
		ss >> std::hex >> deci_val;
		return deci_val;
		//return (int)strtol(hexstr.c_str(), 0, 16);
	}
	//---------------------------------------------------------------------------------------------------
	public:
		ParseLevelElements();
		~ParseLevelElements();

		std::vector<GameObject*> ParseElementsFromFile(char* fileName);
		std::vector<GameObject*> ParseElementsFromData(std::vector<char>* data);
		GameObject * CreatePlayerObject( TiXmlElement* element );
		GameObject * CreateTargetObject( TiXmlElement* element );
        GameObject * CreateGameUIObject( TiXmlElement* element );
		GameObject * CreateUIObject( TiXmlElement* element );
		bool nodeTypeIs( const char* type, TiXmlElement* element );
		//---------------------------------------------------------------------------------------------------
};

//---------------------------------------------------------------------------------------------------
# endif