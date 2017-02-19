// Exercise16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//What does the following program do if, when it asks you for input, you type two names
//(for example, Samuel Beckett) ? Predict the behavior before running the program, then try it.

//If you type two names it stores them in the buffer. When cout is used, it only gets the first one, then 
// the second one is still in the buffer. When cin is used again, it gets the second one. 

#include <iostream>
#include <string>
int main()
{
	std::cout << "What is your name? ";
	std::string name;
	std::cin >> name;
	std::cout << "Hello, " << name
		<< std::endl << "And what is yours? ";
	std::cin >> name;
	std::cout << "Hello, " << name
		<< "; nice to meet you too!" << std::endl;
	return 0;
}