#ifndef DESCRIPTION_H
#define DESCRIPTION_H

#include <string_view>

class Description
{
public:

	Description(std::string_view name="Unknown", std::string_view description="") : m_name{name}, m_description{description}
	{}

	Description(const Description& description) : m_name{ description.m_name }, m_description{description.m_description}
	{
	}

	Description(const Description&& other) noexcept : m_name{ other.m_name }, m_description{ other.m_description }
	{}

	inline Description& operator=(const Description&& other) noexcept {
		if (this != &other) {
			m_name = other.m_name;
			m_description = other.m_description;
		}
		return *this;
	}

	inline const std::string_view getName() const { return m_name; }
	inline const std::string_view getDescription() const { return m_description; }

private:
	std::string_view m_name{};
	std::string_view m_description{};
};


#endif // DESCRIPTION_H



