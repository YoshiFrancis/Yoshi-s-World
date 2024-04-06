#ifndef PLAYER_H
#define PLAYER_H

#include "Status.h"
#include "Description.h"
#include "Attackable.h"
#include <string_view>
#include <utility>

class Player : public Attackable {
public:

	Player(std::string_view name = "Yoshi", std::string_view description = "The Player Who has come from a far away land...") : Attackable{ {}, name, description }
	{}

	Player(Player&& other) noexcept : Attackable{ other.m_status, other.m_description }
	{ }

	Player& operator=(const Player&) = delete;

	inline Player& operator=(Player&& other) noexcept {
		if (this != &other) {
			m_status = std::move(other.m_status);
			m_description = std::move(other.m_description);
		}
		return *this;
	}

	inline void levelUp() { m_status.update(1, 1, 1, 1, 1); }
	inline void setName(std::string_view name) { m_description.setName(name); }
	bool attack(Attackable& enemy, int damage = 5) override;

};

#endif // !PLAYER_H
