#ifndef _LEVEL_SELECTION_SCREEN_H_
#define _LEVEL_SELECTION_SCREEN_H_

#include "cocos2d.h"
#include "Constants.h"
#include "ParseLevelElements.h"
#include "network/HttpClient.h"

USING_NS_CC;

class LevelSelectionScreen : public cocos2d::Layer
{
    bool flag;
	void onClick(Ref* sender);
	cocos2d::Vec2 _touchPosition;
    cocos2d::Vec2 _touchMovePosition;

    Sprite * _container;
    Sprite * _container1;
    Sprite * _container2;
    
    bool _isCleaned;
    
    Vec2 _lowerBounds;
    Vec2 _upperBounds;
    Vec2 _destination;
    
	Sprite * _meteorContainer;
	void addMeteorShower(float dt);

    void clearAll();
    void bounceBack();
    void validatePosition(float& x, float& y);
    
    void scroll(float speed, float newX, float newY);
    void loadLevelSelection( int world );
    void onLoadComplete(network::HttpClient * client, network::HttpResponse * response);
    
    void construct(int world);
    void BuildUI( std::vector<GameObject*> objects );
    MenuItem* createBtn( int index, float x, float y, float width, float height );
    
    void updatePosition(float x, float y);
    void onUpdate(float dt);
    
public:
	static cocos2d::Scene* createScene();
	CREATE_FUNC(LevelSelectionScreen);
	~LevelSelectionScreen();

    virtual bool init();

	virtual bool onTouchBegan(Touch *touch, Event *unused_event);
	virtual void onTouchCancelled(Touch *touch, Event *unused_event);
	virtual void onTouchMoved(Touch *touch, Event *unused_event);
	virtual void onTouchEnded(Touch *touch, Event *unused_event);
};
#endif