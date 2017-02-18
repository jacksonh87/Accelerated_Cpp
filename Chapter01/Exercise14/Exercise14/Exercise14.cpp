// Exercise14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// What about this one ? What if we change }} to }; } in the third line from the end ?
#include <iostream>
#include <string>
int main()
{
	{ const std::string s = "a string";
	std::cout << s << std::endl;
	{ const std::string s = "another string";
	// works: std::cout << s << std::endl; }}
	std::cout << s << std::endl; }; } // also works
	return 0;
}



