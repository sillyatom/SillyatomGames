//
//  MainGameSinglePlayer.hpp
//  CardGame
//
//  Created by Sillyatom on 22/03/16.
//
//

#ifndef MainGameSinglePlayer_hpp
#define MainGameSinglePlayer_hpp

#include "MainGame.h"

class MainGameSinglePlayer : public MainGame
{
private:
    int _currentPlayer;
    
protected:
    virtual void createPlayers();
    virtual void onDistributeCards();
public:
    CREATE_FUNC(MainGameSinglePlayer);
    static Scene * createScene();
    virtual bool init();
};

#endif /* MainGameSinglePlayer_hpp */
