#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Enemy.h"
#include "Ally.h"
#include "TalkableNPC.h"
#include "Qualifiers.h"
#include <string>

class Game
{

	Game() = delete;
	Game(Player player) : m_player{ player }
	{}

	void startGame();
	void runGame();
	void endGame();

private:
	Player m_player;
	void prompt(std::string& message);
	void battle();
	const Enemy spawnEnemy(Qualifiers::Difficulty difficulty = Qualifiers::EASY);
	const Ally spawnAlly(Qualifiers::Difficulty difficulty = Qualifiers::EASY);
	const TalkableNPC spawnNPC(Qualifiers::Difficulty difficulty = Qualifiers::EASY);
};


#endif // !GAME_h


