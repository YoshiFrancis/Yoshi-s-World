#ifndef LEVEL_H
#define LEVEL_H

// should be reading a txt file for instructions on creating the level

#include "Enemy.h"
#include "Player.h"
#include "Attackable.h"
#include <iostream>

class Level
{
public:
	Level(int level, Player& player) : m_level{level}, m_player{player}
	{
		std::cout << "Level " << level << ":\n";
		m_player.sayDescription();
		Enemy myenemy{ spawnEnemy()};
		battle(m_player, myenemy);

	}

	bool battle(Attackable& player, Attackable& enemy);
	Enemy spawnEnemy() const;


private:
	const int m_level;
	Player& m_player;
};

#endif
