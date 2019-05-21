// HidingAClassPrivateDataWithProxyClass.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
// Hiding a class’s private data with a proxy class.
#include <iostream>
using std::cout;
using std::endl;

#include "Interface.h" // Interface class definition

int main()
{
	Interface i(5); // create Interface object

	cout << "Interface contains: " << i.getValue()
		<< " before setValue" << endl;

	i.setValue(10);

	cout << "Interface contains: " << i.getValue()
		<< " after setValue" << endl;
	return 0;
} // end main