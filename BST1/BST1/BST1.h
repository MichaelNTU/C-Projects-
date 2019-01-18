#pragma once
#include<string>
#include <iostream>
#include<cstdio>
#include <fstream>

class BST
{
public:
	BST() = default;

	void insert(int, std::string);
	void remove(int);
	std::string* lookup(int);
	void insertSearch();
	void testFunction(int k);

private:
	class Node;

	Node* root = nullptr;
};
