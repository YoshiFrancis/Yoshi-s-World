#include "Enemy.h"
#include <iostream>
void Enemy::sayDescription() const {
	std::cout << "Name: " << Enemy::m_description.getName() << "\nDescription: " << Enemy::m_description.getDescription() << "\n";
}
