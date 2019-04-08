#pragma once
// Transaction abstract base class definition.
#ifndef TRANSACTION_H
#define TRANSACTION_H

class Screen; // forward declaration of class Screen
class BankDatabase; // forward declaration of class BankDatabase

class Transaction
{
public:
	// constructor initializes common features of all Transactions
	Transaction(int, Screen &, BankDatabase &);

	virtual ~Transaction() { } // virtual destructor with empty body

	int getAccountNumber() const; // return account number
	Screen &getScreen() const; // return reference to screen
	BankDatabase &getBankDatabase() const; // return reference to database

										   // pure virtual function to perform the transaction
	virtual void execute() = 0; // overridden in derived classes
private:
	int accountNumber; // indicates account involved
	Screen &screen; // reference to the screen of the ATM
	BankDatabase &bankDatabase; // reference to the account info database
};
#endif