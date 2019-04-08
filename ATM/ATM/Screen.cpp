// Member-function definitions for class Screen.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Screen.h" // Screen class definition

// output a message without a newline
void Screen::displayMessage(string message) const
{
	cout << message;
} // end function displayMessage

  // output a message with a newline
void Screen::displayMessageLine(string message) const
{
	cout << message << endl;
} // end function displayMessageLine

  // output a dollar amount
void Screen::displayDollarAmount(double amount) const
{
	cout << fixed << setprecision(2) << "$" << amount;
}