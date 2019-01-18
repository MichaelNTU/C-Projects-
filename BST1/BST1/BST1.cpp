#include "stdafx.h"
#include "BST1.h"
#include "Node1.h"
#include<cstdio>
#include<string>
#include <fstream>
#include <iostream>
#include <iterator> 
#include <vector>;
//std::iterator<string>it;
//vector<string>::iterator it;
using namespace std;

void BST::insert(int k, std::string i)
{
	
		BST::Node::insertRec(k, i, root);
}

void BST::remove(int ks)
{
	string items;
	Node*n;
	if (root ==nullptr)
	{
		cout << "No key to remove" << endl;

	}
	else
	{
		root->removeRec(ks,items,n);
	}
}

std::string * BST::lookup(int k)
{
	Node* node = this->root;
	if (node == nullptr)
	{
		return nullptr;
	}
	else
	{
		std::string* result = node->lookupRec(k);
		return result;
		
	}
	
}

void BST::insertSearch()
{
	//int k = 22;
	//string line;
	int keys;
	string items;
	ifstream myfile("BST-test-data.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			myfile >> keys;
			myfile >> items;
			this->insert(keys, items);
		}
		
		myfile.close();
	}

	else cout << "Unable to open file";
	
}

void BST::testFunction(int k)
{
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
}
