#ifndef STATUS_H
#define STATUS_H

/*
Container class containing all the status identifiers of all fightables
*/

#include <vector>

class Status
{
public:
	Status(int level=1, int maxHealth=100, int damage=5, int speed=5, int defence=5) :
		m_level{ level },
		m_maxHealth{ maxHealth },
		m_health{ maxHealth },
		m_damage{ damage },
		m_speed{ speed },
		m_defence{ defence }
	{}

	Status(std::vector<int>& statusVec) : Status{ statusVec[0], statusVec[1], statusVec[2], statusVec[3], statusVec[4] }
	{}

	inline const int getLevel() const { return m_level; }
	inline const int getMaxHealth() const { return m_maxHealth; }
	inline const int getHealth() const { return m_health; }
	inline const int getDamage() const { return m_damage; }
	inline const int getSpeed() const { return m_speed; }
	inline const int getDefence() const { return m_defence; }

	inline void takeDamage(int damage) { m_health -= damage; }
	void update(int maxHealth, int health, int damage, int speed, int defence, int level=1);

private:
	int m_level{};
	int m_maxHealth{};
	int m_health{};
	int m_damage{};
	int m_speed{};
	int m_defence{};
};

#endif // !STATUS_H



