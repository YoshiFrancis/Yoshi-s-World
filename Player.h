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

	std::string getName() const {
		return m_name;
	}

	void identify() {
		std::cout << "Name: " << m_name << "\nLevel: " << m_level << "\n";
	}

	bool pickUp(Item& item) {
		return m_inventory.add(item);
	}

	void viewInventory() {
		m_inventory.view();
	}

	// Move constructor
	Player(Player&& other) noexcept :
		m_name{ std::move(other.m_name) },
		m_level{ other.m_level },
		m_exp{ other.m_exp },
		m_primary{ std::move(other.m_primary) },
		m_inventory{ std::move(other.m_inventory) } {
		other.m_level = 1; // Reset other's level
		other.m_exp = 0;   // Reset other's experience
	}

	// Move assignment operator
	Player& operator=(Player&& other) noexcept {
		if (this != &other) {
			m_name = other.m_name;
			m_level = other.m_level;
			m_exp = other.m_exp;
			m_primary = std::move(other.m_primary);

			other.m_level = 1; // Reset other's level
			other.m_exp = 0;   // Reset other's experience
		}
		return *this;
	}

private:
	std::string m_name;
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
