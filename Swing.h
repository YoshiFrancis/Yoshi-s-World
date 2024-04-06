#ifndef SWING_H
#define SWING_h

#include "Skill.h"

class Swing : public Skill
{
public:
	Swing() : Skill{ "Swing", "Swing at the opponent dealing damage", Skill::SkillType::ATTACK, 30 }
	{}

	void action(Attackable& user, Attackable& target) override;
	
};

#endif // !SWING_H



