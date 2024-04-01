#include "Inventory.h"

bool Inventory::add(Item& item) {
	if (Inventory::m_pockets.size() < Inventory::m_space) {
		Inventory::m_pockets.push_back(item);
		return true;
	}
	else {
		return false;
	}
}

void Inventory::view() const {
	int count = 1;
	for (auto& item : Inventory::m_pockets) {
		std::cout << count << "." << item.getName() << "\n";
		++count;
	}
}