#ifndef PLAYER_H
#define PLAYER_H

#include "Status.h"
#include "Description.h"
#include <string>
#include <iostream>
#include <utility>

class Player {

public:

	Player(std::string name = "Yoshi", Status status={1,1,1,1,1}) : m_status{status}, m_description{name, "The Player Who has come from a far away land..."}
	{}

	Player(Player&& other) noexcept : m_status{ other.m_status }, m_description{other.m_description}
	{ }

	Player& operator=(const Player&) = delete;

	inline Player& operator=(Player&& other) noexcept {
		if (this != &other) {
			m_status = other.m_status;
			m_description = std::move(other.m_description);
		}
		return *this;
	}

private:
	Status m_status{};
	Description m_description{};
};

#endif // !PLAYER_H
