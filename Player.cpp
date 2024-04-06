#include "Player.h"
#include <vector>

bool Player::attack(Attackable& enemy, int damage) {
	if (Attackable::attack(enemy, damage))
	{
		Player::levelUp();
		return true;
	}
	else
	{
		return false;
	}
}