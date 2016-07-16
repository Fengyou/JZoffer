#pragma once
#include<iostream>

using namespace std;

template<class T>
struct SListNode
{
	T _data;
	SListNode<T>* _next;

	SListNode(const T x)
		:_data(x)
		, _next(NULL)
	{}
};

template<class T>
class SList
{
	typedef SListNode<T> Node;
public:
	SList(const T x)
	{
		_head = new Node(x);
		_head->_next = NULL;
	}

	void PushBack(const T x)
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
		{
			begin = begin->_next;
		}
		begin->_next = tmp;
		begin = begin->_next;
		begin->_next=NULL;
	}
	void PrintEndToHead()
	{
		_PrintEndToHead(_head);
		cout <<"NULL"<< endl;
	}
	//链表逆置
	void EndToHead()
	{
		Node* tmp = NULL;
		Node* begin = _head;
		Node* prev = begin;
		while (begin)
		{
			begin = begin->_next;
			prev->_next = tmp;
			tmp = prev;
			prev = begin;
		}
		_head=tmp;
	}
	//尾到头打印
	void _PrintEndToHead(Node*& head)
	{
		if (head)
		{
			if (head->_next)
				_PrintEndToHead(head->_next);
		}
		cout << head->_data << "->";
	}
	void Print()
	{
		Node* begin = _head;
		while(begin && begin->_next)
		{
			cout << begin->_data << "->";
			begin = begin->_next;
		}
		cout << begin->_data << "->NULL" << endl;
	}

private:
	Node* _head;
};