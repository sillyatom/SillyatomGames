#ifndef _GAME_H_
#define _GAME_H_

#include "cocos2d.h"
#include "cocosGUI.h"

#include "../GameElements/Card.h"
#include "../GameElements/Player.h"
#include "../GameElements/Dealer.h"

#include "cocostudio/CocoStudio.h"

USING_NS_CC;

class MainGame : public cocos2d::Layer
{
private:
	std::vector<Card*> _cards;
	std::vector<Player*> _players;

	Dealer * _dealer;

	void createPlayers();
	void testFn();
public:
	CREATE_FUNC(MainGame);
	static Scene * createScene();
	virtual bool init();
};

#endif