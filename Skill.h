#ifndef SKILL_H
#define SKILL_H

#include <string_view>
#include "Attackable.h"

class Skill
{
public:


	enum class SkillType {
		ATTACK,
		DEFEND,
		POWERUP,
		CHARGE,
		MAXTYPES,
	};

	Skill(std::string_view name, std::string_view description, SkillType type, int power_points)
		: m_name{ name }, m_description{ description }, m_type { type }, m_power_points{ power_points }
	{}

	virtual void action(Attackable& user, Attackable& target);
	inline std::string_view getDescription() const { return m_description; }
	inline std::string_view getName() const { return m_name; }

private:
	std::string_view m_name;
	std::string_view m_description;
	int m_power_points{};
	SkillType m_type;
};


#endif // !SKILL_H


