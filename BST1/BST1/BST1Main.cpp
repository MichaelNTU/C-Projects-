// BST1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BST1.h"
#include "Node1.h"
using namespace std;


int main()
{
	int ky=31;
	std::string it = "Michael";
	BST bst1;
	bst1.insertSearch();
	bst1.insert(ky, it);
	bst1.testFunction(22);
	bst1.testFunction(25);
	bst1.testFunction(0);
	bst1.testFunction(31);
	//bst1.remove(22);
	//bst1.testFunction(-2);
	
    return 0;
}

