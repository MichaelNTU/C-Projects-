#pragma once
// Definition of class GradeBook that determines a class average.
// Member functions are defined in GradeBook.cpp
#include <string> // program uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook
{
public:
	GradeBook(string); // constructor initializes course name
	void setCourseName(string); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void displayMessage(); // display a welcome message
	void determineClassAverage(); // averages grades entered by the user
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook