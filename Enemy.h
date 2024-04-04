#ifndef  ENEMY_H
#define ENEMY_H

#include "Description.h"
#include "Status.h"
#include <string_view>

class Enemy
{
public:
	Enemy(std::string name="Noob", std::string_view description = "Enemy of the world") : m_status{}, m_description{name, description}
	{}

	Enemy(Status& status, Description& description) : m_status{ status }, m_description{ description }
	{}

	void sayDescription() const;
	void sayStats() const;

private:
	const Status m_status{};
	const Description m_description{};
};


#endif
