#pragma once
// BalanceInquiry class definition. Represents a balance inquiry.
#ifndef BALANCE_INQUIRY_H
#define BALANCE_INQUIRY_H

#include "Transaction.h" // Transaction class definition

class BalanceInquiry : public Transaction
{
public:
	BalanceInquiry(int, Screen &, BankDatabase &); // constructor
	virtual void execute(); // perform the transaction
};
#endif