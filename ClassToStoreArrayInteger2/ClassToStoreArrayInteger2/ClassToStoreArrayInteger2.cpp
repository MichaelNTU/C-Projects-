// ClassToStoreArrayInteger2.cpp : Defines the entry point for the console application.
//


// Driver for simple class Array.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;

#include "Array.h"

void outputArray(const Array &); // prototype

int main()
{
	Array integers1(7); // 7-element array
	outputArray(integers1); // output Array integers1
	//outputArray(3); // convert 3 to an Array and output Array’s contents
	outputArray(Array(3)); // explicit single-argument constructor call
	return 0;
}  // end main

   // print array contents
void outputArray(const Array &arrayToOutput)
{
	cout << "The Array received has " << arrayToOutput.getSize()
		<< " elements. The contents are:\n" << arrayToOutput << endl;
} // end outputArray