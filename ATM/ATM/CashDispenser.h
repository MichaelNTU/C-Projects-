#pragma once
// CashDispenser class definition. Represents the ATM's cash dispenser.
#ifndef CASH_DISPENSER_H
#define CASH_DISPENSER_H

class CashDispenser
{
public:
	CashDispenser(); // constructor initializes bill count to 500

					 // simulates dispensing of specified amount of cash
	void dispenseCash(int);

	// indicates whether cash dispenser can dispense desired amount
	bool isSufficientCashAvailable(int) const;
private:
	const static int INITIAL_COUNT = 500;
	int count; // number of $20 bills remaining 
};
#endif
