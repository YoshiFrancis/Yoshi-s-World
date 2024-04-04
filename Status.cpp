#include "Status.h"

void Status::update(int level, int maxHealth, int damage, int speed, int defence) {
	m_level += level;
	m_maxHealth += maxHealth;
	m_health += maxHealth;
	m_damage += damage;
	m_speed += speed;
	m_defence += defence;
}