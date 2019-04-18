// This is the cpp file for Booking 

#pragma once
#include"stdafx.h"
#include "BOOKING.h" // put the related header at the TOP of the list of includes
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

BOOKING::BOOKING(string, int, int)
{

}

BOOKING::BOOKING()
{

}


int BOOKING::getBookingFile()
{
	ifstream Infile;
	ofstream oufile;
	string First_Name;
	string Last_Name;
	string Room_Type;
	string Menu_Type;
	string n = "n";
	int Age = atoi(n.c_str());
	Infile.open("RoomFile.txt");
	oufile.open("RecordFile.txt", std::ifstream::app);

	cout << "Please Enter First Name:" << endl;
	cin >> First_Name;
	cout << "Please Enter Last Name:" << endl;
	cin >> Last_Name;
	do
	{
		cout << "Please Enter Room Type:" << endl;
		cin >> Room_Type;

	} while ((Room_Type != "Brompton") && (Room_Type != "GrandRoom") && (Room_Type != "ClubRoom") && (Room_Type != "Executive"));
	do
	{
		cout << "Please Enter Menu Type:" << endl;
		cin >> Menu_Type;

	} while ((Menu_Type != "Sundayroast") && (Menu_Type != "Faggots") && (Menu_Type != "Fishandchips") && (Menu_Type != "Cornsoup") && (Menu_Type != "Creamytomato"));
	
	
	do
	{
		cout << "Please Enter your Age between 1 and 120" << endl;
		cin >> Age;
		if (cin.fail())
		{
			cout << "Not a number " << endl;
			cout << "Please enter a number from 1 to 120, inclusive.\n";
			cin.clear();
			cin.ignore(100, '\n');
			cin >> Age;
		}

	} while (Age>120);

	while (!Infile.eof() && !oufile.eof())
	{
		Infile >> First_Name >> Last_Name >> Room_Type >> Menu_Type >> Age;
		oufile << "*********BOOKING CONFIRMATION*********" << endl;
		oufile << "First_Name     Last_Name         Room_Type     Menu_Type          Age" << endl;
		oufile << First_Name << "           " << Last_Name << "         " << Room_Type << "         " << Menu_Type << "        " << Age<<endl;
		cout << "*********BOOKING CONFIRMATION*************************" << endl;
		cout << "First_Name is:  " << First_Name << endl;
		cout << "Last_Name  is:  " << Last_Name << endl;
		cout << "Room_Type  is:  " << Room_Type << endl;
		cout << "Menu_Type  is:  " << Menu_Type << endl;
		cout << "Age        is:  " << Age << endl; break;

	}
	Infile.close();
	oufile.close();

	system("Pause");


	return 0;
}