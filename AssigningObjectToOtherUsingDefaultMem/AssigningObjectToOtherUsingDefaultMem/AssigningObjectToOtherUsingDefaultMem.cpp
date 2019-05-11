// AssigningObjectToOtherUsingDefaultMem.cpp : Defines the entry point for the console application.
// Demonstrating that class objects can be assigned
// to each other using default memberwise assignment.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h" // include definition of class Date from Date.h

int main()
{
	Date date1(7, 4, 2004);
	Date date2; // date2 defaults to 1/1/2000

	cout << "date1 = ";
	date1.print();
	cout << "\ndate2 = ";
	date2.print();

	date2 = date1; // default memberwise assignment

	cout << "\n\nAfter default memberwise assignment, date2 = ";
	date2.print();
	cout << endl;
	return 0;
} // end main