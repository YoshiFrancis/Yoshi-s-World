#include "Player.h"
#include "Game.h"
#include <string>
#include <utility>
#include <iostream>

void Game::introduceGame() {
	prompt("Game is now about to start!");
	prompt("Text describing the world of the game...");
}

void Game::getUserInformation() {
	prompt("Who is the hero who shall save this world? ");
	std::string name{};
	std::getline(std::cin, name);
	Player newPlayer{ name };
	Game::m_player = std::move(newPlayer);
}

void Game::start() {
	std::cout << "Welcome " << Game::m_player.getName() << " to Yoshi's World!\n";
}

void Game::runGame() {

}

void Game::endGame() {

}

void Game::prompt(std::string&& message) const {
	std::cout << message << "\n";
}