// Exercise10_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// ask for a person's name, and greet the person
#include <iostream>
#include <string>
int main()
{
	// ask for the person's name
	std::cout << "Please enter your first name: ";
	// read the name
	std::string name; // define variable "name" with type = string
	std::cin >> name; // reads what was typed and stores it in "name"
					  // write a greeting
	std::cout << "Hello, " << name << "!" << std::endl;
	return 0;
}
