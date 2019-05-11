#pragma once
// Declaration of class Time.
// Member functions defined in Time.cpp

// prevent multiple inclusions of header file
#ifndef TIME_H  
#define TIME_H 

class Time
{
public:
	Time(int = 0, int = 0, int = 0);
	void setTime(int, int, int);
	int getHour();
	int &badSetHour(int); // DANGEROUS reference return
private:
	int hour;
	int minute;
	int second;
}; // end class Time

#endif