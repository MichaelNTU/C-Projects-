#pragma once
// Header file for class Implementation

class Implementation
{
public:
	// constructor
	Implementation(int v)
		: value(v) // initialize value with v
	{
		// empty body
	} // end constructor Implementation

	  // set value to v
	void setValue(int v)
	{
		value = v; // should validate v
	} // end function setValue

	  // return value 
	int getValue() const
	{
		return value;
	} // end function getValue
private:
	int value; // data that we would like to hide from the client
}; // end class Implementation