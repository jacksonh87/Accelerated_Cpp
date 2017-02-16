// HelloWorld.cpp : Defines the entry point for the console application.
// note that "//" is for comments





#include "stdafx.h"


#include <iostream>
// Add part of the standard library called "iostream". Angle brackets refer to standard header. 
int main()
// A function is a piece of program that has a name, and that another part of the program can
// call, or cause to run. Every C++ program must contain a function named main.When we
// ask the C++ implementation to run a program, it does so by calling this function.
// We are defining a function named main that returns a value of type int. Here,
// int is the name that the core language uses to describe integers.The parentheses after
// main enclose the parameters that our function receives from the implementation.In this
//particular example, there are no parameters, so there is nothing between the parentheses.

	// We continue our definition of the main function by following the parentheses with a
	// sequence of statements enclosed in curly braces
	//In C++, braces tell the implementation to treat whatever appears between them as a unit.
	//In this example, the left brace marks the beginning of the statements in our main function,
	//and the right brace marks their end.In other words, the braces indicate that all the
	//statements between them are part of the same function.
	//When there are two or more statements within braces, as there are in this function, the
	//implementation executes them in the order in which they appear.
{

	//The first statement inside the braces does our program's real work
	//This statement uses the standard library's output operator, <<, to write Hello, world!
	//on the standard output, and then to write the value of std::endl.
	//Preceding a name by std::indicates that the name is part of a namespace named std.A
	//namespace is a collection of related names; the standard library uses std to contain all the
	//names that it defines.So, for example, the iostream standard header defines the names
	//cout and endl, and we refer to these names as std::cout and std::endl.
	//The name std::cout refers to the standard output stream, which is whatever facility the
	//C++ implementation uses for ordinary output from programs.In a typical C++
	//implementation under a windowing operating system, std::cout will denote the window
	//that the implementation associates with the program while it is running.Under such a
	//system, the output written to std::cout will appear in the associated window.
	//Writing the value of std::endl ends the current line of output, so that if this program were
	//to produce any more output, that output would appear on a new line.
	std::cout << "Hello, world!" << std::endl;


	//A return statement ends execution of the function in which it appears, and passes the value that appears
	//between the return and the semicolon(0 in this example) back to the program that called
	//the function that is returning.The value that is returned must have a type that is
	//appropriate for the type that the function says it will return.In the case of main, the return
	//type is int and the program to which main returns is the C++ implementation itself.
	//Therefore, a return from main must include an integer - valued expression, which is passed
	//back to the implementation.
	//Of course, there may be more than one point at which it might make sense to terminate a
	//program; such a program may have more than one return statement.If the definition of a
	//function promises that the function returns a value of a particular type, then every return
	//statement in the function must return a value of an appropriate type.
	return 0;
}