#include "Player.h"
#include <vector>

void Player::sayDescription() const {
	std::cout << "Name: " << Player::m_description.getName() << "\nDescription: " << Player::m_description.getDescription() << "\n";
}

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