#include "WorldSelection.h"
#include "Constants.h"
#include "lib/Utility.h"
# include "LevelSelectionScreen.h"

Scene * WorldSelectionScreen::createScene()
{
	auto * scene = Scene::create();
	auto * layer = WorldSelectionScreen::create();
	scene->addChild(layer);
	return scene;
}

void WorldSelectionScreen::construct(CCCallFunc * selectedCallback)
{
	selectedCallbackFn = selectedCallback;
	selectedCallbackFn->retain();
}

bool WorldSelectionScreen::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	ParseLevelElements parser;

	//Parse level elements
    std::string fileName = "svg/worldselection.svg";
	std::vector<GameObject*> objects = parser.ParseElementsFromFile(const_cast<char*>(fileName.c_str()));

	//Build Level Objects
	BuildUI(objects);

	return true;
}

void WorldSelectionScreen::onClickCallback(Ref* sender)
{
	//runAction(selectedCallbackFn);
	int worldNum = dynamic_cast<Node*>(sender)->getTag();
	switch (worldNum)
	{
		default:
			createWorld(worldNum);
			break;
	}
}

void WorldSelectionScreen::createWorld(int world)
{
	GameVariables::selectedWorld = world;
	auto scene = LevelSelectionScreen::createScene();
	Director::getInstance()->replaceScene(scene);
}

void WorldSelectionScreen::BuildUI( std::vector<GameObject*> objects )
{
	cocos2d::Vector<MenuItem*> menuItems;
	for (std::vector<GameObject*>::iterator iter = objects.begin(); iter != objects.end(); ++iter)
	{
		std::string type((*iter)->_type);
		int pos = type.find("world");
		type = type.substr(pos+5, type.length()-1);
		const char * index = type.c_str();
		MazeUIObject * obj = (MazeUIObject*)(*iter);
		menuItems.pushBack(createBtn(int(atof(index)), obj->x, obj->y, obj->width, obj->height));
	}

	auto menu = Menu::createWithArray(menuItems);
	menu->setPosition(Vec2::ZERO);
	addChild(menu);
}

MenuItem* WorldSelectionScreen::createBtn( int index, float x, float y, float width, float height )
{
	MenuItem* okBtn = MenuItemImage::create("btns/okbtn_normal.png", "btns/okbtn_selected.png", "btns/okbtn_disabled.png",
		CC_CALLBACK_1(WorldSelectionScreen::onClickCallback, this));
    if (index != 1)
    {
        okBtn->setEnabled(false);
    }
	okBtn->setTag(index);
	okBtn->setPosition(x, y);
	return okBtn;
}
