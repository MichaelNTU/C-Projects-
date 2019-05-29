// TestingClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
// Testing class CommissionEmployee.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h" // CommissionEmployee class definition

int main()
{
	// instantiate a CommissionEmployee object
	CommissionEmployee employee(
		"Sue", "Jones", "222-22-2222", 10000, .06);

	// set floating-point output formatting
	cout << fixed << setprecision(2);

	// get commission employee data
	cout << "Employee information obtained by get functions: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate() << endl;

	employee.setGrossSales(8000); // set gross sales
	employee.setCommissionRate(.1); // set commission rate

	cout << "\nUpdated employee information output by print function: \n"
		<< endl;
	employee.print(); // display the new employee information

					  // display the employee's earnings
	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

	return 0;
} // end main
