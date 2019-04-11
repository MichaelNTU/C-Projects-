#pragma once
// GradeBook class definition in a separate file from main.
#include <iostream> 
using std::cout;
using std::endl;

#include <string> // class GradeBook uses C++ standard string class
using std::string;

// GradeBook class definition
class GradeBook
{
public:
	// constructor initializes courseName with string supplied as argument
	GradeBook(string name)
	{
		setCourseName(name); // call set function to initialize courseName
	} // end GradeBook constructor

	  // function to set the course name
	void setCourseName(string name)
	{
		courseName = name; // store the course name in the object
	} // end function setCourseName

	  // function to get the course name
	string getCourseName()
	{
		return courseName; // return object's courseName
	} // end function getCourseName

	  // display a welcome message to the GradeBook user
	void displayMessage()
	{
		// call getCourseName to get the courseName
		cout << "Welcome to the grade book for\n" << getCourseName()
			<< "!" << endl;
	} // end function displayMessage
private:
	string courseName; // course name for this GradeBook
}; // end class GradeBook 