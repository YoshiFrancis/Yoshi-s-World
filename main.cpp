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
Game (holds everything and controls all the events)

Namespace:
UserInput:
	- createPlayer --> ask questions to create player
	- askPlayAgain --> ask to play again
	- alert --> provide alert message to player
*/


#include "Weapon.h"
#include "Qualifiers.h"
#include "Player.h"

int main(int argc, char* argv[]) {
	Weapon myWeapon{ "Yoshi's Staff", Qualifiers::LEGENDARY, 100 };
	myWeapon.identify();

	Player player{ "Yoshi", 5 };
	player.identify();
	player.pickUp(myWeapon);
	player.viewInventory();


	return 1;

}