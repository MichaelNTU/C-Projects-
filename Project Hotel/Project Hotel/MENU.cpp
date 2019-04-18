// This is the cpp for Menu
#pragma once
#include "stdafx.h"
#include "MENU.h"// put the related header at the TOP of the list of includes
//#include "Rooms.h" 
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

Menu::Menu(string nMenu, string sCondition, double mNumber, double Price)
{
	// store the parameter values for this object private data
	Name_of_Menu = nMenu;
	Serve_Cold_Hot = sCondition;
	Menu_Number = mNumber;
	Prices = Price;
}

Menu::Menu()
{
	Name_of_Menu = "Check file data";//this is to check if file is properly loaded 
}
int Menu::Load(ifstream& file_menu)
{
	file_menu >> Name_of_Menu >> Serve_Cold_Hot >> Menu_Number >> Prices;
	return 0;
}
int Menu::Save(ofstream& save_menu)
{
	return 0;//Not yet ready
}
void Menu::DisplayMenu()
{
	cout << setfill(' ') << setw(15) << Name_of_Menu << setfill(' ') << setw(15) << Serve_Cold_Hot;
	cout<< setfill(' ') << setw(15) << Menu_Number << setfill(' ') << setw(15) << Prices << endl;
	
}