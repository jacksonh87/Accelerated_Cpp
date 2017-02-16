// Exercise02.cpp : Defines the entry point for the console application.
// Need to write a program that prints "This(") is a quote, and this (\) is a backslash."

#include "stdafx.h"

#include <iostream>


int main()
{
	std::cout << "This(\") is a quote, and this (\) is a backslash." << std::endl;
	// Add a backslash before the " so it doesn't terminate the string
	return 0;
}

