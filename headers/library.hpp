#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include <utility>
#include <string>
#include <unordered_map>

#include "headers/material.hpp"
#include "headers/book.hpp"
#include "headers/journal.hpp"
#include "headers/dvd.hpp"

namespace vhuk {

using str = std::string;

class Library
{
private:
	std::unordered_map<str, std::pair<Material*, bool>>* lib;
public:
	Library();

	template <typename... Args>
	Library(Args&&... args) {
		lib = new std::unordered_map<str, std::pair<Material*, bool>>;
		((append(args)), ...);
	}

	~Library();

	void append(Material& ob);

	void display_list() const;

	Material* borrow(str title);
	void unborrow(str title);
	bool is_borrowed(str title);
};






}


#endif
