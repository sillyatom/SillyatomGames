#pragma once
#ifndef _GAME_CONSTANTS_H_

#define _GAME_CONSTANTS_H_
#include<string>
#include <vector>

class GameConstants
{
public:
	static const int CARD_VALUE_START;
	static const int CARD_VALUE_2;
	static const int CARD_VALUE_3;
	static const int CARD_VALUE_4;
	static const int CARD_VALUE_5;
	static const int CARD_VALUE_6;
	static const int CARD_VALUE_7;
	static const int CARD_VALUE_8;
	static const int CARD_VALUE_9;
	static const int CARD_VALUE_10;
	static const int CARD_VALUE_J;
	static const int CARD_VALUE_Q;
	static const int CARD_VALUE_K;
	static const int CARD_VALUE_A;
	static const int CARD_VALUE_END;

	static const std::vector<std::string> CARD_VALUES;
	static const std::vector<std::string> CARD_TYPES;
};
#endif // !_GAME_CONSTANTS_H_
