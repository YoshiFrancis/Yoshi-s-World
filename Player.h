#ifndef PLAYER_H
#define PLAYER_H

#include "Status.h"
#include "Description.h"
#include "Attackable.h"
#include <string>
#include <vector>
#include <iostream>
#include <utility>

class Player : public Attackable {
public:

	Player(const std::string& name = "Yoshi", Status status={}) : Attackable{status}, m_description{name, "The Player Who has come from a far away land..."}
	{}

	Player(Player&& other) noexcept : Attackable{ other.m_status }, m_description{other.m_description}
	{ }

	Player& operator=(const Player&) = delete;

	inline Player& operator=(Player&& other) noexcept {
		if (this != &other) {
			m_status = std::move(other.m_status);
			m_description = std::move(other.m_description);
		}
		return *this;
	}

	void sayDescription() const;
	// void attack(Attackable& enemy) override; // not const because the player could level up -- another approach is to return a bool and gain experience if true

private:
	Description m_description{};
};

#endif // !PLAYER_H
