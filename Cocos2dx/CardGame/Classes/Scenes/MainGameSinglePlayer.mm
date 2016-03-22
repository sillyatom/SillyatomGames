//
//  MainGameSinglePlayer.cpp
//  CardGame
//
//  Created by Sillyatom on 22/03/16.
//
//

#include "MainGameSinglePlayer.h"

using namespace rapidjson;

Scene * MainGameSinglePlayer::createScene()
{
    auto scene = Scene::create();
    auto layer = MainGameSinglePlayer::create();
    scene->addChild(layer);
    return scene;
}

bool MainGameSinglePlayer::init()
{
    if (!ExtLayer::initWithData(SINGLE_PLAYER))
    {
        return false;
    }
    
    _numPlayers = 3;
    _currentPlayer = 0;
    _isActivePlayer = (_currentPlayer == 0);
    
    _rootNode = CSLoader::createNode("MainGame.csb");
    addChild(_rootNode);
    
    _didShout = false;
    
    _cardSelectionHandler = CardSelectionHandler::getInstance();

    updateCardConfigFromCSB();
    
    _roundHandler = RoundHandler::getInstance();
    _roundHandler->onRoundComplete = std::bind(&MainGameSinglePlayer::onRoundComplete, this, std::placeholders::_1, std::placeholders::_2);
    _gameContainer->addChild(_roundHandler);
    
    createPlayers();

    //need active player bool to shuffle
    //init dealer
    {
        createDealer();
        int len = _dealer->getDeckSize();
        for (int index = 0; index < len; index++)
        {
            _players.at((index%_numPlayers))->addCard(_dealer->removeCard());
        }
    }
    
    hideWidgets();
    
    addTouchListeners();
    
    auto shoutBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, "shout_btn"));
    shoutBtn->addTouchEventListener(CC_CALLBACK_2(MainGameSinglePlayer::onShout, this));

    auto spinBtn = static_cast<ui::Button*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, "spin_btn"));
    spinBtn->addTouchEventListener(CC_CALLBACK_2(MainGameSinglePlayer::onSpin, this));
    
    float delay = playDistributeCards();
    Utility::delayedCall(this, CallFunc::create([=](){
        onDistributeCards();
    }), delay);
    return true;
}

void MainGameSinglePlayer::onDistributeCards()
{
    _players.front()->resetReel();
    _roundHandler->startRound(1);    
}

void MainGameSinglePlayer::createPlayers()
{
    for (int index = 0; index < _numPlayers; index++)
    {
        Player * player = Player::create();
        _gameContainer->addChild(player);
        
        player->setPlayerIndex(index);
        
        std::ostringstream osstream;
        osstream << "refCardPos_player"<<(index+1);
        player->setCardPosition(getReferenceByName(osstream.str())->getPosition());
        
        std::ostringstream ossPlayerName;
        ossPlayerName<<"Player"<<(index+1);
        player->setPlayerName(ossPlayerName.str());
        player->setPlayerId(std::to_string(index));
        _players.push_back(player);
        
        std::ostringstream oss;
        oss<<"name_player"<<(index+1);
        ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
        name->setString(player->getPlayerName());
    }
    for(int index = _numPlayers; index < MAX_PLAYERS; index++)
    {
        {
            std::ostringstream oss;
            oss<<"name_player"<<(index+1);
            ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
            name->setVisible(false);
        }
        {
            std::ostringstream oss;
            oss<<"SlotsBg"<<(index+1);
            ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
            name->setVisible(false);
        }
        {
            std::ostringstream oss;
            oss<<"CardsReel"<<(index+1);
            ui::TextField *name = static_cast<ui::TextField*>(ui::Helper::seekWidgetByName((ui::Widget*)_rootNode, oss.str()));
            name->setVisible(false);
        }
        {
            std::ostringstream oss;
            oss << "dp_player" << (index+1);
            ui::ImageView * dp = static_cast<ui::ImageView*>(ui::Helper::seekWidgetByName((ui::Widget*)(_rootNode), oss.str()));
            dp->setVisible(false);
        }
        
    }
    
    _numPlayersExcludingThis = _numPlayers - 1;
    
    _playersExcludingThis = _players;
    _playersExcludingThis.erase(_playersExcludingThis.begin());
    
    for (auto player : _players)
    {
        _playersId.push_back(player->getPlayerId());
        _playersIdExcludingThis.push_back(player->getPlayerId());
    }
    
    _playersIdExcludingThis.erase(_playersIdExcludingThis.begin());
}