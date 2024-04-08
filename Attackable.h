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

	Attackable(Status& status, Description& description, SkillSet& skills) : m_status{ status }, m_description{ description }, m_skills{skills}
	{}

	void sayStats() const;
	void sayDescription() const;
	void takeDamage(int damage);
	virtual bool attack(Attackable& enemy, int damage = 1);
	inline Status& getStats() { return m_status; }
	inline SkillSet& getSkills() { return m_skills; }
	inline std::string_view getName() { return m_description.getName(); }
	


protected:
	Status m_status;
	Description m_description;
	SkillSet m_skills;
};


#endif
