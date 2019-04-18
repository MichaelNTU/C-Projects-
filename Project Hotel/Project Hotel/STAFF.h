//This is Staff file and it detail of every staff.

#pragma once
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
const int MAX_STAFF = 5;

class Staff
{
public:
	Staff(string aName, string aPosition, double Salary, string NationalInsurranceNumber) :
		Name(), Position(), Salarys(), NI(){}
	Staff();
	void virtual Lord(ifstream& From_File);
	void virtual DisplayStaff();
	double Taxcalculator();

protected:
	string Name;
	string Position;
	double Salarys;
	string NI;
	int StaffFile;
};

class LowLevelStaff : public Staff
{
public:
	LowLevelStaff(string Name, string Position, double Salarys, string NI)
		:Staff(Name, Position, Salarys, NI), Time(), counter(), Salary(){}
	LowLevelStaff();
	double Taxcalculator();

protected:
	double Time;
	int counter;
	int Salary;
};