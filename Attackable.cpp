#include "Attackable.h"
#include <iostream>

void Attackable::sayStats() const {
	std::cout << "Level: " << Attackable::m_status.getLevel() << "\nMax Health: " << Attackable::m_status.getMaxHealth() << "\nCurrent Health: " << Attackable::m_status.getHealth()
		<< "\nDamage: " << Attackable::m_status.getDamage() << "\nSpeed: " << Attackable::m_status.getSpeed() << "\nDefence: " << Attackable::m_status.getDefence() << "\n";
}

void Attackable::takeDamage(int damage) {
	Attackable::getStats().takeDamage(damage);
}