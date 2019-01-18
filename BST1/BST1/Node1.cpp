#include "stdafx.h"
#include "Node1.h"
#include "BST1.h"
#include<string>
#include <iostream>
using namespace std;

BST::Node::Node(int key_value, std::string item_name)
{
	key = key_value;
	item = item_name;
	//cout << key;
	//cout << item << endl;
}

BST::Node::Node()
{
}

std::string * BST::Node::lookupRec(int k)
{
	if (k<this->key)
	{
		return leftChild->lookupRec(k);

	}
	else
	{
		
		if (k > this->key)
		{
			if (!rightChild)
			{
				return nullptr;
			}
			return rightChild->lookupRec(k);
		}
		if (k>this->key)
		{
			return rightChild->lookupRec(k);

		}
		else  //(k < this->key)
		{
			if (k < this->key)
			{
				if (!leftChild)
				{
					return nullptr;

				}
				return leftChild->lookupRec(k);

			}

		}
		//else
		//{
			if (k == this->key)
			{
				return &item;
			}
			else
			{
				return nullptr;
			}
			if(k!= this->key)
			{
				return nullptr;
			}
		//}
	}
}

void BST::Node::insertRec(int k, std::string i, Node *& node)
{
	if (node == nullptr) {
		Node*	root = new Node(k, i);
		node = root;
		//cout << "Creating Node:  " << k << endl;
	}
	else if (k < node->key) {
		insertRec(k,i,node->leftChild);

	}
	else if(k>node->key)
	{
		insertRec(k, i, node->rightChild);
	}
	else if (k == node->key) {
		node->item =i;

	}
	
}

void BST::Node::removeRec(int keys, std::string items, Node* & node)
{
	Node*noded,*trailnoded;
	
	if (key==NULL)
	{
		std::cout << "Key not found" << endl;
	}
	else
	{
		noded = node;
		while (noded !=NULL)
		{
			if (noded->key == keys) { cout << "key !=NULL" << endl; }
			else
			{
				noded = trailnoded= noded;
				if (keys < node->key)
					node = node->leftChild;
				else
					node = node->rightChild;

			}
			if (node == NULL)
				cout << "Node is not found in the tree to be deleted" << endl;
			else
			{
				if (node == noded)
					removeNode(node);
				else if (keys < noded->key)
					removeNode(noded->leftChild);
				else removeNode(noded->rightChild);
			}

		}//end block
	}
}

void BST::Node::removeNode(Node* &node)
{
	Node*noded, *trailnoded, *temp;
	if (node == NULL)
		cout << "Node cant be remove from empy tree" << endl;
	else if (node->leftChild == NULL && node->rightChild == NULL)
	{
		temp = node;
		node = NULL;
		delete temp;
		cout << "Left and Right Chiled is Empty" << endl;
	}
	else if (node->leftChild==NULL)
	{
		temp = node;
		node->rightChild;
		delete temp;
		cout << "LeftChiled is now Empty" << endl;
	
	}
	else if (node->rightChild == NULL)
	{
		temp = node;
		node->leftChild;
		delete temp;
		cout << "RightChiled is now Empty" << endl;

	}
	else
	{
		cout << "Left and Right Chiled are now Empty" << endl;
		noded = node->leftChild;
		trailnoded = NULL;
		while (noded->rightChild !=NULL)
		{
			trailnoded = noded;
			noded = noded->rightChild;
		}
		node->key = noded->key;
		if (trailnoded == NULL)
			node->leftChild = noded->leftChild;
		else
			trailnoded->rightChild = noded->leftChild;
		delete noded;
	}
}
