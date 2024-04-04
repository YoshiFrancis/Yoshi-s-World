#include "Player.h"
#include <vector>

void Player::sayDescription() const {
	std::cout << "Name: " << Player::m_description.getName() << "\nDescription: " << Player::m_description.getDescription() << "\n";
}