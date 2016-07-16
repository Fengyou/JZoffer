#pragma once 
#include<iostream>
#include<stack>

using namespace std;

//用两个栈实现队列的增、删（先进先出）
template<class T>
class ToQueue
{
public:
	ToQueue()
	{}
public:
	void Push(const T x)
	{
		In.push(x);
	}
	void Pop()
	{
		if (In.empty())
		{
			cout << "无元素！" << endl;
			return;
		}
		while (!In.empty())
		{
			Out.push(In.top());
			In.pop();
		}
		Out.pop();
		while (!Out.empty())
		{
			In.push(Out.top());
			Out.pop();
		}
	}
	void Print()
	{
		while (!In.empty())
		{
			Out.push(In.top());
			In.pop();
		}
		while (!Out.empty())
		{
			cout << Out.top() << " ";
			In.push(Out.top());
			Out.pop();
		}
		cout << endl;
	}
private:
	stack<T> In;
	stack<T> Out;
};