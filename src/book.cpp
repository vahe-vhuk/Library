#ifndef BOOK_CPP
#define BOOK_CPP

#include <iostream>
#include "headers/book.hpp"

namespace vhuk {

Book::Book(str title, int year, str author, str genre, int pages)
	:	Material(title, year)
	,	author{author}
	,	genre{genre}
	,	pages{pages}
{}

Book::Book(const Book& rhv)
	:	Material(rhv.title, rhv.year)
	,	author{rhv.author}
	,	genre{rhv.genre}
	,	pages{rhv.pages}
{}

str
Book::get_author() const
{
	return author;
}

str
Book::get_genre() const
{
	return genre;
}

int
Book::get_pages() const
{
	return pages;
}

void 
Book::display() const
{
	std::cout << "Type:   Book\n";
	std::cout << "Title:  " << title << "\n";
	std::cout << "Year:   " << year << "\n";
	std::cout << "Author: " << author << "\n";
	std::cout << "Genre:  " << genre << "\n";
	std::cout << "Pages:  " << pages << "\n";
}


}


#endif
