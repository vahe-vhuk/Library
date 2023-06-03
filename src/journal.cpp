#ifndef JOURNAL_CPP
#define JOURNAL_CPP

#include <iostream>
#include "headers/journal.hpp"

namespace vhuk {

Journal::Journal(str title, int year, int volume, int issue, str subject)
	:	Material(title, year)
	,	volume{volume}
	,	issue{issue}
	,	subject{subject}
{}

Journal::Journal(const Journal& rhv)
	:	Material(rhv.title, rhv.year)
	,	volume{rhv.volume}
	,	issue{rhv.issue}
	,	subject{rhv.subject}
{}

int
Journal::get_volume() const
{
	return volume;
}

int
Journal::get_issue() const
{
	return issue;
}

str
Journal::get_subject() const
{
	return subject;
}

void                                                               
Journal::display() const                                               
{                             
	std::cout << "Type:     Journal\n";
    std::cout << "Title:    " << title << "\n";                 
    std::cout << "Year:     " << year << "\n";                  
    std::cout << "Volume:   " << volume << "\n";                
    std::cout << "Issue:    " << issue << "\n";                 
    std::cout << "Subject:  " << subject << "\n";                 
}                                                            


}


#endif
