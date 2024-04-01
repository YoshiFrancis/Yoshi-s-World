#ifndef PLAYER_H
#define PLAYER_H

#include "Item.h"
#include "Inventory.h"
#include <string>
#include <iostream>


class Player {
public:

	Player(int level = 5) : m_name{ "Yoshi" }, m_level{ level }, m_inventory{}
	{}

	Player(std::string name, int level = 1) :
		m_name{ name }, m_level{ level }, m_inventory{}
	{ }

	void identify() {
		std::cout << "Name: " << m_name << "\nLevel: " << m_level << "\n";
	}

	bool pickUp(Item& item) {
		return m_inventory.add(item);
	}

	void viewInventory() {
		m_inventory.view();
	}



private:
	const std::string m_name;
	int m_level;
	int m_exp{ 0 };
	Item m_primary;
	Inventory m_inventory{};

	void gainExperience(int exp) {
		m_exp += exp;
		if (m_exp >= 100)
			levelUp();
	}

	void levelUp() {
		m_exp -= 100;
		++m_level;
	}
};

#endif // !PLAYER_H
