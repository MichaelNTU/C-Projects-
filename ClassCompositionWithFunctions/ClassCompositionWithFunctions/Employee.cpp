// Member-function definitions for class Employee.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // strlen and strncpy prototypes
using std::strlen;
using std::strncpy;

#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects birthDate and hireDate 
// [Note: This invokes the so-called "default copy constructor" which the 
// C++ compiler provides implicitly.]   
Employee::Employee(const char * const first, const char * const last,
	const Date &dateOfBirth, const Date &dateOfHire)
	: birthDate(dateOfBirth), // initialize birthDate
	hireDate(dateOfHire) // initialize hireDate
{
	// copy first into firstName and be sure that it fits
	int length = strlen(first);
	length = (length < 25 ? length : 24);
	strncpy(firstName, first, length);
	firstName[length] = '\0';

	// copy last into lastName and be sure that it fits
	length = strlen(last);
	length = (length < 25 ? length : 24);
	strncpy(lastName, last, length);
	lastName[length] = '\0';

	// output Employee object to show when constructor is called
	cout << "Employee object constructor: "
		<< firstName << ' ' << lastName << endl;
} // end Employee constructor

  // print Employee object
void Employee::print() const
{
	cout << lastName << ", " << firstName << "  Hired: ";
	hireDate.print();
	cout << "  Birthday: ";
	birthDate.print();
	cout << endl;
} // end function print

  // output Employee object to show when its destructor is called
Employee::~Employee()
{
	cout << "Employee object destructor: "
		<< lastName << ", " << firstName << endl;
} // end ~Employee destructor