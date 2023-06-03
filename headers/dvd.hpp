#ifndef DVD_HPP
#define DVD_HPP

#include <string>
#include "headers/material.hpp"

namespace vhuk {

using str = std::string;

class DVD : public Material
{
protected:
	str director;
	int duration;
public:
	DVD() = delete;
	DVD(str title, int year, str director, int duration);
	DVD(const DVD& rhv);

	str get_director() const;
	int get_duration() const;

	void display() const;
};









}


#endif
