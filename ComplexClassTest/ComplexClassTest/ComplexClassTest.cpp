// ComplexClassTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Complex class test program.
#include <iostream>
using std::cout;
using std::endl;

#include "Complex.h"

int main()
{
	Complex x;
	Complex y(4.3, 8.2);
	Complex z(3.3, 1.1);

	cout << "x: ";
	x.print();
	cout << "\ny: ";
	y.print();
	cout << "\nz: ";
	z.print();

	x = y + z;
	cout << "\n\nx = y + z:" << endl;
	x.print();
	cout << " = ";
	y.print();
	cout << " + ";
	z.print();

	x = y - z;
	cout << "\n\nx = y - z:" << endl;
	x.print();
	cout << " = ";
	y.print();
	cout << " - ";
	z.print();
	cout << endl;
	return 0;
} // end main