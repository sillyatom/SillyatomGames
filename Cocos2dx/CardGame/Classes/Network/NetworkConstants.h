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
    MAIN_GAME = 2,
    SINGLE_PLAYER = 3
}APILayer;

typedef enum
{
    SELECTED_HOST = 0,
    MATCH_STARTED = 1,
    INIT_CARDS_DATA = 2,
    ROUND_START = 3,
    ROUND_RESULT = 4,
    NEXT_ROUND = 5
} NetworkAPI;

//
#endif /* NetworkConstants_h */
