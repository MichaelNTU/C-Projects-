// ClassProjectSwitches.cpp : Defines the entry point for the console application.
//
// Create GradeBook object, input grades and display grade report.
#include "stdafx.h"
#include "GradeBook.h" // include definition of class GradeBook

int main()
{
	// create GradeBook object
	GradeBook myGradeBook("CS101 C++ Programming");

	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.inputGrades(); // read grades from user
	myGradeBook.displayGradeReport(); // display report based on grades
	return 0; // indicate successful termination
} // end main


