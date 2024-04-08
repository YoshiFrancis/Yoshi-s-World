#ifndef DAD_H
#define DAD_H

#include "Enemy.h"
#include "SkillSet.h"
#include "Swing.h"

class Dad : public Enemy {
public:
	Dad() : Enemy{ "Dad", "Dad of the hero", {1, 1, 1, 1, 1} }
	{
		m_skills.addSkill(new Swing());
	}
};

#endif // !MOM_H
