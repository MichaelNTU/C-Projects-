// This is the Mune.h file, There will be deferent types of Menu to be order by customer

#pragma once
#include "stdafx.h"
#include <string>
using namespace std;
const int MAX_ROOM = 4;

class ROOMS
{
public:
	ROOMS(string nName, string sFuniture, string nElectronic, double mNumber, double Prices);
	ROOMS();
	void load(ifstream& Room_file);
	void save(ifstream& save_room);
	void DisplayRooms();
private:
	string Name;
	string Funiture;
	string Electronic;
	double Number;
	double Price;
	int count;
};