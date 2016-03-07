//
//  NetworkConstants.h
//  CardGame
//
//  Created by Sillyatom on 03/03/16.
//
//

#ifndef NetworkConstants_h
#define NetworkConstants_h
#include <stdio.h>

typedef enum
{
    MAIN_SCREEN = 0,
    MENU_SCREEN = 1,
    MAIN_GAME = 2
}APILayer;

typedef enum
{
    SELECTED_HOST = 0,
    MATCH_STARTED = 1,
    INIT_CARDS_DATA = 2,
    PLAYER_READY = 3,
    ROUND_RESULT = 4,
    PLAY_NEXT_ROUND = 5
} NetworkAPI;

//
#endif /* NetworkConstants_h */
