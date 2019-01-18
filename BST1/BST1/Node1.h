#pragma once
#include"stdafx.h"
#include<string>
#include <iostream>
#include<cstdio>
#include <iostream>
#include <fstream>
#include "BST1.h"


class BST::Node
{
public:
	Node(int, std::string);
	Node();
	std::string* lookupRec(int key);
	static void insertRec(int, std::string, Node*&);
	 void removeRec(int, std::string, Node* &);
	void removeNode(Node*&);

private:
	int key;
	std::string item;

	Node* leftChild = nullptr;
	Node* rightChild = nullptr;
};
