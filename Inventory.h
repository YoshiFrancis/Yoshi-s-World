#ifndef INVENTORY_H
#define INVENTORY_H


#include "Item.h"
#include <vector>
#include <iostream>

class Inventory {

public:


	Inventory(int space=5) : m_space{ space }
	{ }

	Inventory(const Inventory& inventory) {}

	bool add(Item& item) {
		if (m_pockets.size() < m_space) {
			m_pockets.push_back(item);
			return true;
		}
		else {
			return false;
		}
	}

	void view() {
		int count = 1;
		for (auto& item : m_pockets) {
			std::cout << count << "." << item.getName() << "\n";
			++count;
		}
	}

	int getSpace() const { return m_space; }

private:
	const int m_space{};
	std::vector<Item> m_pockets{};

};


#endif // !INVENTORY_H
