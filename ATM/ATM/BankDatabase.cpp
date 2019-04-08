#include "stdafx.h"
#include "BankDatabase.h" // BankDatabase class definition
// BankDatabase default constructor initializes accounts
BankDatabase::BankDatabase()
{
	// create two Account objects for testing
	Account account1(12345, 54321, 1000.0, 1200.0);
	Account account2(98765, 56789, 200.0, 200.0);

	// add the Account objects to the vector accounts
	accounts.push_back(account1); // add account1 to end of vector
	accounts.push_back(account2); // add account2 to end of vector
} // end BankDatabase default constructor

  // retrieve Account object containing specified account number
Account * BankDatabase::getAccount(int accountNumber)
{
	// loop through accounts searching for matching account number
	for (size_t i = 0; i < accounts.size(); i++)
	{
		// return current account if match found
		if (accounts[i].getAccountNumber() == accountNumber)
			return &accounts[i];
	} // end for

	return NULL; // if no matching account was found, return NULL
} // end function getAccount

  // determine whether user-specified account number and PIN match
  // those of an account in the database
bool BankDatabase::authenticateUser(int userAccountNumber,
	int userPIN)
{
	// attempt to retrieve the account with the account number
	Account * const userAccountPtr = getAccount(userAccountNumber);

	// if account exists, return result of Account function validatePIN
	if (userAccountPtr != NULL)
		return userAccountPtr->validatePIN(userPIN);
	else
		return false; // account number not found, so return false
} // end function authenticateUser

  // return available balance of Account with specified account number
double BankDatabase::getAvailableBalance(int userAccountNumber)
{
	Account * const userAccountPtr = getAccount(userAccountNumber);
	return userAccountPtr->getAvailableBalance();
} // end function getAvailableBalance

  // return total balance of Account with specified account number
double BankDatabase::getTotalBalance(int userAccountNumber)
{
	Account * const userAccountPtr = getAccount(userAccountNumber);
	return userAccountPtr->getTotalBalance();
} // end function getTotalBalance

  // credit an amount to Account with specified account number
void BankDatabase::credit(int userAccountNumber, double amount)
{
	Account * const userAccountPtr = getAccount(userAccountNumber);
	userAccountPtr->credit(amount);
} // end function credit

  // debit an amount from of Account with specified account number
void BankDatabase::debit(int userAccountNumber, double amount)
{
	Account * const userAccountPtr = getAccount(userAccountNumber);
	userAccountPtr->debit(amount);
}