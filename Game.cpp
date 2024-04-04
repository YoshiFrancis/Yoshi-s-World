#include "Game.h"
#include "Attackable.h"
#include <string>
#include <string_view>
#include <iostream>

void Game::getUserInput() {
	std::cout << "Hello, welcome to Yoshi's World! Who is the user who shall be joining us today?\n";
	std::string name{};
	std::getline(std::cin, name);
	Game::m_player.setName(std::string_view(name));
}