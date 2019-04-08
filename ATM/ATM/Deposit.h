#pragma once
// Deposit class definition. Represents a deposit transaction.
#ifndef DEPOSIT_H
#define DEPOSIT_H

#include "Transaction.h" // Transaction class definition
class Keypad; // forward declaration of class Keypad
class DepositSlot; // forward declaration of class DepositSlot

class Deposit : public Transaction
{
public:
	Deposit(int, Screen &, BankDatabase &, Keypad &, DepositSlot &);
	virtual void execute(); // perform the transaction
private:
	double amount; // amount to deposit
	Keypad &keypad; // reference to ATM's keypad
	DepositSlot &depositSlot; // reference to ATM's deposit slot
	double promptForDepositAmount() const; // get deposit amount from user
};
#endif