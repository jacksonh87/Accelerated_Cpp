// Exercise13.cpp : Defines the entry point for the console application.
// Test if this program is valid or not

#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	{ const std::string s = "a string";
	std::cout << s << std::endl; }
	{ const std::string s = "another string";
	std::cout << s << std::endl; }

	// The program defines a string s, prints it out, then redefines s and re-prints
	// it out. It works because it is defined each time in curly braces. The variable
	// only exists within the curly braces.

	return 0;
}