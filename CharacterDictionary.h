#ifndef CHARACTERDICTIONARY_H
#define CHARACTERDICTIONARY_H

#include "Enemy.h" // would like an interface class for all characters evetnually
#include "Mom.h"
#include "Dad.h"
#include "Brother.h"
#include <unordered_map>
#include <string_view>

class CharacterDictionary
{

public:
	Attackable getCharacter(std::string_view name) { return characterMap[name]; }

private:
	std::unordered_map<std::string_view, Enemy> characterMap{
		{"Mom", Mom()},
		{"Dad", Dad()},
		{"Brother", Brother()}
	};
};

#endif