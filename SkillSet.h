#ifndef SKILLSET_H
#define SKILLSET_H


#include <vector>
#include <string_view>

class Skill;

class SkillSet
{
public:
	SkillSet(std::vector<Skill*> skills = {})
	{

		if (skills.size() <= m_maxSkills) {
			for (Skill* skill : skills) {
				m_skills.push_back(skill);
				++m_currSkills;
			}
		}
	}

	void displaySkills() const;
	bool addSkill(Skill* skill);
	const Skill* getSkill(std::string_view skillName) const;
	void removeSkill(std::string_view skillName);
	const bool hasSkill(std::string_view skillName, const Skill** skill=nullptr) const;
	inline int getCurrSkills() const { return m_currSkills; }

private:
	const int m_maxSkills{ 4 };
	std::vector<Skill*> m_skills{};
	int m_currSkills{ 0 };
	std::vector<Skill*>::const_iterator findSkill(std::string_view skillName) const;



};

#endif