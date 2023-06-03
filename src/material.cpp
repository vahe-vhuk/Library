#ifndef MATERIAL_CPP
#define MATERIAL_CPP

#include "headers/material.hpp"

namespace vhuk {

Material::Material()
	:	title{"Not found"}
	,	year{0}
{}

Material::Material(std::string title, int year)
	:	title{title}
	,	year{year}
{}

str
Material::get_title() const
{
	return title;
}

int
Material::get_year() const
{
	return year;
}

}








#endif
