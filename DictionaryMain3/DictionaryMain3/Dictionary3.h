#pragma once
#include<string>
#include<iostream>
#include "List.h"

//template<typename T, typename T2>
class Dictionary
{
public:
	Dictionary();

	using Key = int;
	using Item = std::string;

	void insert(Key,Item);
	string* lookup(Key);
	void remove(Key);
	void searchInsert();
	int testFunction(int);
private:
	//class List;
	
		List* list = nullptr;
	
	
};
