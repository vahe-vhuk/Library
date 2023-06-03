#ifndef DVD_CPP
#define DVD_CPP

#include <iostream>
#include "headers/dvd.hpp"

namespace vhuk {

DVD::DVD(str title, int year, str director, int duration)
	:	Material(title, year)
	,	director{director}
	,	duration{duration}
{}

DVD::DVD(const DVD& rhv)
	:	Material(rhv.title, rhv.year)
	,	director{rhv.director}
	,	duration{rhv.duration}
{}

str
DVD::get_director() const
{
	return director;
}

int
DVD::get_duration() const
{
	return duration;
}

void
DVD::display() const
{
	std::cout << "Type:     DVD\n";
	std::cout << "Title:    " << title << "\n";
	std::cout << "Year:     " << year << "\n";
	std::cout << "Director: " << director << "\n";
	std::cout << "Duration: " << duration << "\n";
}





}


#endif
