#include "Enemy.h"
#include <iostream>
void Enemy::sayDescription() const {
	std::cout << "Name: " << Enemy::m_description.getName() << "\nDescription: " << Enemy::m_description.getDescription() << "\n";
}

void Enemy::sayStats() const {
	std::cout << "Level: " << Enemy::m_status.getLevel() << "\nMax Health: " << Enemy::m_status.getMaxHealth() << "\nCurrent Health: " << Enemy::m_status.getHealth()
		<< "\nDamage: " << Enemy::m_status.getDamage() << "\nSpeed: " << Enemy::m_status.getSpeed() << "\nDefence: " << Enemy::m_status.getDefence() << "\n";
}