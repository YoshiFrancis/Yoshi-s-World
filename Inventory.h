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

	bool add(Item& item);
	void view() const;
	inline int getSpace() const { return m_space; }

private:
	const int m_space{};
	std::vector<Item> m_pockets{};

};


#endif // !INVENTORY_H
