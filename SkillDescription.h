#ifndef SKILL_H
#define SKILL_H

#include "Attackable.h"
#include "ISkill.h"
#include <string_view>

class SkillDescription
{
public:

	enum class SkillType {
		ATTACK,
		DEFEND,
		POWERUP,
		CHARGE,
		MAXTYPES,
	};

	SkillDescription(std::string_view name, std::string_view description, SkillType type, int power_points) noexcept
		: m_name{ name }, m_description{ description }, m_type { type }, m_power_points{ power_points }
	{}
protected:
	std::string_view m_name;
	std::string_view m_description;
	int m_power_points{};
	SkillType m_type;
};


#endif // !SKILL_H


