#ifndef  ENEMY_H
#define ENEMY_H

#include "Attackable.h"
#include <string_view>

class Enemy : public Attackable
{
public:
	Enemy(std::string_view name = "Noob", std::string_view description = "Enemy of the world", std::vector<int> status = {}) : Attackable{ status, name, description }
	{}

	Enemy(Status& status, Description& description) : Attackable{ status, description }
	{}

	Enemy(Status&& status, Description&& description, SkillSet&& skills) : Attackable{ status, description, skills }
	{}


};


#endif
