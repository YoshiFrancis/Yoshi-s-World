#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Level.h"
#include "Swing.h"

/*

TODO:
- enemy generator
- level system to generate enemies each round
	- make it read from text file to generate info for level
- loop through levels and let player battle on each level

Future ideas to expand on
- Create weapons and items for player to loot and collect
- Add qualifiers to all items and npcs

*/

class Game {
public:

	Game() : m_player{}
	{
		getUserInput();
		Swing swing;
		m_player.getSkills().addSkill(&swing);
		Level(1, m_player);
	}
	void getUserInput();

private:
	Player m_player{};
};

#endif // !GAME_h


