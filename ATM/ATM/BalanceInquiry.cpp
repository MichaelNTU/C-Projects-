// Member-function definitions for class BalanceInquiry.
#include "stdafx.h"
#include "BalanceInquiry.h" // BalanceInquiry class definition
#include "Screen.h" // Screen class definition
#include "BankDatabase.h" // BankDatabase class definition

// BalanceInquiry constructor initializes base-class data members
BalanceInquiry::BalanceInquiry(int userAccountNumber, Screen &atmScreen,
	BankDatabase &atmBankDatabase)
	: Transaction(userAccountNumber, atmScreen, atmBankDatabase)
{
	// empty body
} // end BalanceInquiry constructor

  // performs transaction; overrides Transaction's pure virtual function
void BalanceInquiry::execute()
{
	// get references to bank database and screen
	BankDatabase &bankDatabase = getBankDatabase();
	Screen &screen = getScreen();

	// get the available balance for the current user's Account
	double availableBalance =
		bankDatabase.getAvailableBalance(getAccountNumber());

	// get the total balance for the current user's Account
	double totalBalance =
		bankDatabase.getTotalBalance(getAccountNumber());

	// display the balance information on the screen
	screen.displayMessageLine("\nBalance Information:");
	screen.displayMessage(" - Available balance: ");
	screen.displayDollarAmount(availableBalance);
	screen.displayMessage("\n - Total balance:     ");
	screen.displayDollarAmount(totalBalance);
	screen.displayMessageLine("");
}