#ifndef _GAME_H_
#define _GAME_H_

#include "../GameElements/Card.h"
#include "../GameElements/Player.h"
#include "../GameElements/Dealer.h"
#include "../Ext/ExtLayer.h"
#include "../Handlers/CardSelectionHandler.h"
#include "../Handlers/RoundHandler.h"
#include "../Handlers/APIHandler.h"
#include "../Helper/Utility.h"
#include "../../proj.ios_mac/GameKitHelper/GameKitHelper.h"
#include "../Network/API.h"
#include "../Handlers/APIHandler.h"
#include "../Helper/Utility.h"
#include "../Config/CardConfig.h"
#include "../Constants/GameConstants.h"

USING_NS_CC;

class MainGame : public ExtLayer
{
protected:
    std::string _hostId;
    
    int _numPlayers;
    int _numPlayersExcludingThis;
    
    bool _isActivePlayer;
    bool _didShout;
    
    int _readyCounter;
    
    CardSelectionHandler * _cardSelectionHandler;
    APIHandler * _apiHandler;
    RoundHandler * _roundHandler;
    
    Node * _rootNode;
    Dealer * _dealer;
    
    std::vector<Card*> _cards;
    
	std::vector<Player*> _players;
    
    std::vector<std::string> _playersId;
    std::vector<Player*> _playersExcludingThis;
    std::vector<std::string> _playersIdExcludingThis;
        
    //init
    void createDealer();
    void hostCreatePlayers();
    virtual void createPlayers();
    Player* getPlayerById(std::string playerId);
    
    //cards
    float playDistributeCards();
    void dispatchCardsData();
    float updateCardsData(int type, rapidjson::Document &data);
    
    //init UI
    void hideWidgets();
    void updateCardConfigFromCSB();
    
    //response
    void onAPISuccess(int api);

    void processData(int type, rapidjson::Document &data);
    
    NSData * getAcknowledgementData(rapidjson::Document &data);
    
    void onRoundComplete(int roundNumber, RoundStatus status);

    ui::ImageView* getReferenceByName(std::string name);
    
    //from host
    void dispatchHostId();
    //on players
    void onHostSelected(int type, rapidjson::Document &data);
    void onRoundResult(int type, rapidjson::Document &data);
    void dispatchRoundComplete();
    void dispatchNextRound();
    bool isThisActivePlayer();
    
    void autoSpin();
    void dealSelectedCard();
    void onDealAnimationComplete(Card* card);
    void onProcessDataComplete();
    virtual void onDistributeCards();
    
    void startMatch();
    void startRound(int type, rapidjson::Document &data);
    
    void onShout(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
    void onSpin(cocos2d::Ref * sender, ui::Widget::TouchEventType eventType);
    void doSpin();

    virtual bool onTouchBegan(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchEnded(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchMoved(cocos2d::Touch * touch, cocos2d::Event * event);
    virtual void onTouchCancelled(cocos2d::Touch * touch, cocos2d::Event * event);

    virtual void onReceiveNetworkData(int type, rapidjson::Document & data);
public:
	CREATE_FUNC(MainGame);
	static Scene * createScene();
	virtual bool init();
    virtual void update(float dt);
};

#endif