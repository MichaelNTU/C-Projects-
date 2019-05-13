// Member-function definitions for class Increment demonstrate using a 
// member initializer to initialize a constant of a built-in data type.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Increment.h" // include definition of class Increment

// constructor 
Increment::Increment(int c, int i)
	: count(c), // initializer for non-const member
	increment(i) // required initializer for const member     
{
	// empty body
} // end constructor Increment

  // print count and increment values
void Increment::print() const
{
	cout << "count = " << count << ", increment = " << increment << endl;
} // end function print