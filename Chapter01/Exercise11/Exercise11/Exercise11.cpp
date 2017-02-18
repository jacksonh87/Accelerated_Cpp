// Exercise11.cpp : Defines the entry point for the console application.
//

// To test if the definitions below are valid, first I will define them and then 
// write them to the console
#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
	//This is a valid definition
	const std::string hello = "Hello";
	//This is also a valid definition
	const std::string message = hello + ", world" + "!";
	std::cout << hello << std::endl;
	std::cout << message << std::endl;
    return 0;
}

