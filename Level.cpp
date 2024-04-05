#include "Level.h"
#include "Enemy.h"
#include "Attackable.h"
#include <fstream>
#include <string>

#include <vector>

bool Level::battle(Attackable& player, Attackable& enemy) {

	if (player.getStats().getSpeed() >= enemy.getStats().getSpeed()) {
		while (true)
		{
			if (player.attack(enemy))
				return true;
			if (enemy.attack(player))
				return false;
		}
	}
	else
	{
		while (true)
		{
			if (enemy.attack(player))
				return false;
			if (player.attack(enemy))
				return true;
		}
	}
}

Enemy Level::spawnEnemy(Status status, Description description) const {
	return { status, description };
}

void Level::readFile(const int level) {
	std::ifstream inf{ "Level_" + std::to_string(level) + ".txt" };
	if (!inf) {
		std::cerr << "Could not open Level_" << Level::m_level << ".txt\n";
	}
	else {
		std::string levelName{};
		std::string levelDescription{};
		std::getline(inf, levelName);
		std::getline(inf, levelDescription);
		Level::m_description = { levelName, levelDescription };
		
		while (!inf.eof()) 
			readCharacter(inf);
		
		
	}

	
}

void Level::readCharacter(std::ifstream& inf) {
	std::string name{};
	std::string description{};
	std::string classification{};
	std::vector<int> status(5);
	std::getline(inf, name);
	std::getline(inf, description);
	std::getline(inf, classification);
	inf >> status[0] >> status[1] >> status[2] >> status[3] >> status[4];
	inf.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	Status enemyStatus{ status };
	Description enemyDescription{ name, description };
	Level::m_enemies.push({ enemyStatus, enemyDescription });
}