#include "GameConstants.h"

const int GameConstants::CARD_VALUE_START = 0;
const int GameConstants::CARD_VALUE_2 = 0;
const int GameConstants::CARD_VALUE_3 = 1;
const int GameConstants::CARD_VALUE_4 = 2;
const int GameConstants::CARD_VALUE_5 = 3;
const int GameConstants::CARD_VALUE_6 = 4;
const int GameConstants::CARD_VALUE_7 = 5;
const int GameConstants::CARD_VALUE_8 = 6;
const int GameConstants::CARD_VALUE_9 = 7;
const int GameConstants::CARD_VALUE_10= 8;
const int GameConstants::CARD_VALUE_J = 9;
const int GameConstants::CARD_VALUE_Q = 10;
const int GameConstants::CARD_VALUE_K = 11;
const int GameConstants::CARD_VALUE_A = 12;
const int GameConstants::CARD_VALUE_END = 13;

const std::vector<std::string> GameConstants::CARD_VALUES = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
const std::vector<std::string> GameConstants::CARD_TYPES = { "D", "C", "H", "S" };

const float GameConstants::SPACE_BETWEEN_CARDS = 20.0f;

const float GameConstants::ROUND_TIME = 5.0f;
const float GameConstants::DEAL_ANIM_TIME = 0.2f;

std::vector<std::string> GameConstants::layerNameMap = {"MainScreen", "MenuScreen", "MainGame"};
std::map<APILayer, std::vector<NetworkAPI>> GameConstants::layerApiMap = {
    {MAIN_SCREEN, {}},
    {MENU_SCREEN, {MATCH_STARTED}},
    {MAIN_GAME, {SELECTED_HOST, INIT_CARDS_DATA, PLAYER_READY, ROUND_RESULT}}
};