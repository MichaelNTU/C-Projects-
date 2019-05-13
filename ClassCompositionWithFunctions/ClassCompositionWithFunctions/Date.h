#pragma once
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H

class Date
{
public:
	Date(int = 1, int = 1, int = 1900); // default constructor
	void print() const; // print date in month/day/year format
	~Date(); // provided to confirm destruction order
private:
	int month; // 1-12 (January-December)
	int day; // 1-31 based on month
	int year; // any year

			  // utility function to check if day is proper for month and year
	int checkDay(int) const;
}; // end class Date

#endif