#ifndef  ENEMY_H
#define ENEMY_H

#include "Description.h"
#include "Status.h"
#include "Attackable.h"
#include <string_view>

class Enemy : public Attackable
{
public:
	Enemy(std::string_view name = "Noob", std::string_view description = "Enemy of the world") : Attackable{ {}, name, description }
	{}

	Enemy(Status& status, Description& description) : Attackable{ status, description }
	{}
};


#endif
