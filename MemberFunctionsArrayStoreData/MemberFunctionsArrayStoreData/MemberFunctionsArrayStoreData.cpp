// MemberFunctionsArrayStoreData.cpp : Defines the entry point for the console application.
// Creates GradeBook object using an array of grades.
#include "stdafx.h"
#include "GradeBook.h" // GradeBook class definition

// function main begins program execution
int main()
{
	// array of student grades
	int gradesArray[GradeBook::students] =
	{ 87, 68, 94, 100, 83, 78, 85, 91, 76, 87 };

	GradeBook myGradeBook(
		"CS101 Introduction to C++ Programming", gradesArray);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
	return 0;
} // end main

