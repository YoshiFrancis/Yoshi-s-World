#ifndef SKILLSET_H
#define SKILLSET_H

#include "Skill.h"
#include <vector>

class SkillSet
{
public:
	SkillSet(std::initializer_list<Skill> skills)
	{
		if (skills.size() <= 4) {
			m_skills.insert(m_skills.begin(), skills.begin(), skills.end());
		}
	}

	void displaySkills() const;
	const bool useSkill(std::string_view skillName);
	const bool addSkill(Skill skill);
	void removeSkill(Skill skill);

private:
	const int m_maxSkills{ 4 };
	std::vector<Skill> m_skills;
	int m_currSkills{ 0 };
};


#endif // !SKILLSET_H


