#ifndef WEAPON_H
#define WEAPON_H

#include "Item.h"
#include "Qualifiers.h"
#include <string>
#include <iostream>

class Weapon : public Item {

public:
	Weapon(std::string name, Qualifiers::Rarity rarity, int damage)
		: Item{ name, rarity }, m_damage(damage)
	{}

	void identify() {
		Item::identify();
		std::cout << "Damage: " << m_damage << "\n";
	}
	
private:
	const int m_damage{};
};

#endif // !WEAPON_H
