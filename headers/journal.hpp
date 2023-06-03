#ifndef JOURNAL_HPP
#define JOURNAL_CPP

#include <string>
#include "material.hpp"

namespace vhuk {

using str = std::string;

class Journal : public Material
{
protected:
	int volume;
	int issue;
	str subject;
public:
	Journal() = delete;

	Journal(str title, int year, int volume, int issue, str subject);
	Journal(const Journal& rhv);

	int get_volume() const;
	int get_issue() const;
	str get_subject() const;

	void display() const;
};





}

#endif
