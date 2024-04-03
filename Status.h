#ifndef STATUS_H
#define STATUS_H

/*
Container class containing all the status identifiers of all fightables
*/


class Status
{
public:
	Status(int level=1, int maxHealth=10, int damage=5, int speed=5, int defence=5) :
		m_level{ level },
		m_maxHealth{ maxHealth },
		m_health{ maxHealth },
		m_damage{ damage },
		m_speed{ speed },
		m_defence{ defence }
	{}

	const int getLevel() const { return m_level; }
	const int getHealth() const { return m_health; }
	const int getDamage() const { return m_health; }
	const int getSpeed() const { return m_speed; }
	const int getDefence() const { return m_defence; }

	void takeDamage(int damage) { m_health -= damage; }
	void update(int level, int maxHealth, int damage, int speed, int defence) {
		m_level += level;
		m_maxHealth += maxHealth;
		m_health += maxHealth;
		m_damage += damage;
		m_speed += speed;
		m_defence += defence;
	}

private:
	int m_level{};
	int m_maxHealth{};
	int m_health{};
	int m_damage{};
	int m_speed{};
	int m_defence{};
};

#endif // !STATUS_H



