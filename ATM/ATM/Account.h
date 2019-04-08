#pragma once
// Account class definition. Represents a bank account.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(int, int, double, double); // constructor sets attributes
	bool validatePIN(int) const; // is user-specified PIN correct?
	double getAvailableBalance() const; // returns available balance
	double getTotalBalance() const; // returns total balance
	void credit(double); // adds an amount to the Account balance
	void debit(double); // subtracts an amount from the Account balance
	int getAccountNumber() const; // returns account number
private:
	int accountNumber; // account number
	int pin; // PIN for authentication
	double availableBalance; // funds available for withdrawal
	double totalBalance; // funds available + funds waiting to clear
};
#endif