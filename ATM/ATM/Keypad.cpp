// Member-function definition for class Keypad (the ATM's keypad).
#include "stdafx.h"
#include <iostream>
using std::cin;

#include "Keypad.h" // Keypad class definition

// return an integer value entered by user
int Keypad::getInput() const
{
	int input; // variable to store the input
	cin >> input; // we assume that user enters an integer
	return input; // return the value entered by user
}