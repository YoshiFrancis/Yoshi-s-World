#include "Game.h"
#include <string>
#include <string_view>
#include <iostream>

void Game::getUserInput() {
	std::cout << "Hello, welcome to Yoshi's World! Who is the user who shall be joining us today?\n";
	std::string name{};
	std::getline(std::cin, name);
	Game::m_player.setName(std::string_view(name));
}

bool Game::battle(Attackable& player, Attackable& enemy) {

	if (player.getStats().getSpeed() >= enemy.getStats().getSpeed()) {
		while (true)
		{
			if (player.attack(enemy))
				return true;
			if (enemy.attack(enemy))
				return false;
		}
	}
	else 
	{
		while (true)
		{
			if (enemy.attack(enemy))
				return false;
			if (player.attack(enemy))
				return true;
		}
	}
}