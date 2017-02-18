// Exercise12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


int main()
{
	// Try to define the following two expressions to see if they're valid

	const std::string exclam = "!";
	// Tried this and it's valid

	//const std::string message = "Hello" + ", world" + exclam; //2
	//Tried the above and it wasn't valid. Can't concatenate a string literal and a string literal. 

	const std::string message = "Hello, world" + exclam;
	// Changed to this and it's valid

	std::cout << exclam << std::endl;
	std::cout << message << std::endl;
    return 0;
}

