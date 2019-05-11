#pragma once
// Declaration of class Date.
// Member functions are defined in Date.cpp

// prevent multiple inclusions of header file
#ifndef DATE_H
#define DATE_H

// class Date definition
class Date
{
public:
	Date(int = 1, int = 1, int = 2000); // default constructor
	void print();
private:
	int month;
	int day;
	int year;
}; // end class Date

#endif