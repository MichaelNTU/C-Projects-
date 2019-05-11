#pragma once
// Definition of class CreateAndDestroy.
// Member functions defined in CreateAndDestroy.cpp.
#include <string>
using std::string;

#ifndef CREATE_H
#define CREATE_H

class CreateAndDestroy
{
public:
	CreateAndDestroy(int, string); // constructor
	~CreateAndDestroy(); // destructor
private:
	int objectID; // ID number for object
	string message; // message describing object
}; // end class CreateAndDestroy

#endif