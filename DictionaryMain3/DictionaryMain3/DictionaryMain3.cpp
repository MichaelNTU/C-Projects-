// DictionaryMain3.cpp : Defines the entry point for the console application.
//
#pragma once
#include "stdafx.h"
#include "Dictionary3.h"
#include "List.h"
#include<iostream>
#include <fstream>

using namespace std;

//template<typename T, typename T2>
int main()
{
	//cout << "Hey!" << endl;
	Dictionary dict;
	int k = 31;
	string it = "Michael";
	dict.searchInsert();
	//dict.insert(k, it);
	//dict.remove(k);
	dict.testFunction(22);
	dict.testFunction(31);
	dict.testFunction(25);
	dict.testFunction(0);
    return 0;
}

