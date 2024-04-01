#include "Item.h"

#include "Qualifiers.h"

void Item::identify() const {
	std::cout << "Name: " << Item::m_name << "\n";
	std::cout << "Rarirty: " << Qualifiers::rarities[m_rarity] << "\n";
}