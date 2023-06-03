#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include "headers/material.hpp"

namespace vhuk {

using str = std::string;

class Book : public Material
{
protected:
	str author;
	str genre;
	int pages;
public:
	Book() = delete;

	Book(str title, int year, str author, str genre, int pages);
	Book(const Book& rhv);
	
	str get_author() const;
	str get_genre() const;
	int get_pages() const;

	void display() const;
};






}




#endif
