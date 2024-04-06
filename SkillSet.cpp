#include "SkillSet.h"

void SkillSet::displaySkills() const {
	for (auto& skill : m_skills) {
		std::cout << skill.getName() << " || ";
	}
	std::cout << "\n";
}