#include "Level.h"
#include "Enemy.h"
#include "Attackable.h"
#include "CharacterDictionary.h"
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
	CharacterDictionary charDict;
	std::string characterName{};
	std::getline(inf, characterName);
	Level::m_enemies.push(charDict.getCharacter(characterName));
}