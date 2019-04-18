
// Project Hotel.cpp : Defines the entry point for the console application.
//This system is design to output list of Menus, Rooms, make a reservation for room, make an order for meal, and then display staff file. And calculate wages and tax
#include "stdafx.h"
#include <iostream>
#include "MENU.h"
#include "ROOMS.h"
#include "BOOKING.h"
#include "STAFF.h"
#include <string>
#include <iomanip> 
#include <fstream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Menu Request_Meal[MAX_MENU];
	ROOMS TakeRoom[MAX_ROOM];
	BOOKING MyBooking;
	ifstream RoomFile;
	ifstream MenuFile;
	Staff Staff_Issure[MAX_STAFF];
	LowLevelStaff Lowlevel[MAX_STAFF];
	ifstream StaffFile;
	double hours = 0;
	double Unit = 0;
	int Password;
	Password = 1945;
	cout << "*****WELCOME TO TRENT HOTEL***********************" << endl; // Display the Heading on screen 
	cout << "	Make a selction:" << endl;
	cout << "	********Menu List*******Please Enter 0"<< endl;
	cout << "	*******Rooms List*******Please Enter 1"<< endl;
	cout << "	*******Booking**********Please Enter 2"<< endl;
	cout << "	*******Staff Record*****Please Enter 3"<< endl;
	cout << "	*******To Compare Prices on Internet*****Please Enter 4" << endl;
	cout << "	*******To View Your Booking*****Please Enter 5" << endl;
	cout << "	*******Help*****Please Enter 6" << endl;
	cout << "	***********EXIT*********Please Enter -1"<< endl;
	cout << "****HAVE YOUR CHIOCE******************************:"<<endl;
	int counter=0;
	cout << "Enter Number Between 0 and 6 or -1 to Exit" << endl; 
	while ((counter > 0) || (counter < 7))
	{
		cout << "Enter Your Chioce 0 to 6 :";
		cin >> counter;
		if (cin.fail())
		{
			cout << "Not a number " << endl;
			cout << "Please enter a number from 0 to 6, inclusive.\n";
			cin.clear();
			cin.ignore(100, '\n');
			cin >> counter;
		}
		switch (counter)
		{
		case 0:MenuFile.open("Menu_File.txt");//Open the file
			if (!MenuFile)// Check if the file is Okay
			{
				cout << "File can not be located" << endl;// print out message that file is not found
				return 1;
			}

			for (int i = 0; i<MAX_MENU; i++)// This loo go through every elementin the file 
			{
				Request_Meal[i].Load(MenuFile);// This Function is to Lord the file "MenuFile
			}
			MenuFile.close();// This Function close the file, is always advisable to close file after work 

			cout << "THIS IS MENU LIST: " << endl;
			cout << "   MENU TYPE            Cold/Hot          Number         Prices" << endl;// Display heading for Menu
			for (int i = 0; i<MAX_MENU; i++)//This loo go through every element in file to display it
			{
				Request_Meal[i].DisplayMenu();//This function is to display MenuList
			}
			if (counter == -1)break;
			break; // End of case 0
		
		case 1:cout << "*******Menu List********Please Enter 0" << endl;
			cout << "	*******Rooms List*******Please Enter 1" << endl;
			cout << "	*******Booking**********Please Enter 2" << endl;
			cout << "	*******Staff Record*****Please Enter 3" << endl;
			cout << "	*******To Compare Prices on Internet*****Please Enter 4" << endl;
			cout << "	*******To View Your Booking*****Please Enter 5" << endl;
			cout << "	*******Help*****Please Enter 6" << endl;
			cout << "	***********EXIT*********Please Enter -1" << endl;
			RoomFile.open("RoomsFileName.txt");// Open RoomFile
			if (!RoomFile)// Check if RoomFile is opened succesfulle
			{
				cout << "Oh dear, file not found" << endl; // Print out message if file not found
				return 1;
			}

			for (int i = 0; i<MAX_ROOM; i++)// Loop through every Element of RoomFile
			{
				TakeRoom[i].load(RoomFile);// Get every element of RoomFile
			}
			RoomFile.close();//lose RoomFile

			cout << "THIS IS ROOM LIST:" << endl;
			cout << "     ROOM TYPE       FUNITURE      ELECTRONIC            NUMBER       PRICES" << endl;// Print out header for Rooms
			for (int i = 0; i<MAX_ROOM; i++)//Loop through every element for display
			{
				TakeRoom[i].DisplayRooms();// Function to display Rooms
			}
			if (counter == -1)break;
			break;//end of case 1
			
		case 2:cout << "*******************BOOK NOW*************************" << endl;// Header to inform user to Book
				MyBooking.getBookingFile();break; // Function to get Booking 
			if (counter == -1)break;
			break;//end of case 2
		case 3:cout << "*******Menu List********Please Enter 0" << endl;
			cout << "	*******Rooms List*******Please Enter 1" << endl;
			cout << "	*******Booking**********Please Enter 2" << endl;
			cout << "	*******Staff Record*****Please Enter 3" << endl;
			cout << "	*******To Compare Prices on Internet*****Please Enter 4" << endl;
			cout << "	*******To View Your Booking*****Please Enter 5" << endl;
			cout << "	*******Help*****Please Enter 6" << endl;
			cout << "	***********EXIT*********Please Enter -1" << endl;
			do{
				cout << "Please Enter Password:" << endl;
				cin >> Password;
				if (cin.fail())
				{
					cout << "Not a number " << endl;
					cout << "Please enter a number";
					cin.clear();
					cin.ignore(100, '\n');
					cin >> Password;
				}

			} while (Password != 1945);
			
			StaffFile.open("staff_Record.txt");// Open Staff file
			if (!StaffFile)// Check if file is succesfully open
			{
				cout << "Oh dear, file invalid" << endl;// Print out message if file is not open
				return 1;
			}

			for (int i = 0; i<MAX_STAFF; i++)// Loop through every element in the file
			{
				Staff_Issure[i].Lord(StaffFile);// Lord function to get element of "StaffFile"
			}
			StaffFile.close(); // Close StaffFile
			
			cout << "THIS IS STAFF LIST:" << endl;
			cout << "     STAFF NAME     POSITION      GROSS,SALARYS     NI." << endl;// Print out Header for StaffList
			for (int i = 0; i<MAX_STAFF; i++)// loop through to be display on screen 
			{
				Staff_Issure[i].DisplayStaff();// Display Staff List  
			}
			cout << "CHECK YOUR TAX AND  WAGES " << endl;
			for (int i = 0; i<1; i++)
			{
				Lowlevel[i].Taxcalculator();
			}
			if (counter == -1)break;
			break; //end of case 3
		case 4:cout << "*******Menu List********Please Enter 0" << endl;
			cout << "	*******Rooms List*******Please Enter 1" << endl;
			cout << "	*******Booking**********Please Enter 2" << endl;
			cout << "	*******Staff Record*****Please Enter 3" << endl;
			cout << "	*******To Compare Prices on Internet*****Please Enter 4" << endl;
			cout << "	*******To View Your Booking*****Please Enter 5" << endl;
			cout << "	*******Help*****Please Enter 6" << endl;
			cout << "	***********EXIT*********Please Enter -1" << endl;
			system("start http://google.com?q=hotelsarova-rembrandthotel.com");
			break;//end of case 4
		case 5:cout << "********Menu List*******Please Enter 0" << endl;
			cout << "	*******Rooms List*******Please Enter 1" << endl;
			cout << "	*******Booking**********Please Enter 2" << endl;
			cout << "	*******Staff Record*****Please Enter 3" << endl;
			cout << "	*******To Compare Prices on Internet*****Please Enter 4" << endl;
			cout << "	*******To View Your Booking*****Please Enter 5" << endl;
			cout << "	*******Help*****Please Enter 6" << endl;
			cout << "	***********EXIT*********Please Enter -1" << endl;
			system("TYPE RecordFile.txt");
			cout << endl;
			break; // end of case 5
		case 6:cout << "*******Menu List********Please Enter 0" << endl;
			cout << "	*******Rooms List*******Please Enter 1" << endl;
			cout << "	*******Booking**********Please Enter 2" << endl;
			cout << "	*******Staff Record*****Please Enter 3" << endl;
			cout << "	*******To Compare Prices on Internet*****Please Enter 4" << endl;
			cout << "	*******To View Your Booking*****Please Enter 5" << endl;
			cout << "	*******Help*****Please Enter 6" << endl;
			cout << "	***********EXIT*********Please Enter -1" << endl;
			system("TYPE Help.txt");
			cout << endl;
			break; // end of case 6
		default:
			cout << "Error: number is out of range.\n";
		}
		
		if (counter == -1)break;
	}
	cout << "Goodbye." << endl;
	return 0;
}

