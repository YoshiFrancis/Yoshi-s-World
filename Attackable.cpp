#include "Attackable.h"
#include <iostream>

void Attackable::sayStats() const {
	std::cout << "Level: " << Attackable::m_status.getLevel() << "\nMax Health: " << Attackable::m_status.getMaxHealth() << "\nCurrent Health: " << Attackable::m_status.getHealth()
		<< "\nDamage: " << Attackable::m_status.getDamage() << "\nSpeed: " << Attackable::m_status.getSpeed() << "\nDefence: " << Attackable::m_status.getDefence() << "\n";
}

void Attackable::sayDescription() const {
	std::cout << "Name: " << Attackable::m_description.getName() << "\nDescription: " << Attackable::m_description.getDescription() << "\n";
}

void Attackable::takeDamage(int damage) {
	Attackable::getStats().takeDamage(damage);
}

bool Attackable::attack(Attackable& enemy, int damage) {
	std::cout << Attackable::m_description.getName() << " has attacked " << enemy.m_description.getName() << "!\n";
	enemy.takeDamage(damage);
	int health = enemy.getStats().getHealth();
	if (health <= 0) {
		std::cout << Attackable::m_description.getName() << " has defeated " << enemy.m_description.getName() << "!\n";
		return true;
	}
	return false;
}