#ifndef ITEM_H
#define ITEM_H

#include "Qualifiers.h"
#include <iostream>
#include <string>

class Item {

public:

	Item(std::string name, Qualifiers::Rarity rarity=Qualifiers::COMMON) : m_name{name}, m_rarity{rarity}
	{}

	Item() : Item{ "Air", Qualifiers::COMMON }
	{}

	void identify() const {
		std::cout << "Name: " << m_name << "\n";
		std::cout << "Rarirty: " << Qualifiers::rarities[m_rarity] << "\n";
	}

	std::string getName() const { return m_name; }

private:
	std::string m_name{};
	Qualifiers::Rarity m_rarity;
};

#endif // !ITEM_H
