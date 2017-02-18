// Exercise10_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>
int main()
{
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;
	// build the message that we intend to write

	//if we say that a variable is const, we must initialize it then and there, because we
	//won't have the opportunity later. Note also that the value that we use to initialize the const
	//variable need not itself be a constant.In this example, we won't know the value of
	//greeting until after we have read a value into name, which obviously can't happen until
	//we run the program.For this reason, we cannot say that name is const, because we
	//change its value by reading into it.

	const std::string greeting = "Hello, " + name + "!"; // make a new string var out of name
	// build the second and fourth lines of the output
	const std::string spaces(greeting.size(), ' '); // generates a row of ' ' as long as the greeting
	const std::string second = "* " + spaces + " *"; // adds an * to either side of the row of spaces
	// build the first and fifth lines of the output
	const std::string first(second.size(), '*'); // generates a row of * as long as the spaces with an * on either side
	// write it all out:
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	return 0;
}