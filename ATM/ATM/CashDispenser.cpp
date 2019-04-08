// Member-function definitions for class CashDispenser.
#include "stdafx.h"
#include "CashDispenser.h" // CashDispenser class definition
// CashDispenser default constructor initializes count to default
CashDispenser::CashDispenser()
{
	count = INITIAL_COUNT; // set count attribute to default
} // end CashDispenser default constructor

  // simulates dispensing of specified amount of cash; assumes enough cash 
  // is available (previous call to isSufficientCashAvailable returned true)
void CashDispenser::dispenseCash(int amount)
{
	int billsRequired = amount / 20; // number of $20 bills required
	count -= billsRequired; // update the count of bills
} // end function dispenseCash

  // indicates whether cash dispenser can dispense desired amount
bool CashDispenser::isSufficientCashAvailable(int amount) const
{
	int billsRequired = amount / 20; // number of $20 bills required

	if (count >= billsRequired)
		return true; // enough bills are available
	else
		return false; // not enough bills are available
}