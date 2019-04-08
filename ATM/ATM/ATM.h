//#pragma once
// ATM class definition. Represents an automated teller machine.
#ifndef ATM_H
#define ATM_H

#include "Screen.h" // Screen class definition
#include "Keypad.h" // Keypad class definition
#include "CashDispenser.h" // CashDispenser class definition
#include "DepositSlot.h" // DepositSlot class definition
#include "BankDatabase.h" // BankDatabase class definition
class Transaction; // forward declaration of class Transaction

class ATM
{
public:
	ATM(); // constructor initializes data members
	void run(); // start the ATM
private:
	bool userAuthenticated; // whether user is authenticated
	int currentAccountNumber; // current user's account number
	Screen screen; // ATM's screen
	Keypad keypad; // ATM's keypad
	CashDispenser cashDispenser; // ATM's cash dispenser
	DepositSlot depositSlot; // ATM's deposit slot
	BankDatabase bankDatabase; // account information database

							   // private utility functions
	void authenticateUser(); // attempts to authenticate user
	void performTransactions(); // performs transactions
	int displayMainMenu() const; // displays main menu

								 // return object of specified Transaction derived class
	Transaction *createTransaction(int);
};
#endif