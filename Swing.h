#ifndef SWING_H
#define SWING_h

#include "SkillDescription.h"
#include "ISkill.h"

class Swing : public SkillDescription, public ISkill
{
public:
	Swing() : SkillDescription{ "Swing", "Swing at the opponent dealing damage", SkillDescription::SkillType::ATTACK, 30 }
	{}

	void action(Attackable& user, Attackable& target);
};

#endif // !SWING_H



