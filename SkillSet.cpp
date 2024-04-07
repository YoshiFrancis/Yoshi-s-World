#include "SkillSet.h"
#include "Skill.h"
#include <iostream>

void SkillSet::displaySkills() const {
	if (SkillSet::m_currSkills == 0)
		std::cout << "None\n";
	else {
		for (auto& skill : m_skills) {
			std::cout << skill->getName() << " || ";
		}
		std::cout << "\n";
	}
	
}

bool SkillSet::addSkill(Skill* skill) {
	if (SkillSet::m_currSkills <= 3) {
		m_skills.push_back(skill);
		++m_currSkills;
		return true;
	}
	return false; // indicating skillset is full
}


const Skill* SkillSet::getSkill(std::string_view skillName) const {
	return *SkillSet::findSkill(skillName);
}

void SkillSet::removeSkill(std::string_view skillName) {
	auto skill = SkillSet::findSkill(skillName);
	if (skill != SkillSet::m_skills.end()) {
		SkillSet::m_skills.erase(skill);
		--SkillSet::m_currSkills;
	}

}

const bool SkillSet::hasSkill(std::string_view skillName, const Skill** a_skill) const {
	return SkillSet::findSkill(skillName) != SkillSet::m_skills.end();
}
std::vector<Skill*>::const_iterator SkillSet::findSkill(std::string_view skillName) const {
	return std::find_if(SkillSet::m_skills.begin(), SkillSet::m_skills.end(), [&](const Skill* skill) {
		std::cout << skill->getName() << " == " << skillName << "\n";
		return skill->getName() == skillName;
		});
}
