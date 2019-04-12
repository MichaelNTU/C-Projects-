#pragma once
// GradeBook class definition presents the public interface of  
// the class. Member-function definitions appear in GradeBook.cpp.
#include <string> // program uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook
{
public:
	GradeBook(string); // constructor that initializes a GradeBook object
	void setCourseName(string); // function that sets the course name
	string getCourseName(); // function that gets the course name
	void displayMessage(); // function that displays a welcome message
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook