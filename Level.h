#ifndef LEVEL_H
#define LEVEL_H

// should be reading a txt file for instructions on creating the level

#include "Enemy.h"
#include "Player.h"
#include "Attackable.h"
#include "Description.h"
#include <iostream>
#include <queue>

class Level
{
public:
	Level(int level, Player& player) : m_level{level}, m_player{player}
	{
		std::cout << "Level " << level << ":\n";
		readFile(level);
		while (!m_enemies.empty())
		{
			if (battle(m_player, *(m_enemies.front())))
				m_enemies.pop();
			else
				break;
		}

	}

	bool battle(Attackable& player, Attackable& enemy);
	Enemy spawnEnemy(Status status = {}, Description description={"Enemy", "Lost wolf trying to stop you..."}) const;
	void readFile(const int level);


private:
	const int m_level;
	Player& m_player;
	std::queue<Attackable*> m_enemies{};
	Description m_description;

	void readCharacter(std::ifstream& inf);
};

#endif
