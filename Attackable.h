#ifndef ATTACKABLE_H
#define ATTACKABLE_H

#include "Status.h"

class Attackable
{
public:

	Attackable(Status status = {}) : m_status{ status }
	{}

	void sayStats() const;
	void takeDamage(int damage);
	virtual bool attack(Attackable& enemy);
	inline Status& getStats() { return m_status; }

protected:
	Status m_status{};

};

#endif
