// This is the cpp file for Staff
#pragma once
#include "stdafx.h"
#include <fstream>
#include <string>
#include <iomanip>
#include "STAFF.h"
using namespace std;

Staff::Staff()
{


}
void Staff::Lord(ifstream& From_File)
{
	From_File >> Name >> Position >> Salarys >> NI;

}

void Staff::DisplayStaff()
{
	cout << setfill(' ') << setw(13) << Name << setfill(' ') << setw(15) << Position;
	cout << setfill(' ') << setw(15) << Salarys << setfill(' ') << setw(15) << NI << endl;

}

LowLevelStaff::LowLevelStaff()
{

}

double LowLevelStaff::Taxcalculator()
{
	do
	{
		cout << "Please Enter your Name :" << endl;
		cin >> Name;
	} while ((Name != "JoshiMatthew") && (Name != "WilliamDeck") && (Name != "MichaelShon"));
	double hours;
	cout << "Please Enter hours worked" << endl;
	cin >> hours;
	if (cin.fail())
	{
		cout << "Not a number " << endl;
		cout << "Please enter a number.\n";
		cin.clear();
		cin.ignore(100, '\n');
		cin >> hours;
	}
	double Unit;
	cout << "Please Enter Unit(Amount Paid/hour):" << endl;
	cin >> Unit;
	if (cin.fail())
	{
		cout << "Not a number " << endl;
		cout << "Please enter a number.\n";
		cin.clear();
		cin.ignore(100, '\n');
		cin >> Unit;
	}
	int Taxcode;
	cout << "Please Enter Taxcode; 10 if this is your first job or 20 if this is your second job:" << endl;
	cin >> Taxcode;
	if (cin.fail())
	{
		cout << "Not a number " << endl;
		cout << "Please enter a number.\n";
		cin.clear();
		cin.ignore(100, '\n');
		cin >> Taxcode;
	}
	double Wages;
	double Tax;
	double Netsalary;
	Wages = hours*Unit;
	Tax = Wages / 100 * Taxcode;
	Netsalary = Wages - Tax;
	cout << "STAFF RECORD:" << endl;
	cout <<"Name:                     "<<Name <<  endl;
	cout <<"Annual Tax is:            "<< Tax * 12<< endl;
	cout <<"Annual Netsalary is:      "<< Netsalary*12<< endl;
	cout << "Annual Gross Salary is:  "<< Netsalary * 12 + Tax * 12 << endl; 
	cout << "MonthlyTax is:           "<< Tax <<endl; 
	cout<< "Monthly Netsalary is:     "<< Netsalary << endl;
	cout << "Monthly Gross Salary is: "<< Tax + Netsalary << endl;
	return Netsalary;
}