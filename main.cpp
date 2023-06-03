#include <iostream>
#include "headers/library.hpp"

int main()
{
	
	vhuk::DVD ob("vahe", 1245, "sahakyan", 300);
	vhuk::Book obj("vahe2", 541, "saha", "drama", 255);
	vhuk::Journal obje("vahe3", 2014, 45, 45, "Nokol");

	vhuk::Library lib(obj, obje);

	lib.append(ob);

	//lib.append(ob);


	auto j = lib.borrow("vahe");

	lib.display_list();

	j->display();



	return 0;
}

