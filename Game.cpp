#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include <string>
#include <iostream>

void Game::getUserInput() {
	std::cout << "Hello, welcome to Yoshi's World! Who is the user who shall be joining us today?\n";
	std::string m_name{};
	std::getline(std::cin, m_name);
	Game::m_player = { m_name };
}

void Game::battle(Player& player, Enemy& enemy) {

}