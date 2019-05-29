// Complex class member-function definitions.
#include "stdafx.h"
#include <iostream>
using std::cout;

#include "Complex.h" // Complex class definition

// Constructor
Complex::Complex(double realPart, double imaginaryPart)
	: real(realPart),
	imaginary(imaginaryPart)
{
	// empty body
} // end Complex constructor

  // addition operator
Complex Complex::operator+(const Complex &operand2) const
{
	return Complex(real + operand2.real,
		imaginary + operand2.imaginary);
} // end function operator+

  // subtraction operator
Complex Complex::operator-(const Complex &operand2) const
{
	return Complex(real - operand2.real,
		imaginary - operand2.imaginary);
} // end function operator-

  // display a Complex object in the form: (a, b)
void Complex::print() const
{
	cout << '(' << real << ", " << imaginary << ')';
} // end function print