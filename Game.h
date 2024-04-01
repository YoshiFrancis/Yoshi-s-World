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
public:
	Game() {}

	void introduceGame();
	void getUserInformation();
	void start();
	void runGame();
	void endGame();

private:
	Player m_player;
	void prompt(std::string&& message) const;
	//void battle(Enemy&& enemy) const; // thinking about if this should be in the player class or the game class
	//void invite(Ally&& ally) const;
	//void talk(TalkableNPC&& npc) const;
	//const Enemy spawnEnemy(Qualifiers::Difficulty difficulty = Qualifiers::EASY);
	//const Ally spawnAlly(Qualifiers::Difficulty difficulty = Qualifiers::EASY);
	//const TalkableNPC spawnNPC(Qualifiers::Difficulty difficulty = Qualifiers::EASY);
};


#endif // !GAME_h


