#ifndef LIBRARY_CPP
#define LIBRARY_CPP

#include <iostream>
#include "headers/library.hpp"

namespace vhuk {

Library::Library()
{
	lib = new std::unordered_map<str, std::pair<Material*, bool>>;
}

Library::~Library()
{
	delete lib;
}


void
Library::append(Material& ob)
{
	str title = ob.get_title();
	if (lib->count(title) != 0) {
		throw std::invalid_argument("Material with title "+title+" expected");
	}
	Material* ptr = &ob;
	(*lib)[title] = std::make_pair(ptr, false);
}

Material*
Library::borrow(str title)
{
	if ((*lib)[title].second) {
		return nullptr;
	}
	(*lib)[title].second = true;
	return (*lib)[title].first;
}

void
Library::unborrow(str title)
{
	if (lib->count(title) == 0) {
		throw std::invalid_argument("Material is not with this library");
	}
	(*lib)[title].second = false;
}

bool
Library::is_borrowed(str title)
{
	if (lib->count(title) == 0) {
		throw std::invalid_argument("This library dont have material"+title);
	}
	return (*lib)[title].second;
}

void
Library::display_list() const
{
	for (auto material : *lib) {
		material.second.first->display();
		std::cout << "Is borrowed: " << material.second.second << "\n";
	}
}

}
#endif
