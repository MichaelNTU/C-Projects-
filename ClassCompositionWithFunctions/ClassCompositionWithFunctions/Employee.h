#pragma once
// Employee class definition.
// Member functions defined in Employee.cpp.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Date.h" // include Date class definition

class Employee
{
public:
	Employee(const char * const, const char * const,
		const Date &, const Date &);
	void print() const;
	~Employee(); // provided to confirm destruction order
private:
	char firstName[25];
	char lastName[25];
	const Date birthDate; // composition: member object
	const Date hireDate; // composition: member object
}; // end class Employee

#endif