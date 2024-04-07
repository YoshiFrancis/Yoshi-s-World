#include "SkillSet.h"

//void SkillSet::displaySkills() const {
//	for (auto& skill : m_skills) {
//		std::cout << skill->getName() << " || ";
//	}
//	std::cout << "\n";
//}

bool SkillSet::addSkill(Skill* skill) {
	if (SkillSet::m_currSkills <= 3) {
		m_skills.push_back(skill);
		++m_currSkills;
		return true;
	}
	return false; // indicating skillset is full
}