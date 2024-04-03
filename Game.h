#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include <string>

class Game {
public:

	Game()
	{
		getUserInput();
	}
	void getUserInput();

private:
	std::string m_name{};
	Player m_player;
};

#endif // !GAME_h


