// ClassTestProgram.cpp : Defines the entry point for the console application.
//
// Test program for class Analysis.
#include "stdafx.h"
#include "Analysis.h" // include definition of class Analysis

int main()
{
	Analysis application; // create Analysis object                      
	application.processExamResults(); // call function to process results
	return 0; // indicate successful termination
} // end main


