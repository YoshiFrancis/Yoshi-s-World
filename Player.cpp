#include "Player.h"

void Player::gainExperience(int exp) {
	Player::m_exp += exp;
	if (Player::m_exp >= 100)
		Player::levelUp();
}

void Player::levelUp() {
	Player::m_exp -= 100;
	++Player::m_level;
}