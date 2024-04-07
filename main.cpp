/*

Classes:
Item
	- Weapon
	- Consumable
		- potions
		- coins

NPC:
	- Ally:
	- Enemy:
	- Talkable NPC
Player
Inventory
Game (holds everything and controls all the events) -- container class
-- if I use game in the future, I would have Level classes which would be aggregations

Namespace:
UserInput:
	- createPlayer --> ask questions to create player
	- askPlayAgain --> ask to play again
	- alert --> provide alert message to player
*/

#include "Game.h"

#include "Swing.h"
#include "SkillSet.h"
#include "Attackable.h"

int main(int argc, char* argv[]) {

	SkillSet test;
	Swing swingSkill{};
	test.addSkill(&swingSkill);
	test.displaySkills();
	//Game game;	
	return 1;

}