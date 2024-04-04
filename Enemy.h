#ifndef  ENEMY_H
#define ENEMY_H

#include "Description.h"
#include "Status.h"
#include "Attackable.h"
#include <string_view>

class Enemy : public Attackable
{
public:
	Enemy(std::string name="Noob", std::string_view description = "Enemy of the world") : Attackable{}, m_description{name, description}
	{}

	Enemy(Status& status, Description& description) : Attackable{ status }, m_description{ description }
	{}

	void sayDescription() const;

private:
	const Description m_description{};
};


#endif
