// This is the Mune.h file, There will be deferent types of Menu to be order by customer

#pragma once
#include "stdafx.h"
// put the related header at the TOP of the list of includes
#include <string>
const int MAX_MENU = 5;

using namespace std;

class Menu
{
public:
	// see later for the bodies of the functions!
	Menu(string nMenu, string sCondition, double mNumber, double Price);
	Menu();
	int Load(ifstream& file_menu);
	int Save(ofstream& save_menu);
	void DisplayMenu();
private:
	string Name_of_Menu;
	string Serve_Cold_Hot;
	double Menu_Number;
	double Prices;
	int count_Menu;
};