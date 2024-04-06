#include "Swing.h"

void Swing::action(Attackable& user, Attackable& target) {
	std::cout << user.getName() << " used Swing!\n";
	user.attack(target, user.getStats().getDamage() * .3);
}