#pragma once
#include<iostream>

using namespace std;

struct SListNode
{
	int _data;
	SListNode* _next;

	SListNode(const int x)
		:_data(x)
		, _next(NULL)
	{}
};

class SList
{
	typedef SListNode Node;
public:
	SList()
	{}

	void PushBack(const int x)
	{
		Node* tmp = new Node(x);
		if (_head == NULL)
		{
			_head = tmp;
			_head->_next = NULL;
			return;
		}
		Node* begin = _head;
		while (begin->_next)
			begin = begin->_next;
		begin->_next = tmp;
		begin = begin->_next;
		begin->_next = NULL;
	}
	void Print()
	{
		if (_head == NULL)
		{
			cout << "空链表！！" << endl;
			return;
		}
		Node* begin = _head;
		while (begin)
		{
			cout << begin->_data << "->";
			begin = begin->_next;
		}
		cout << "NULL" << endl;
	}
	void PopBack()
	{
		if (_head == NULL)
		{
			cout << "空链表！！" << endl;
			return;
		}
		if (_head && _head->_next==NULL)
		{
			_head = NULL;
			return;
		}
		Node* slow = _head;
		Node* fast = _head->_next;
		while (fast->_next)
		{
			slow = slow->_next;
			fast = fast->_next;
		}
		Node* del = fast;
		slow->_next = NULL;
		delete del;
	}

	Node* Find(int x)
	{
		Node* begin = _head;
		while (begin)
		{
			if (begin->_data == x)
				return begin;
			begin = begin->_next;
		}
		return NULL;
	}
	//O(1)时间删除节点
	void DeleteNode(Node* deleteNode)
	{
		Node* del = NULL;

		if (deleteNode->_next != NULL)
		{
			Node* next = deleteNode->_next;
			deleteNode->_data = next->_data;
			del = next;
			deleteNode->_next = next->_next;
			delete del;
		}
		else
		{
			PopBack();
		}		
	}
private:
	Node* _head;
};