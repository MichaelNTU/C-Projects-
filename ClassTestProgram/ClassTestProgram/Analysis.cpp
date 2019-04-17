// Member-function definitions for class Analysis that 
// analyzes examination results.
#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// include definition of class Analysis from Analysis.h
#include "Analysis.h" 

// process the examination results of 10 students
void Analysis::processExamResults()
{
	// initializing variables in declarations 
	int passes = 0; // number of passes       
	int failures = 0; // number of failures   
	int studentCounter = 1; // student counter
	int result; // one exam result (1 = pass, 2 = fail)

				// process 10 students using counter-controlled loop
	while (studentCounter <= 10)
	{
		// prompt user for input and obtain value from user
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> result; // input result

					   // if...else nested in while                           
		if (result == 1)          // if result is 1,         
			passes = passes + 1;     // increment passes;       
		else                        // else result is not 1, so
			failures = failures + 1; // increment failures      

									 // increment studentCounter so loop eventually terminates
		studentCounter = studentCounter + 1;
	} // end while 

	  // termination phase; display number of passes and failures
	cout << "Passed " << passes << "\nFailed " << failures << endl;

	// determine whether more than eight students passed
	if (passes > 8)
		cout << "Raise tuition " << endl;
} // end function processExamResults