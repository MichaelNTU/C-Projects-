// FunctionTemplate.cpp : Defines the entry point for the console application.
//
// Function template maximum test program.
#include "stdafx.h";
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "maximum.h" // include definition of function template maximum

int main()
{
	// demonstrate maximum with int values
	int int1, int2, int3;

	cout << "Input three integer values: ";
	cin >> int1 >> int2 >> int3;

	// invoke int version of maximum
	cout << "The maximum integer value is: "
		<< maximum(int1, int2, int3);

	// demonstrate maximum with double values
	double double1, double2, double3;

	cout << "\n\nInput three double values: ";
	cin >> double1 >> double2 >> double3;

	// invoke double version of maximum
	cout << "The maximum double value is: "
		<< maximum(double1, double2, double3);

	// demonstrate maximum with char values
	char char1, char2, char3;

	cout << "\n\nInput three characters: ";
	cin >> char1 >> char2 >> char3;

	// invoke char version of maximum
	cout << "The maximum character value is: "
		<< maximum(char1, char2, char3) << endl;
	return 0; // indicates successful termination
} // end main