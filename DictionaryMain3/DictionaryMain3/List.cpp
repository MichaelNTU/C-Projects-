#include "stdafx.h"
#include "List.h"
#include<iostream>
//#include<iostream>
//using namespace std;

//template<typename T, typename T2>
List::List(int key_value, std::string item_name)
{
	keys = key_value;
	items = item_name;
	//cout << keys;
	//cout << items << endl;
}
//template<typename T, typename T2>
List::List()
{
}

List & List::operator=(List && that)
{
	nextNode = that.nextNode;
	that.nextNode->items = nullptr;
	that.nextNode->keys = NULL;
	that.nextNode->nextNode2 = nullptr;
	return that; // TODO: insert return statement here
}

//List & List::operator=(const List & nod)
//{
//	this->items = nod.items;
//	this->keys = nod.keys;
//	this->nextNode = nod.nextNode;
//	if (nod.nextNode == nullptr)
//	{
//		this->nextNode = nullptr;
//
//	}
//	else
//	{
//		this->nextNode = new List (*(nod.nextNode));
//	}
//
//	return *this;// TODO: insert return statement here
//}

//template<typename T, typename T2>
void List::insertRec(int kys, string items, List*& node)
{
	
	if (node == nullptr) {
		List*list = new List(kys, items);
		node = list;
		//list->nextNode = 0;
		//cout << "Creating Node:  " << kys << endl;
		//cout << list->keys;
		//list = list->nextNode;
	}
	else if (kys < node->keys) {
		insertRec(kys, items,node->nextNode);

	}
	else if (kys >node->keys)
	{
		insertRec(kys, items, node->nextNode2);
	}
	else if (kys == node->keys) {
		node->items = items;
	}
}

//template<typename T, typename T2>
string * List::lookupRec(int ky)
{
	//string itms;
	//List *node = new List(ky,itms);
	if (ky< this->keys)
	{
		return nextNode->lookupRec(ky);
		//cout << "Key not found" << endl;

	}
	else
	{

		if (ky > this->keys)
		{
			if (!nextNode2)
			{
				return nullptr;
			}
			return nextNode2->lookupRec(ky);
		}
		if (ky>this->keys)
		{
			return nextNode2->lookupRec(ky);

		}
		else
		{
			if (ky < this->keys)
			{
				if (!nextNode)
				{
					return nullptr;

				}
				return nextNode->lookupRec(ky);

			}

		}
		if (ky == this->keys)
		{
			return &items;
		}
		else
		{
			return nullptr;
		}
		if (ky != this->keys)
		{
			return nullptr;
		}
	}
	//return nullptr;
}

//template<typename T, typename T2>
void List::removeRec(int kys, string its)
{
	List*noded, *trailnoded;
	List* node = NULL;

	if (kys == NULL)
	{
		std::cout << "Key not found" << endl;
	}
	else
	{
		noded = node;
		while (node != NULL)
		{
			if (node->keys == kys)
			{
				cout << "key is not eqaul Null" << endl;
			}
			else
			{
				noded = trailnoded = node;
				if (kys < node->keys)
					node = node->nextNode;
				else
					noded = trailnoded = node;
				if (kys > node->keys)
					node = node->nextNode;
				else
					node->items = its;
			}
			if (node == NULL)
				cout << "Node is not found in the List" << endl;
			else
			{
				noded = node;
				node = NULL;
				delete noded;
				cout << "A Node has been deleted" << endl;

			}

		}
	}
}
