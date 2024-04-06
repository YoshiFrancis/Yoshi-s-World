#ifndef ATTACKABLE_H
#define ATTACKABLE_H

#include "Status.h"
#include "Description.h"
#include "SkillSet.h"
#include <string_view>
#include <iostream>



class Attackable
{
public:

	Attackable(Status status = {}, std::string_view name = "Noob", std::string_view description = "...") : m_status{ status }, m_description{ name, description }
	{}

	Attackable(Status& status, Description& description) : m_status{ status }, m_description{ description }
	{}

	void sayStats() const;
	void sayDescription() const;
	void takeDamage(int damage);
	virtual bool attack(Attackable& enemy, int damage = 1);
	inline Status& getStats() { return m_status; }
	inline std::string_view getName() { return m_description.getName(); }
	//inline void addSkill(Skill* skill) { m_skills.addSkill(skill); }


protected:
	Status m_status{};
	Description m_description{};
	//SkillSet m_skills;
};

#endif
