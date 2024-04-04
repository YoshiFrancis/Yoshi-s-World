#include "Status.h"

void Status::update(int maxHealth, int health, int damage, int speed, int defence, int level) {
	m_level += level;
	m_maxHealth += maxHealth;
	m_health += health;
	m_damage += damage;
	m_speed += speed;
	m_defence += defence;
}