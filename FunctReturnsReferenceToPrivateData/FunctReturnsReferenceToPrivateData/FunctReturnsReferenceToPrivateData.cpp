// FunctReturnsReferenceToPrivateData.cpp : Defines the entry point for the console application.
// Demonstrating a public member function that
// returns a reference to a private data member.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Time.h" // include definition of class Time

int main()
{
	Time t; // create Time object

			// initialize hourRef with the reference returned by badSetHour
	int &hourRef = t.badSetHour(20); // 20 is a valid hour

	cout << "Valid hour before modification: " << hourRef;
	hourRef = 30; // use hourRef to set invalid value in Time object t
	cout << "\nInvalid hour after modification: " << t.getHour();

	// Dangerous: Function call that returns
	// a reference can be used as an lvalue!
	t.badSetHour(12) = 74; // assign another invalid value to hour

	cout << "\n\n*************************************************\n"
		<< "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
		<< "t.badSetHour( 12 ) as an lvalue, invalid hour: "
		<< t.getHour()
		<< "\n*************************************************" << endl;
	return 0;
} // end main