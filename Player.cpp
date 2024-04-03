#include "Player.h"
#include <vector>

void Player::sayDescription() const {
	std::cout << "Name: " << Player::m_description.getName() << "\nDescription: " << Player::m_description.getDescription() << "\n";
}

void Player::sayStats() const {
	std::cout << "Level: " << Player::m_status.getLevel() << "\nMax Health: " << Player::m_status.getMaxHealth() << "\nCurrent Health: " << Player::m_status.getHealth()
		<< "\nDamage: " << Player::m_status.getDamage() << "\nSpeed: " << Player::m_status.getSpeed() << "\nDefence: " << Player::m_status.getDefence() << "\n";
}