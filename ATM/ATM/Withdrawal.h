#pragma once
// Withdrawal class definition. Represents a withdrawal transaction.
#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Transaction.h" // Transaction class definition
class Keypad; // forward declaration of class Keypad
class CashDispenser; // forward declaration of class CashDispenser

class Withdrawal : public Transaction
{
public:
	Withdrawal(int, Screen &, BankDatabase &, Keypad &, CashDispenser &);
	virtual void execute(); // perform the transaction
private:
	int amount; // amount to withdraw
	Keypad &keypad; // reference to ATM's keypad
	CashDispenser &cashDispenser; // reference to ATM's cash dispenser
	int displayMenuOfAmounts() const; // display the withdrawal menu
}; 
#endif
