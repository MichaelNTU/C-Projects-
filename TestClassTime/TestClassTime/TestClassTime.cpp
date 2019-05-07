// TestClassTime.cpp : Defines the entry point for the console application.
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Time.h" // include definition of class Time from Time.h

int main()
{
	Time t; // instantiate object t of class Time

			// output Time object t's initial values
	cout << "The initial universal time is ";
	t.printUniversal(); // 00:00:00
	cout << "\nThe initial standard time is ";
	t.printStandard(); // 12:00:00 AM

	t.setTime(13, 27, 6); // change time

						  // output Time object t's new values
	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal(); // 13:27:06
	cout << "\nStandard time after setTime is ";
	t.printStandard(); // 1:27:06 PM

	t.setTime(99, 99, 99); // attempt invalid settings

						   // output t's values after specifying invalid values
	cout << "\n\nAfter attempting invalid settings:"
		<< "\nUniversal time: ";
	t.printUniversal(); // 00:00:00
	cout << "\nStandard time: ";
	t.printStandard(); // 12:00:00 AM
	cout << endl;
	return 0;
} // end main