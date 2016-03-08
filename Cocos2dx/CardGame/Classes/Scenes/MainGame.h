#ifndef _GAME_H_
#define _GAME_H_

#include "../GameElements/Card.h"
#include "../GameElements/Player.h"
#include "../GameElements/Dealer.h"
#include "../Ext/ExtLayer.h"
#include "../Handlers/CardSelectionHandler.h"
#include "../Handlers/RoundHandler.h"

USING_NS_CC;

class MainGame : public ExtLayer
{
private:
    int _numPlayers;
    int _numPlayersExcludingThis;
    bool _isActivePlayer;
    int _readyCounter;
    
    CardSelectionHandler * _cardSelectionHandler;
    RoundHandler * _roundHandler;
    
    Node * _rootNode;
    Dealer * _dealer;
    
    std::vector<Card*> _cards;
	std::vector<Player*> _players;

    void createPlayers();
    Player* getPlayerById(std::string playerId);
    
    void createDealer();
    float playDistributeCards();
    void distributeCardsData();
    
    void hideWidgets();
    void updateCardConfigFromCSB();
    
    void onPlayerReady();
    void onPlayerReadyResult();
    void onRoundResult(rapidjson::Document &data);
    void updateCardsData(rapidjson::Document &data);
    void onRoundComplete(int roundNumber, RoundStatus status);
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