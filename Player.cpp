#include "Player.h"
#include <vector>

bool Player::attack(Attackable& enemy) {
	if (Attackable::attack(enemy))
	{
		Player::levelUp();
		return true;
	}
	else
	{
		return false;
	}
}