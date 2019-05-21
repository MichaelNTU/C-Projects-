// ClassAndOverloadingFunction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Demonstrating class PhoneNumber's overloaded stream insertion 
// and stream extraction operators.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "PhoneNumber.h"

int main()
{
	PhoneNumber phone; // create object phone

	cout << "Enter phone number in the form (123) 456-7890:" << endl;

	// cin >> phone invokes operator>> by implicitly issuing
	// the global function call operator>>( cin, phone )
	cin >> phone;

	cout << "The phone number entered was: ";

	// cout << phone invokes operator<< by implicitly issuing 
	// the global function call operator<<( cout, phone )
	cout << phone << endl;
	return 0;
} // end main