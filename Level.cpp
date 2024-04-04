#include "Level.h"
#include "Enemy.h"
#include "Attackable.h"

bool Level::battle(Attackable& player, Attackable& enemy) {

	if (player.getStats().getSpeed() >= enemy.getStats().getSpeed()) {
		while (true)
		{
			if (player.attack(enemy))
				return true;
			if (enemy.attack(player))
				return false;
		}
	}
	else
	{
		while (true)
		{
			if (enemy.attack(player))
				return false;
			if (player.attack(enemy))
				return true;
		}
	}
}

Enemy Level::spawnEnemy() const {
	return { "Mario" };
}
