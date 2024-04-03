#include "Game.h"
#include <iostream>

void Game::getUserInput() {
	std::cout << "Hello, welcome to Yoshi's World! Who is the user who shall be joining us today?\n";
	std::getline(std::cin, Game::m_name);
	Game::m_player = { Game::m_name };
	std::cout << Game::m_name << "\n";
}