#ifndef _GAME_H_
#define _GAME_H_

#include "../GameElements/Card.h"
#include "../GameElements/Player.h"
#include "../GameElements/Dealer.h"
#include "../Ext/ExtLayer.h"
#include "../Handlers/CardSelectionHandler.h"
#include "../Network/Network.h"

USING_NS_CC;

class MainGame : public ExtLayer
{
private:
    int numPlayers;
    
    CardSelectionHandler * _cardSelectionHandler;
    
    Node * _rootNode;
    Dealer * _dealer;
    
    std::vector<Card*> _cards;
	std::vector<Player*> _players;

    void startGameCountDownTimer();
    void createPlayers();
    void createDealer();
    void playDistributeCards();
    void distributeCardsData();
    void hideWidgets();
    void updateCardConfigFromCSB();
    void updateCardsData(rapidjson::Document &data);
    
protected:
    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);

    virtual void onReceiveNetworkData(int type, rapidjson::Document & data);
public:
	CREATE_FUNC(MainGame);
	static Scene * createScene();
	virtual bool init();
};

#endif