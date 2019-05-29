#pragma once
// Complex class definition.
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex(double = 0.0, double = 0.0); // constructor
	Complex operator+(const Complex &) const; // addition
	Complex operator-(const Complex &) const; // subtraction
	void print() const; // output
private:
	double real; // real part
	double imaginary; // imaginary part
}; // end class Complex

#endif