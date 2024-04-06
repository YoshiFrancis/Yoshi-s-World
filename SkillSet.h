#ifndef SKILLSET_H
#define SKILLSET_H

#include "ISkill.h"
#include <vector>
#include <initializer_list>


class SkillSet
{
public:
	SkillSet(std::initializer_list<ISkill*> skills)
	{

		if (skills.size() <= 4) {
			for (auto skill : skills) {
				m_skills.push_back(skill);
			}
		}
	}

	void displaySkills() const;
	//const bool useSkill(std::string_view skillName);
	const bool addSkill(ISkill* skill);
	//void removeSkill(Skill skill);

private:
	const int m_maxSkills{ 4 };
	std::vector<ISkill*> m_skills{};
	int m_currSkills{ 0 };
};


#endif // !SKILLSET_H


