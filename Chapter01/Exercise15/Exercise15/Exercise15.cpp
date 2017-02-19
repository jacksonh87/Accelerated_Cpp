// Exercise15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Is this program valid ? If so, what does it do ? If not, say why not, and rewrite it to be
//valid.
#include <iostream>
#include <string>
// The following does NOT work because inside second the curly braces s is not defined
//int main()
//{
//	{ std::string s = "a string";
//	{ std::string x = s + ", really";
//	std::cout << s << std::endl; }
//	std::cout << x << std::endl;
//	}
//	return 0;
//}
int main()
{
	// Changed to have the whole lot in one set of braces and it works now
	{ std::string s = "a string";
	std::string x = s + ", really";
	std::cout << s << std::endl; 
	std::cout << x << std::endl;
	};
	return 0;
}