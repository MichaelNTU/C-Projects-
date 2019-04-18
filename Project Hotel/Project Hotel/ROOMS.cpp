// This is the cpp file for Rooms
#pragma once
#include "stdafx.h"
#include "RooMs.h" 
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


ROOMS::ROOMS(string nName, string sFuniture, string nElectronic, double mNumber, double Prices)
{
	Name = nName;
	Funiture = sFuniture;
	Electronic = nElectronic;
	Number = mNumber;
	Price = Prices;

}

ROOMS::ROOMS()
{

	count = 0;
}
void ROOMS::load(ifstream& Room_file)
{
	Room_file >> Name >> Funiture >> Electronic >> Number >> Price;

}

void ROOMS::DisplayRooms()
{
	cout << setfill(' ') << setw(15) << Name << setfill(' ') << setw(15) << Funiture;
	cout << setfill(' ') << setw(15) << Electronic << setfill(' ') << setw(15) << Number << setfill(' ') << setw(15) << Price << endl;
	
}
