#pragma once

#include "Skill.h"
#include <vector>


class SkillSet
{
public:
	SkillSet(std::vector<Skill*> skills = {})
	{

		if (skills.size() <= 4) {
			for (Skill* skill : skills) {
				m_skills.push_back(skill);
			}
		}
	}

	void displaySkills() const;
	//const bool useSkill(std::string_view skillName);
	bool addSkill(Skill* skill);
	//void removeSkill(Skill skill);

private:
	const int m_maxSkills{ 4 };
	std::vector<Skill*> m_skills{};
	int m_currSkills{ 0 };
};





