#ifndef MOM_H
#define MOM_H

#include "Enemy.h"
#include "SkillSet.h"
#include "Swing.h"

class Mom : public Enemy {
public:
	Mom() : Enemy{ "Mom", "Mother of the hero", {1, 1, 1, 1, 1}}
	{
		m_skills.addSkill(new Swing());
	}
};

#endif // !MOM_H
