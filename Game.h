#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Enemy.h"
#include  "Attackable.h"

class Game {
public:

	Game()
	{
		getUserInput();
		m_player.sayDescription();
		Enemy myenemy{"Mario"};
		m_player.attack(myenemy);
		m_player.sayStats();
	}
	void getUserInput();
	bool battle(Attackable& player, Attackable& enemy);

private:
	Player m_player;
};

#endif // !GAME_h


