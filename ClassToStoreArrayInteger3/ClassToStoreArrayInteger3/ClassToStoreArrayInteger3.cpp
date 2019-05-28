// ClassToStoreArrayInteger3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Driver for simple class Array.
#include <iostream>
using std::cout;
using std::endl;

#include "Array.h"

void outputArray(const Array &); // prototype

int main()
{
	Array integers1(7); // 7-element array
	outputArray(integers1); // output Array integers1
	outputArray(3); // convert 3 to an Array and output Array’s contents
	return 0;
}  // end main

   // print Array contents
void outputArray(const Array &arrayToOutput)
{
	cout << "The Array received has " << arrayToOutput.getSize()
		<< " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray