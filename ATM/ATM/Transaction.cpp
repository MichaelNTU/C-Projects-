// Member-function definitions for class Transaction.
#include "stdafx.h"
#include "Transaction.h" // Transaction class definition
#include "Screen.h" // Screen class definition
#include "BankDatabase.h" // BankDatabase class definition

// constructor initializes common features of all Transactions
Transaction::Transaction(int userAccountNumber, Screen &atmScreen,
	BankDatabase &atmBankDatabase)
	: accountNumber(userAccountNumber),
	screen(atmScreen),
	bankDatabase(atmBankDatabase)
{
	// empty body
} // end Transaction constructor

  // return account number 
int Transaction::getAccountNumber() const
{
	return accountNumber;
} // end function getAccountNumber

  // return reference to screen
Screen &Transaction::getScreen() const
{
	return screen;
} // end function getScreen

  // return reference to bank database
BankDatabase &Transaction::getBankDatabase() const
{
	return bankDatabase;
}