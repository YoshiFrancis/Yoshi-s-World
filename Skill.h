#ifndef SKILL_H
#define SKILL_H

#include "Attackable.h"
#include <string_view>

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

	Skill(std::string_view name, std::string_view description, SkillType type, int power_points) noexcept
		: m_name{ name }, m_description{ description }, m_type { type }, m_power_points{ power_points }
	{}

	inline std::string_view getName() const { return Skill::m_name; }
	inline std::string_view getDescription() const { return Skill::m_description; }
	virtual void action(Attackable& user, Attackable& target) = 0;
	virtual ~Skill() = default;


protected:
	std::string_view m_name;
	std::string_view m_description;
	int m_power_points{};
	SkillType m_type;
};


#endif // !SKILL_H


