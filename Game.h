#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Enemy.h"

class Game {
public:

	Game()
	{
		getUserInput();
		m_player.sayDescription();
		m_player.sayStats();
		Enemy myenemy{"Mario"};
		m_player.attack(myenemy);
	}
	void getUserInput();
	void battle(Player& player, Enemy& enemy);

private:
	Player m_player;
};

#endif // !GAME_h


