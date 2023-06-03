#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <string>

namespace vhuk {

using str = std::string;

class Material
{
protected:
	str title;
	int year;
public:
	Material();

	Material(str title, int year);
	virtual ~Material() {};

	str get_title() const;
	int get_year() const;

	virtual void display() const = 0;
};



}









#endif
