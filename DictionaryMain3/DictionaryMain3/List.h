#pragma once
#include<string>
#include<iostream>
using namespace std;
//class Dictionary;
//template<typename T, typename T2>
class List
{

public:
	List(int, std::string);
	List();
	List & operator = (List && that);
	//List & operator = (const List & nod);
	static void insertRec(int, string, List*&);
	string* lookupRec(int);
	void removeRec(int, string);
private:
		//Node & operator = (const Node & nod);
		int keys;
		string items;
		List* nextNode = nullptr;
		List* nextNode2 = nullptr;
	};

//template<typename T, typename T2>
//List<T, T2>::List(int key_value, std::string item_name)
//{
//	keys = key_value;
//	items = item_name;
//	//cout << keys;
//	//cout << items << endl;
//}
//template<typename T, typename T2>
//List<T, T2>::List()
//{
//}
//
//template<typename T, typename T2>
//void List<T, T2>::insertRec(int kys, string items)
//{
//	List *node = NULL, *current = NULL;
//	if (!node) {
//		while (current)
//		{
//			node = current;
//			current = current->nextNode;
//		}
//	}
//	if (node == nullptr) {
//		List*list = new List(kys, items);
//		node = list;
//		list->nextNode = 0;
//		//cout << "Creating Node:  " << kys << endl;
//		//cout << list->keys;
//		list = list->nextNode;
//	}
//	else if (kys < node->nextNode->keys) {
//		insertRec(kys, items);
//
//	}
//	else if (kys >node->nextNode->keys)
//	{
//		insertRec(kys, items);
//	}
//	else if (kys == node->nextNode->keys) {
//		node->nextNode->items != items;
//	}
//}
//
//template<typename T, typename T2>
//string * List<T, T2>::lookupRec(int ky)
//{
//	string itms;
//	List *node = new List(ky, itms);
//	if (ky< node->keys)
//	{
//		return this->lookupRec(ky);
//		cout << "Key not found" << endl;
//
//	}
//	else
//	{
//
//		if (ky > node->keys)
//		{
//			if (!node->nextNode)
//			{
//				return nullptr;
//			}
//			return this->lookupRec(ky);
//		}
//		if (ky>node->keys)
//		{
//			return this->lookupRec(ky);
//
//		}
//		else
//		{
//			if (ky < node->keys)
//			{
//				if (!node->nextNode)
//				{
//					return nullptr;
//
//				}
//				return this->lookupRec(ky);
//
//			}
//
//		}
//		if (ky == node->keys)
//		{
//			return &node->items;
//		}
//		else
//		{
//			return nullptr;
//		}
//		if (ky != node->keys)
//		{
//			return nullptr;
//		}
//	}
//	return nullptr;
//}
//
//template<typename T, typename T2>
//void List<T, T2>::removeRec(int kys, string its)
//{
//	//Dictionary dc;
//	List*noded, *trailnoded;
//	//dc.list->finite;
//	List* node = NULL;
//
//	if (kys == NULL)
//	{
//		std::cout << "Key not found" << endl;
//	}
//	else
//	{
//		noded = node;
//		while (node != NULL)
//		{
//			if (node->keys == kys)
//			{
//				cout << "key is not eqaul Null" << endl;
//			}
//			else
//			{
//				noded = trailnoded = node;
//				if (kys < node->keys)
//					node = node->nextNode;
//				else
//					noded = trailnoded = node;
//				if (kys > node->keys)
//					node = node->nextNode;
//				else
//					node->items = its;
//			}
//			if (node == NULL)
//				cout << "Node is not found in the List" << endl;
//			else
//			{
//				noded = node;
//				node = NULL;
//				delete noded;
//				cout << "A Node has been deleted" << endl;
//
//			}
//
//		}
//	}
//}



