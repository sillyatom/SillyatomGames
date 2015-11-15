	//---------------------------------------------------------------------------------------------------
#include "ParseLevelElements.h"
#include <string.h>
#include "Constants.h"
#include "lib/Utility.h"
#include "Helper.h"

using namespace GameHelper;

GameObject::~GameObject()
{
	memset(_type, '\0', strlen(_type));
}
//---------------------------------------------------------------------------------------------------
ParseLevelElements::ParseLevelElements()
{

}

//---------------------------------------------------------------------------------------------------
ParseLevelElements::~ParseLevelElements()
{
	std::vector<GameObject*>::iterator iter = _objects.begin();
	for (; iter != _objects.end();)
	{
		GameObject * gameObject = *iter;
		delete gameObject;
		iter = _objects.erase(iter);
	}
	_objects.clear();
}

//---------------------------------------------------------------------------------------------------
// a utility function defining a very simple method to indent a line of text
const char * ParseLevelElements::getIndent( unsigned int numIndents )
{
	static const char * pINDENT = "                                      + ";
	static const unsigned int LENGTH = strlen( pINDENT );

	if ( numIndents > LENGTH ) numIndents = LENGTH;

	return &pINDENT[ LENGTH-numIndents ];
}

//---------------------------------------------------------------------------------------------------
void ParseLevelElements::dump_to_stdout( TiXmlNode * pParent, unsigned int indent)
{
	if ( !pParent ) return;

	TiXmlText *pText;
	int t = pParent->Type();
	CCLOG( "%s", getIndent( indent));

	switch ( t )
	{
	case TiXmlNode::TINYXML_DOCUMENT:
		CCLOG( "Document" );
		break;

	case TiXmlNode::TINYXML_ELEMENT:
		CCLOG( "Element \"%s\"", pParent->Value() );
		break;

	case TiXmlNode::TINYXML_COMMENT:
		CCLOG( "Comment: \"%s\"", pParent->Value());
		break;

	case TiXmlNode::TINYXML_UNKNOWN:
		CCLOG( "Unknown" );
		break;

	case TiXmlNode::TINYXML_TEXT:
		pText = pParent->ToText();
		CCLOG( "Text: [%s]", pText->Value() );
		break;

	case TiXmlNode::TINYXML_DECLARATION:
		CCLOG( "Declaration" );
		break;
	default:
		break;
	}
	CCLOG( "\n" );

	TiXmlNode * pChild;

	for ( pChild = pParent->FirstChild(); pChild != 0; pChild = pChild->NextSibling()) 
	{
		dump_to_stdout( pChild, indent+2 );
	}
}

//---------------------------------------------------------------------------------------------------
std::vector<GameObject*> ParseLevelElements::ParseElementsFromData(std::vector<char>* data)
{
	char * xmlData = new char[data->size()+1];
	memset(xmlData, '\0', data->size()+1);
	std::string * temp = new std::string();
	for (std::vector<char>::iterator iter = data->begin(); iter != data->end(); iter++)
	{
		temp->push_back(*iter);
	}

	memcpy(xmlData, temp->c_str(), temp->size());
	TiXmlDocument doc;
	doc.Parse(xmlData, 0, TIXML_ENCODING_UTF8);
	ParseGameObjects(&doc);

	return _objects;
}

std::vector<GameObject*> ParseLevelElements::ParseElementsFromFile(char* fileName)
{
	/*TiXmlDocument doc(fileName);
	bool loadSuccess = doc.LoadFile(TIXML_ENCODING_UTF8);
	assert(loadSuccess);
	CCLOG(" XML LoadSuccess %d ",loadSuccess);
	*/
	std::string path = FileUtils::getInstance()->fullPathForFilename(fileName);
	ssize_t fileSize = 0;
	unsigned char * data = FileUtils::getInstance()->getFileData(path, "r", &fileSize);
	TiXmlDocument doc;
	doc.Parse(reinterpret_cast<const char *>(data), 0, TIXML_ENCODING_UTF8);
	ParseGameObjects(&doc);
	delete data;
	data = NULL;
	return _objects;
}

//---------------------------------------------------------------------------------------------------
void ParseLevelElements::ParseGameObjects( TiXmlDocument* pRoot)
{
	assert(pRoot != NULL);

	TiXmlElement * pChild = pRoot->FirstChildElement();
	for(pChild = pRoot->FirstChildElement(); pChild != 0; pChild = pChild->NextSiblingElement())
	{
		TraverseNode(pChild);
	}
}

//---------------------------------------------------------------------------------------------------
void ParseLevelElements::TraverseNode( TiXmlElement * pRoot )
{
	TiXmlElement * pChild = pRoot;
	
	for(pChild = pChild->FirstChildElement(); pChild != 0; pChild = pChild->NextSiblingElement())
	{
		TiXmlElement * element = pChild;
		
		//for( element = element->FirstChildElement(); element != 0; element = element->NextSiblingElement())
		//{
			GameObject * obj;

			if(strcmp(element->Value(), "g") == 0)
			{
				obj = CreateGameObject(element);
				_objects.push_back(obj);
			}
		//}
	}
}

//---------------------------------------------------------------------------------------------------
GameObject * ParseLevelElements::CreateGameObject( TiXmlElement* element )
{
	GameObject * obj = NULL;
	
	if (nodeTypeIs("circle", element))
	{
		obj = createCircleObject(element);
	}
    else if (nodeTypeIs("rectbulb", element))
    {
        obj = createRectBulb(element, const_cast<char*>(std::string("rectbulb").c_str()));
    }
    else if (nodeTypeIs("bulb", element))
    {
        obj = createCircleObject(element, const_cast<char*>(std::string("bulb").c_str()));
    }
	else if (nodeTypeIs("arc", element))
	{
		obj = CreateArcObject(element);
	}
    else if (nodeTypeIs("moving box", element))
    {
        obj = CreateMovingRectObject(element, const_cast<char*>(std::string("moving box").c_str()));
    }
	else if (nodeTypeIs("dynamic box", element))
	{
		obj = CreateDynamicRectObject(element);
	}
	else if (nodeTypeIs("box", element))
	{
		obj = CreateRectObject(element, const_cast<char*>(std::string("box").c_str()));
	}
	else if (nodeTypeIs("cannon", element))
	{
		obj = CreateRectObject(element, const_cast<char*>(std::string("cannon").c_str()));
	}
	else if (nodeTypeIs("multiplier", element))
	{
		obj = createCircleObject(element, const_cast<char*>(std::string("multiplier").c_str()));
	}
	else if (nodeTypeIs("player", element))
	{
		obj = CreatePlayerObject(element);
	}
	else if ((nodeTypeIs("target", element))
		|| (nodeTypeIs("hole", element)))
	{
		obj = CreateTargetObject(element);
	}
    else if (nodeTypeIs("ui", element))
    {
        obj = CreateGameUIObject(element);
    }
	std::string objType(GetNodeType(element));
	if (objType.find("world") != std::string::npos
		|| objType.find("level") != std::string::npos)
	{
		obj = CreateUIObject(element);
	}

	return obj;
}

//---------------------------------------------------------------------------------------------------
float ParseLevelElements::GetAngleFromTransform(const char * transform)
{
	std::vector<int> pos = Helper::FindPosOf(transform, 0, ' ');
	char transform_str[32];
	Helper::Splice(transform, transform_str, pos[1], pos[2]);
	float c = atof(transform_str);
	Helper::Splice(transform, transform_str, pos[2], pos[3]);
	float d = atof(transform_str);
	float rotation = atan2(c, d);
	return Helper::ConvertRefAngleToAngleInDegrees(CC_RADIANS_TO_DEGREES(rotation));
}

//---------------------------------------------------------------------------------------------------
GameObject* ParseLevelElements::CreateMovingRectObject(TiXmlElement* element, char * type)
{
    MazeRect * obj = new MazeRect();
    
    // copy the type string
    obj->SetType(20, type);
    
    for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
    {
        if (strcmp(node->Value(), "text") == 0)
        {
            continue;
        }
        else if (strcmp(node->Value(), "circle") == 0)
        {
            const char * stroke = GetAttributeValue(node, "stroke");
            float x = atof(GetAttributeValue(node, "cx"));
            float y = atof(GetAttributeValue(node, "cy"));
            y = REF_GAME_HEIGHT - y;
            
            if (strcmp(stroke, "#00FF00") == 0)
            {
                obj->limitA.x = Utility::getDevicePositionX(x);
                obj->limitA.y = Utility::getDevicePositionY(y);
            }
            else if (strcmp(stroke, "#FF0000") == 0)
            {
                obj->limitB.x = Utility::getDevicePositionX(x);
                obj->limitB.y = Utility::getDevicePositionY(y);
            }
        }
        else
        {
            const char * transform = GetAttributeValue(node, "transform");
            obj->angle = transform ? GetAngleFromTransform(transform) : 0.f;
            obj->width = atof(GetAttributeValue(node, "width"));
            obj->height = atof(GetAttributeValue(node, "height"));
            obj->x = atof(GetAttributeValue(node, "x"));
            obj->x += obj->width / 2;
            obj->y = atof(GetAttributeValue(node, "y"));
            obj->y += obj->height / 2;
            obj->y = REF_GAME_HEIGHT - obj->y;
        }
    }
    obj->x = Utility::getDevicePositionX(obj->x);
    obj->y = Utility::getDevicePositionY(obj->y);
    obj->width = Utility::getDevicePositionX(obj->width);
    obj->height = Utility::getDevicePositionY(obj->height);
    
    return obj;
}

GameObject * ParseLevelElements::CreateDynamicRectObject( TiXmlElement* element, char * type)
{
	MazeRect * obj = new MazeRect();

	// copy the type string 
	obj->SetType(20, type);

	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}
		else if (strcmp(node->Value(), "circle") == 0)
		{
			obj->rotatingRadius = atof(GetAttributeValue(node, "r"));
			obj->rotatingCenter.x = atof(GetAttributeValue(node, "cx"));
			obj->rotatingCenter.y = atof(GetAttributeValue(node, "cy"));
			obj->rotatingCenter.y = REF_GAME_HEIGHT - obj->rotatingCenter.y;
			continue;
		}

		const char * transform = GetAttributeValue(node, "transform");
		obj->angle = transform ? GetAngleFromTransform(transform) : 0.f;
		obj->width = atof(GetAttributeValue(node, "width"));
		obj->height = atof(GetAttributeValue(node, "height"));
		obj->x = atof(GetAttributeValue(node, "x"));
		obj->x += obj->width / 2;
		obj->y = atof(GetAttributeValue(node, "y"));
		obj->y += obj->height / 2;
		obj->y = REF_GAME_HEIGHT - obj->y;
	}

	if (NodeValueExists(element, "seconds"))
	{
		float seconds = GetTruncatedNodeValue(element, "seconds");
		obj->seconds = seconds;
	}
	if (NodeValueExists(element, "direction"))
	{
		float direction = GetTruncatedNodeValue(element, "direction");
		obj->direction = direction;
	}
	if (NodeValueExists(element, "rotate"))
	{
		obj->canRotate = true;
	}

	obj->x = Utility::getDevicePositionX(obj->x);
	obj->y = Utility::getDevicePositionY(obj->y);
	obj->width = Utility::getDevicePositionX(obj->width);
	obj->height = Utility::getDevicePositionY(obj->height);
	obj->rotatingRadius = Utility::getDevicePositionY(obj->rotatingRadius);
	obj->rotatingCenter.x = Utility::getDevicePositionX(obj->rotatingCenter.x);
	obj->rotatingCenter.y = Utility::getDevicePositionY(obj->rotatingCenter.y);
	return obj;
}

//---------------------------------------------------------------------------------------------------
GameObject * ParseLevelElements::CreateRectObject( TiXmlElement* element, char * type)
{
	MazeRect * obj = new MazeRect();
	
	// copy the type string 
	obj->SetType(20, type);

	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}
		else if (strcmp(node->Value(), "circle") == 0)
		{
			obj->rotatingRadius = atof(GetAttributeValue(node, "r"));
			obj->rotatingCenter.x = atof(GetAttributeValue(node, "cx"));
			obj->rotatingCenter.y = atof(GetAttributeValue(node, "cy"));
			obj->rotatingCenter.y = REF_GAME_HEIGHT - obj->rotatingCenter.y;
			continue;
		}

		const char * transform = GetAttributeValue(node, "transform");
		obj->angle = transform ? GetAngleFromTransform(transform) : 0.f;
		obj->width = atof(GetAttributeValue(node, "width"));
		obj->height = atof(GetAttributeValue(node, "height"));
		obj->x = atof(GetAttributeValue(node, "x"));
		obj->x += obj->width / 2;
		obj->y = atof(GetAttributeValue(node, "y"));
        obj->y += obj->height / 2;
		obj->y = REF_GAME_HEIGHT - obj->y;
	}
	
	if (NodeValueExists(element, "seconds"))
	{
		float seconds = GetTruncatedNodeValue(element, "seconds");
		obj->seconds = seconds;
	}
	if (NodeValueExists(element, "direction"))
	{
		float direction = GetTruncatedNodeValue(element, "direction");
		obj->direction = direction;
	}
	if (NodeValueExists(element, "rotate"))
	{
		obj->canRotate = true;
	}
    
    obj->x = Utility::getDevicePositionX(obj->x);
    obj->y = Utility::getDevicePositionY(obj->y);
    obj->width = Utility::getDevicePositionX(obj->width);
    obj->height = Utility::getDevicePositionY(obj->height);
    obj->rotatingRadius = Utility::getDevicePositionY(obj->rotatingRadius);
    obj->rotatingCenter.x = Utility::getDevicePositionX(obj->rotatingCenter.x);
    obj->rotatingCenter.y = Utility::getDevicePositionY(obj->rotatingCenter.y);
	return obj;
}

//---------------------------------------------------------------------------------------------------
GameObject * ParseLevelElements::CreateArcObject( TiXmlElement* element )
{
	MazeArc * obj = new MazeArc();

	// copy the type string 
	obj->SetType(10, "arc");
	obj->isReverse = NodeValueExists(element, "reverse");
	obj->isFill = NodeValueExists(element, "fill");
	obj->canRotate = NodeValueExists(element, "rotate");
	if (obj->isFill)
	{
		obj->fillSeconds = GetTruncatedNodeValue(element, "fill");
	}
	if (obj->canRotate)
	{
		obj->rotationValue = GetTruncatedNodeValue(element, "rotate");
        if (obj->rotationValue == 0)
        {
            obj->rotationValue = 1;
        }
	}
	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}

		const char * stroke = GetAttributeValue(node, "stroke");
		float value = atof(GetAttributeValue(node, "r"));
		float x = atof(GetAttributeValue(node, "cx"));
		float y = atof(GetAttributeValue(node, "cy"));
		y = REF_GAME_HEIGHT - y;

		if (strcmp(stroke, "#000000") == 0)
		{
			obj->radius = value;
			obj->x = x;
			obj->y = y;
		}
		else if (strcmp(stroke, "#00FF00") == 0)
		{
			obj->limitA->x = x;
			obj->limitA->y = y;
		}
		else if (strcmp(stroke, "#FF0000") == 0)
		{
			obj->limitB->x = x;
			obj->limitB->y = y;
		}
	}
    
    obj->radius = Utility::getDevicePositionY(obj->radius);
    obj->x = Utility::getDevicePositionX(obj->x);
    obj->y = Utility::getDevicePositionY(obj->y);
    
    obj->limitA->x = Utility::getDevicePositionX(obj->limitA->x);
    obj->limitA->y = Utility::getDevicePositionY(obj->limitA->y);

    obj->limitB->x = Utility::getDevicePositionX(obj->limitB->x);
    obj->limitB->y = Utility::getDevicePositionY(obj->limitB->y);
    
    return obj;
}

//---------------------------------------------------------------------------------------------------
const char * ParseLevelElements::GetAttributeValue(TiXmlElement * element, const char * val)
{
	for (TiXmlAttribute * attribute = element->FirstAttribute(); attribute != 0; attribute = attribute->Next())
	{
		if (strcmp(attribute->Name(), val) == 0)
		{
			return (attribute->Value());
		}
	}
	
	return NULL;
}

//---------------------------------------------------------------------------------------------------
const char * ParseLevelElements::GetNodeType(TiXmlElement * element)
{
	for (TiXmlNode * node = element->FirstChild(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			return node->FirstChild()->Value();
		}
	}
	return NULL;
}

//---------------------------------------------------------------------------------------------------
bool ParseLevelElements::NodeValueExists(TiXmlElement * element, const char * val)
{
	for (TiXmlNode * node = element->FirstChild(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			if (strcmp(node->FirstChild()->Value(), val) == 0 || std::string(node->FirstChild()->Value()).find(val) != std::string::npos)
			{
				return true;
			}
		}
	}

	return false;
}

//---------------------------------------------------------------------------------------------------
GameObject * ParseLevelElements::createRectBulb( TiXmlElement* element, char * type)
{
    MazeRect * obj = new MazeRect();
    
    // copy the type string
    obj->SetType(20, type);
    
    for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
    {
        if (strcmp(node->Value(), "text") == 0)
        {
            continue;
        }
        const char * strokeColor = GetAttributeValue(node, "stroke");
        obj->_strokeColor = std::string(strokeColor);
        
        if (NodeValueExists(element, "rad"))
        {
            obj->canRotate = true;
            
            float radius = GetTruncatedNodeValue(element, "rad");
            obj->rotatingRadius = Utility::getDevicePositionY(radius/2.f);
            obj->rotationValue = 1.0f;
            
            float x = GetTruncatedNodeValue(element, "rcx");
            float y = GetTruncatedNodeValue(element, "rcy");
            y = REF_GAME_HEIGHT - y;
            obj->rotatingCenter.x = Utility::getDevicePositionX(x);
            obj->rotatingCenter.y = Utility::getDevicePositionY(y);
            
        }
        if (obj->_strokeColor == "#00FF00") //green
        {
            obj->bulbType = 6;
        }
        else if (obj->_strokeColor == "#BABABA")    //black
        {
            obj->bulbType = 8;
        }
        else if (obj->_strokeColor == "#FF0000")    //red
        {
            obj->bulbType = 7;
        }
        const char * transform = GetAttributeValue(node, "transform");
        obj->angle = transform ? GetAngleFromTransform(transform) : 0.f;

        obj->width = atof(GetAttributeValue(node, "width"));
        obj->height = atof(GetAttributeValue(node, "height"));
        obj->x = atof(GetAttributeValue(node, "x"));
        obj->x += obj->width / 2;
        obj->y = atof(GetAttributeValue(node, "y"));
        obj->y += obj->height / 2;
        obj->y = REF_GAME_HEIGHT - obj->y;
        
        obj->width = Utility::getDevicePositionX(obj->width);
        obj->height = Utility::getDevicePositionX(obj->height);
        obj->x = Utility::getDevicePositionX(obj->x);
        obj->y = Utility::getDevicePositionY(obj->y);
    }
    
    if (NodeValueExists(element, "seconds"))
    {
        float seconds = GetTruncatedNodeValue(element, "seconds");
        obj->seconds = seconds;
    }
    if (NodeValueExists(element, "direction"))
    {
        float direction = GetTruncatedNodeValue(element, "direction");
        obj->direction = direction;
    }
    if (NodeValueExists(element, "rotate"))
    {
        obj->canRotate = true;
    }
    
    return obj;
}

//---------------------------------------------------------------------------------------------------
GameObject * ParseLevelElements::createCircleObject( TiXmlElement* element, char * type)
{
	MazeCircle * obj = new MazeCircle();

	Vec3 color = Vec3(0.0, 0.0, 0.0);
	char redChannel[3];
	char blueChannel[3];
	char greenChannel[3];

	// copy the type string 
	obj->SetType(20, type);

	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}
		const char * strokeColor = GetAttributeValue(node, "stroke");
        obj->_strokeColor = std::string(strokeColor);
        
        if (NodeValueExists(element, "rad"))
        {
            obj->canRotate = true;
            
            float radius = GetTruncatedNodeValue(element, "rad");
            obj->rotatingRadius = Utility::getDevicePositionY(radius/2.f);
            obj->rotationValue = 1.0f;
            
            float x = GetTruncatedNodeValue(element, "rcx");
            float y = GetTruncatedNodeValue(element, "rcy");
            y = REF_GAME_HEIGHT - y;
            obj->rotatingCenter.x = Utility::getDevicePositionX(x);
            obj->rotatingCenter.y = Utility::getDevicePositionY(y);
            
        }
		Helper::Splice(strokeColor, redChannel, 1, 3);
		Helper::Splice(strokeColor, greenChannel, 3, 5);
		Helper::Splice(strokeColor, blueChannel, 5, 7);

		obj->radius = atof(GetAttributeValue(node, "r"));
		obj->x = atof(GetAttributeValue(node, "cx"));
		obj->y = atof(GetAttributeValue(node, "cy"));
		obj->y = REF_GAME_HEIGHT - obj->y;
        
        obj->x = Utility::getDevicePositionX(obj->x);
        obj->y = Utility::getDevicePositionY(obj->y);
        obj->radius = Utility::getDevicePositionY(obj->radius);
        
        obj->angle = CC_RADIANS_TO_DEGREES(atan2f(obj->rotatingCenter.y - obj->y, obj->rotatingCenter.x - obj->x));
        obj->angle = GameHelper::Helper::ConvertRefAngleToAngleInDegrees(obj->angle);
	}
	if (NodeValueExists(element, "count"))
	{
		float seconds = GetTruncatedNodeValue(element, "count");
		obj->count = seconds;
	}
	//obj->_color = Vec3(getHex(redChannel)/255.0, getHex(greenChannel)/255.0, getHex(blueChannel)/255.0);
    
    
    if (obj->_strokeColor == "#00FF00") //green
    {
        obj->bulbType = 1;
    }
    else if (obj->_strokeColor == "#BABABA")    //black
    {
        obj->bulbType = 2;
    }
    else if (obj->_strokeColor == "#FF0000")    //red
    {
        obj->bulbType = 3;
    }
    else if (obj->_strokeColor == "#F37C20")    //orange timer balls
    {
        obj->bulbType = 4;
    }
    else if (obj->_strokeColor == "#0000FF")    //blue ball left deducter
    {
        obj->bulbType = 5;
    }
    else
    {
        CCLOG("[ Warning : Missing File Type ]");
    }
	return obj;
}

GameObject * ParseLevelElements::CreatePlayerObject( TiXmlElement* element )
{
	MazeCircle * obj = new MazeCircle();

	// copy the type string 
	obj->SetType(10, "player");

	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}

		obj->radius = atof(GetAttributeValue(node, "r"));
		obj->x = atof(GetAttributeValue(node, "cx"));
		obj->y = atof(GetAttributeValue(node, "cy"));
		obj->y = REF_GAME_HEIGHT - obj->y;
        
        obj->x = Utility::getDevicePositionX(obj->x);
        obj->y = Utility::getDevicePositionY(obj->y);
        obj->radius = Utility::getDevicePositionY(obj->radius);
	}

	return obj;
}

GameObject * ParseLevelElements::CreateTargetObject( TiXmlElement* element )
{
	MazeCircle * obj = new MazeCircle();

	// copy the type string 
	obj->SetType(20, GetNodeType(element));

	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}

		obj->radius = atof(GetAttributeValue(node, "r"));
		obj->x = atof(GetAttributeValue(node, "cx"));
		obj->y = atof(GetAttributeValue(node, "cy"));
		obj->y = REF_GAME_HEIGHT - obj->y;
        
        obj->x = Utility::getDevicePositionX(obj->x);
        obj->y = Utility::getDevicePositionY(obj->y);
        obj->radius = Utility::getDevicePositionY(obj->radius);
	}

	return obj;
}

GameObject * ParseLevelElements::CreateGameUIObject(TiXmlElement *element)
{
    MazeUIObject * obj = new MazeUIObject();
    std::string type(GetTruncatedNodeValueAsString(element, "type"));
    obj->SetType((int)(type.size()+1), type.c_str());
    obj->zOrder = GetTruncatedNodeValue(element, "zOrder");
    obj->tag = GetTruncatedNodeValue(element, "tag");
    if (NodeValueExists(element, "fontSize"))
    {
        obj->fontSize = GetTruncatedNodeValue(element, "fontSize");
    }
    for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
    {
        if (strcmp(node->Value(), "text") == 0)
        {
            continue;
        }
        const char * transform = GetAttributeValue(node, "transform");
        obj->angle = transform ? GetAngleFromTransform(transform) : 0.f;
        obj->width = atof(GetAttributeValue(node, "width"));
        obj->height = atof(GetAttributeValue(node, "height"));
        obj->x = atof(GetAttributeValue(node, "x"));
        obj->x += obj->width / 2;
        obj->y = atof(GetAttributeValue(node, "y"));
        obj->y += obj->height / 2;
        obj->y = REF_GAME_HEIGHT - obj->y;
        
        if (strcmp(type.c_str(), "txt") == 0 || strcmp(type.c_str(), "dyntxt") == 0)
        {
            obj->text = GetTruncatedNodeValueAsString(element, "val");
        }
        
        obj->x = Utility::getDevicePositionX(obj->x);
        obj->y = Utility::getDevicePositionY(obj->y);
        
        obj->width = Utility::getDevicePositionX(obj->width);
        obj->height = Utility::getDevicePositionY(obj->height);
        
        obj->fontSize = Utility::getDevicePositionY(obj->fontSize);
    }
    return obj;
}

GameObject * ParseLevelElements::CreateUIObject( TiXmlElement* element )
{
	MazeUIObject * obj = new MazeUIObject();

	obj->SetType(20, GetNodeType(element));

	for (TiXmlElement * node = element->FirstChildElement(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			continue;
		}

		obj->x = atof(GetAttributeValue(node, "x"));
		obj->y = atof(GetAttributeValue(node, "y"));
		obj->y = REF_GAME_HEIGHT - obj->y;
		obj->width = atof(GetAttributeValue(node, "width"));
		obj->height = atof(GetAttributeValue(node, "height"));
		obj->y -= obj->height/2;
		obj->x += obj->width/2;

		obj->x = Utility::getDevicePositionX(obj->x);
		obj->y = Utility::getDevicePositionY(obj->y);
        
        obj->width = Utility::getDevicePositionX(obj->width);
        obj->height = Utility::getDevicePositionY(obj->height);
	}

	return obj;
}

bool ParseLevelElements::nodeTypeIs( const char* type,  TiXmlElement* element)
{
	for (TiXmlNode * node = element->FirstChild(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			if (strcmp(node->FirstChild()->Value(), type) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

std::string ParseLevelElements::GetTruncatedNodeValueAsString(TiXmlElement * element, const char * val)
{
	for (TiXmlNode * node = element->FirstChild(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			if (strcmp(node->FirstChild()->Value(), val) == 0 || std::string(node->FirstChild()->Value()).find(val) != std::string::npos)
			{
				std::string attr(node->FirstChild()->Value());
				attr = attr.substr(attr.find(":")+1 , attr.length() - 1);
				return std::string(attr.c_str());
			}
		}
	}
	return "";
}

float ParseLevelElements::GetTruncatedNodeValue(TiXmlElement * element, const char * val)
{
	for (TiXmlNode * node = element->FirstChild(); node != NULL; node = node->NextSiblingElement())
	{
		if (strcmp(node->Value(), "text") == 0)
		{
			if (strcmp(node->FirstChild()->Value(), val) == 0 || std::string(node->FirstChild()->Value()).find(val) != std::string::npos)
			{
				std::string attr(node->FirstChild()->Value());
				attr = attr.substr(attr.find(":")+1 , attr.length() - 1);
				return atof(attr.c_str());
			}
		}
	}
	return 0.f;
}

//---------------------------------------------------------------------------------------------------
