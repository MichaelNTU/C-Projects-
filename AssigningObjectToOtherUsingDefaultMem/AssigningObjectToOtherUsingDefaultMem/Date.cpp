// Member-function definitions for class Date.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h" // include definition of class Date from Date.h

// Date constructor (should do range checking)
Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
} // end constructor Date

  // print Date in the format mm/dd/yyyy
void Date::print()
{
	cout << month << '/' << day << '/' << year;
} // end function print