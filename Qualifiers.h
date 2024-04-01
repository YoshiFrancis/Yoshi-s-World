#ifndef QUALIFIERS_H
#define QUALIFIERS_H

#include <string>
#include <vector>

namespace Qualifiers {

	std::vector<std::string> rarities{ "Common", "Uncommon", "Rare", "Ultimate", "Legendary", "Mythic" };
	std::vector<std::string> difficulties{ "Easy", "Medium", "Hard" };

	enum Rarity {
		COMMON,
		UNCOMMON,
		RARE,
		ULTIMATE,
		LEGENDARY,
		MYTHIC,
		max_qualifiers,
	};
	
	enum Difficulty {
		EASY,
		MEDIUM,
		HARD,
		max_difficulty,
	};

}

#endif // !QUALIFIERS_H
