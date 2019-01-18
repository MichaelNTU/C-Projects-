#include "stdafx.h"
#include "Dictionary3.h"
#include "List.h"
#include<iostream>
#include <fstream>
using namespace std;

//template<typename T, typename T2>
Dictionary::Dictionary()
{
}

//template<typename T, typename T2>
void Dictionary::insert(Key kys, Item it)
{
	List *Node = nullptr;
	Node->insertRec(kys,it,list);

	
}

//template<typename T, typename T2>
string * Dictionary::lookup(Key kys)
{
	
	List *node;
	node = this->list;
	if (node == nullptr)
	{
		cout << "debuge program" << endl;
		return nullptr;
	}
	else
	{
		//cout << "further debuge program" << endl;
		std::string* result = node->lookupRec(kys);
		return result;
		

	}
	return nullptr;
}

//template<typename T, typename T2>
void Dictionary::remove(Key key)
{
	string items = nullptr;
	List*node = this->list;
	//list = listnode = nullptr;
	if (list == nullptr)
	{
		cout << "No key to remove" << endl;

	}
	else
	{
		node->removeRec(key, items);
	}
}
//template<typename T, typename T2>
void Dictionary::searchInsert()
{
	//int key;
	string items;
	int key;
	//List*list, *listnode;
	//list = listnode = nullptr;
	ifstream myfile("Dictionary3-test-data.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> key;
			myfile >> items;
			this->insert(key, items);
			//listnode->insert(T, T2);
		}

		myfile.close();
	}

	else cout << "Unable to open file";
}
//template<typename T, typename T2>
int Dictionary::testFunction(int k)
{
	//int k = NULL;
	string* testItem = nullptr;
	testItem = lookup(k);
	if (testItem)
	{
		cout << *testItem << endl;

	}
	else
	{
		cout << "Item not found" << endl;
	}
	return k;
	//return 0;
}
