#ifndef DESCRIPTION_H
#define DESCRIPTION_H

#include "Qualifiers.h"
#include <string>


class Description
{
public:
	const std::string getName() const { return m_name; }
	const std::string getDescription() const { return m_description; }

private:
	const std::string m_name{};
	const std::string m_description{};

};


#endif // DESCRIPTION_H



