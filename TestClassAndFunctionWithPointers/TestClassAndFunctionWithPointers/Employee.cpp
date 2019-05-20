// Member-function definitions for class Employee.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // strlen and strcpy prototypes
using std::strlen;
using std::strcpy;

#include "Employee.h" // Employee class definition 

// define and initialize static data member at file scope
int Employee::count = 0;

// define static member function that returns number of 
// Employee objects instantiated (declared static in Employee.h)
int Employee::getCount()
{
	return count;
} // end static function getCount

  // constructor dynamically allocates space for first and last name and 
  // uses strcpy to copy first and last names into the object
Employee::Employee(const char * const first, const char * const last)
{
	firstName = new char[strlen(first) + 1];
	strcpy(firstName, first);

	lastName = new char[strlen(last) + 1];
	strcpy(lastName, last);

	count++; // increment static count of employees

	cout << "Employee constructor for " << firstName
		<< ' ' << lastName << " called." << endl;
} // end Employee constructor

  // destructor deallocates dynamically allocated memory
Employee::~Employee()
{
	cout << "~Employee() called for " << firstName
		<< ' ' << lastName << endl;

	delete[] firstName; // release memory
	delete[] lastName; // release memory

	count--; // decrement static count of employees
} // end ~Employee destructor

  // return first name of employee
const char *Employee::getFirstName() const
{
	// const before return type prevents client from modifying
	// private data; client should copy returned string before
	// destructor deletes storage to prevent undefined pointer
	return firstName;
} // end function getFirstName

  // return last name of employee
const char *Employee::getLastName() const
{
	// const before return type prevents client from modifying
	// private data; client should copy returned string before
	// destructor deletes storage to prevent undefined pointer
	return lastName;
} // end function getLastName