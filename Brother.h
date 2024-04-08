#ifndef BROTHER_h
#define BROTHER_h

#include "Enemy.h"
#include "SkillSet.h"
#include "Swing.h"

class Brother : public Enemy {
public:
	Brother() : Enemy{ "Brother", "Brother of the hero", {1, 1, 1, 1, 1} }
	{
		m_skills.addSkill(new Swing());
	}
};

#endif // !MOM_H
