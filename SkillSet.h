#ifndef SKILLSET_H
#define SKILLSET_H

#include "Skill.h"
#include "SkillSet.h"
#include <vector>

class Skill;

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


#endif // !SKILLSET_H


