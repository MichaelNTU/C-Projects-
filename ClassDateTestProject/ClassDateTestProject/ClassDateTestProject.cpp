// ClassDateTestProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Date class test program.
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h" // Date class definition

int main()
{
	Date d1; // defaults to January 1, 1900
	Date d2(12, 27, 1992); // December 27, 1992
	Date d3(0, 99, 8045); // invalid date

	cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3;
	cout << "\n\nd2 += 7 is " << (d2 += 7);

	d3.setDate(2, 28, 1992);
	cout << "\n\n  d3 is " << d3;
	cout << "\n++d3 is " << ++d3 << " (leap year allows 29th)";

	Date d4(7, 13, 2002);

	cout << "\n\nTesting the prefix increment operator:\n"
		<< "  d4 is " << d4 << endl;
	cout << "++d4 is " << ++d4 << endl;
	cout << "  d4 is " << d4;

	cout << "\n\nTesting the postfix increment operator:\n"
		<< "  d4 is " << d4 << endl;
	cout << "d4++ is " << d4++ << endl;
	cout << "  d4 is " << d4 << endl;
	return 0;
} // end main