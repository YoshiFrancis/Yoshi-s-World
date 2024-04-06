#ifndef ISKILL_H
#define ISKILL_H

#include "Attackable.h"
#include <string_view>

class ISkill {
public:
	virtual ~ISkill() = default;
	virtual void action(Attackable& user, Attackable& target) = 0;
	virtual inline std::string_view getDescription() const = 0;
	virtual inline std::string_view getName() const = 0;
};

#endif // !ISKILL_h
