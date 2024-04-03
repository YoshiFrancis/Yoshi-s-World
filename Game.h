#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include <string>

class Game {
public:

	Game()
	{
		getUserInput();
		m_player.sayDescription();
		m_player.sayStats();
	}
	void getUserInput();

private:
	std::string m_name{};
	Player m_player;
};

#endif // !GAME_h


